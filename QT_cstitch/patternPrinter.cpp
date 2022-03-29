//
// Copyright 2010, 2011 Tom Klein.
//
// This file is part of cstitch.
//
// cstitch is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#include "patternPrinter.h"

#include <QtCore/QDebug>
#include <QtCore/qmath.h>
#include <QtCore/QProcess>
#include <QtWidgets/QMessageBox>
#include <QSettings>
#include <QDesktopServices>

#include <QtGui/QImage>
#include <QtWidgets/QFileDialog>

#include "patternMetadata.h"
#include "imageUtility.h"
#include "colorLists.h"
#include "utility.h"

// coordinates for progress meters (meters aren't parented, so we fix
// constant coords instead of letting the system choose them randomly)
extern const int PROGRESS_X_COORDINATE;
extern const int PROGRESS_Y_COORDINATE;

patternPrinter::patternPrinter(patternImagePtr image,
                               const QImage& originalImage) 
  : imageContainer_(image), squareImage_(image->squareImage()),
    squareDim_(image->squareDimension()), originalImage_(originalImage),
    symbolIconSize_(0), symbolColorBorderWidth_(0), symbolSize_(0),
    colors_(image->flossColors()), fontMetrics_(QFont()) { }

bool patternPrinter::beginPainter(const QString& outputFileName) {

  if (painter_.begin(&printer_)) {
    return true;
  }

  // Acroread (and maybe others?) locks any file it has opened, in which case
  // our attempt to write fails.  Warn the user.
  const QString errorString =
    QObject::tr("We were unable to write to the selected file. If there are any "
                "applications/tabs currently viewing the file please close them "
                "and try again, or try saving to a different file.\n\n%1")
             .arg(outputFileName);
  QMessageBox::warning(NULL, QObject::tr("Unable to write to pdf"), errorString);
  return false;
}

void patternPrinter::save() {

  printer_.setOutputFormat(QPrinter::PdfFormat);  // actually default
  //qreal l,r,t,b;
  //printer_.getPageMargins(&l, &t, &r, &b, QPrinter::Point);
  printer_.setPageMargins(QMarginsF(.35, .35, .35, .35), QPageLayout::Inch);
  const QRectF printerRect = printer_.pageRect(QPrinter::Inch);
  printerWidth_ = printerRect.width();
  printerHeight_ = printerRect.height();
  patternMetadata metadata(printerWidth_, 20, 8, 8, NULL);
  const int metadataReturnCode = metadata.exec();
  if (metadataReturnCode == QDialog::Rejected) {
    return;
  }
  metadata.saveSettings();

  const QString outputFile =
    QFileDialog::getSaveFileName(NULL, QObject::tr("Save pattern"), ".",
                                 QObject::tr("Pdf files (*.pdf)\n"
                                             "All (*)"));
  if (outputFile.isEmpty()) {
    return;
  }

  printer_.setOutputFileName(outputFile);

  // to "print", you draw on the printer object
  // do printer.newPage() for each new page
  if (!beginPainter(outputFile)) {
    return;
  }
  fontMetrics_ = painter_.fontMetrics();

  //// draw title pages with the original and squared images
  drawTitlePage(metadata);

  symbolIconSize_ = metadata.pdfSymbolIconSize();
  symbolColorBorderWidth_ = metadata.pdfSymbolColorBorderWidth();
  symbolSize_ = symbolIconSize_ + 2 * symbolColorBorderWidth_;
  boldLinesFrequency_ = metadata.boldLinesFrequency();
  patternImageWidth_ = (squareImage_.width()/squareDim_) * symbolSize_;
  patternImageHeight_ = (squareImage_.height()/squareDim_) * symbolSize_;
  // horizontal boxes per pdf page
  xBoxesPerPage_ = printerWidth_/symbolSize_;
  xBoxes_ = squareImage_.width()/squareDim_;
  // vertical boxes per pdf page
  yBoxesPerPage_ = printerHeight_/symbolSize_;
  yBoxes_ = squareImage_.height()/squareDim_;

  //// figure out which orientation to use and how many pages it will
  //// require
  computeOrientationAndPageCounts();

  //// present the page-number to image-portion correspondence
  const int legendHeight = drawLegend();
  
  //// present the color list
  drawColorList(legendHeight);

  //// draw the pattern pages
  const bool cancel = drawPatternPages();
  if (cancel) {
    // abort probably does nothing; the printer writes to disk as it goes,
    // so we've already written a partial pdf
    painter_.end();
    printer_.abort();
    QFile fileToRemove(outputFile);
    fileToRemove.remove();
    return;
  }
  // End printing.
  painter_.end();

  maybeLoadExternalPdfViewer(outputFile);
}

void patternPrinter::maybeLoadExternalPdfViewer(const QString& pdfPath) {

  const QSettings settings("cstitch", "cstitch");
  if (settings.contains("use_pdf_viewer") &&
      settings.contains("pdf_viewer_path")) {
    const bool usePdfViewer = settings.value("use_pdf_viewer").toBool();
    const QString pdfViewerPath = settings.value("pdf_viewer_path").toString();
    if (usePdfViewer) {
      loadPdfInViewer(pdfPath, pdfViewerPath);
    }
    // If the user told us what to do then don't try anything else.
    // TODO: Allow the user to revert to having us try to find a viewer.
    return;
  }

  // Let the system try to find a viewer.
  if (QDesktopServices::openUrl(QUrl("file:///" + pdfPath))) {
    return;
  }

  // Try to find a viewer ourselves.
  loadPdfInViewer(pdfPath, getExternalPdfViewer());
}

void patternPrinter::loadPdfInViewer(const QString& pdfPath,
                                     const QString& pdfViewerPath) {

  if (pdfViewerPath.isEmpty()) {
    return;
  }

  QProcess::startDetached(pdfViewerPath,
                          QStringList(QDir::toNativeSeparators(pdfPath)));
}

QString patternPrinter::getExternalPdfViewer() {

  QString pdfViewerPath;
#ifdef Q_OS_LINUX
  QStringList viewers;
  viewers << "/usr/bin/evince" << "/usr/bin/okular" <<
    "/usr/bin/xpdf" << "/usr/bin/acroread";
  for (int i = 0, size = viewers.size(); i < size; ++i) {
    const QString thisViewer = viewers[i];
    if (QFile::exists(thisViewer)) {
      pdfViewerPath = thisViewer;
      break;
    }
  }
#endif
#ifdef Q_OS_WIN
  // try to find acroread
  QStringList adobeDirectories;
  adobeDirectories << "C:/Program Files/Adobe/" <<
    "C:/Program Files (x86)/Adobe/";
  for (int i = 0, size = adobeDirectories.size(); i < size; ++i) {
    QDir thisDir = adobeDirectories[i];
    if (thisDir.exists()) {
      // sort by time - if somebody has multiple versions of Reader
      // installed (not officially supported by Adobe) and they
      // install an older version after a newer version then this will
      // choose the wrong version
      const QStringList readers =
        thisDir.entryList(QStringList("*Reader *"), QDir::Dirs,
                          QDir::Time|QDir::Reversed);
      if (!readers.empty() && thisDir.exists(readers[0] + "/Reader")) {
        thisDir.cd(readers[0] + "/Reader");
        if (thisDir.exists("AcroRd32.exe")) {
          pdfViewerPath = thisDir.absoluteFilePath("AcroRd32.exe");
          break;
        }
        else if (thisDir.exists("AcroRd64.exe")) {
          pdfViewerPath = thisDir.absoluteFilePath("AcroRd64.exe");
          break;
        }
      }
    }
  }
#endif

  return pdfViewerPath;
}

void patternPrinter::drawTitlePage(const patternMetadata& metadata) {

  QRectF availableTextRect = printer_.pageRect(QPrinter::Inch);
  // the availableTextRect is absolute with respect to the page, but
  // when we draw it's relative to availableTextRect - use draw coords
  availableTextRect.moveTopLeft(QPoint(0, 0));
  if (metadata.title() != "") {
    drawTitleMetadata(metadata.titleFontSize(), true,
                      metadata.title(), &availableTextRect);
  }
  if (metadata.patternBy() != "") {
    drawTitleMetadata(metadata.patternByFontSize(), false,
                      metadata.patternBy(), &availableTextRect);
  }
  if (metadata.photoBy() != "") {
    drawTitleMetadata(metadata.photoByFontSize(), false,
                      metadata.photoBy(), &availableTextRect);
  }
  // title margin
  availableTextRect.setTop(availableTextRect.top() + 5);

  painter_.save();
  QPen pen(painter_.pen());
  pen.setWidth(2);
  painter_.setPen(pen);
  //// draw the original image on this page
  QSizeF size = availableTextRect.size();
  const QImage original =
    originalImage_.scaled(size.toSize(), Qt::KeepAspectRatio,
                          Qt::SmoothTransformation);
  const int xStart = (availableTextRect.width() - original.width())/2;
  const int yStart = availableTextRect.top();
  const QPoint originalStart(xStart, yStart);
  painter_.drawImage(originalStart, original);
  painter_.drawRect(QRect(originalStart, original.size()));
  printer_.newPage();

  //// draw the squared image
  QRectF usableRect = printer_.pageRect(QPrinter::Inch);
  usableRect.moveTopLeft(QPoint(0, 0));
  QSizeF usableRectSizeF = usableRect.size();
  // figure out if gridding will be reasonable at the zoom level needed
  // to fit the page
  const QSize squareImageSize = squareImage_.size();
  const int newSquareDim =
    ::computeGridForImageFit(squareImageSize, usableRectSizeF.toSize(), squareDim_);
  QImage squareImage;
  if (newSquareDim > 0) {
    const int newWidth = newSquareDim * squareImageSize.width()/squareDim_;
    const int newHeight = newSquareDim * squareImageSize.height()/squareDim_;
    squareImage = squareImage_.scaled(newWidth, newHeight,
                                      Qt::KeepAspectRatio,
                                      Qt::SmoothTransformation);
    squareImage = gridedImage(squareImage, squareDim_,
                              squareImageSize.width(),
                              squareImageSize.height(), .2);
  }
  else {
    // oops, we can't commit one (or more) pixels to each square of the pattern
    // and still draw it to fit inside our page bounds, so just scale to fit the
    // bounds - we definitely can't grid
    squareImage = squareImage_.scaled(usableRectSizeF.toSize(), Qt::KeepAspectRatio,
                                      Qt::SmoothTransformation);
  }
  const QPoint squareStart((usableRect.width() - squareImage.width())/2, 0);
  painter_.drawImage(squareStart, squareImage);
  painter_.drawRect(QRect(squareStart, squareImage.size()));
  painter_.restore();
  printer_.newPage();
}

void patternPrinter::drawTitleMetadata(int fontSize, bool bold,
                                       const QString& text,
                                       QRectF* availableTextRect) {

  painter_.save();
  QFont font = painter_.font();
  font.setPointSize(fontSize);
  font.setBold(bold);
  painter_.setFont(font);
  QRectF* usedTextRect;

  painter_.drawText(*availableTextRect, Qt::TextWordWrap | Qt::AlignHCenter, text, usedTextRect);

  (*availableTextRect).setTop((*usedTextRect).bottom());
  painter_.restore();
}

QImage patternPrinter::gridedImage(const QImage& image, int originalSquareDim,
                                   int originalWidth, int originalHeight,
                                   qreal gridLineWidth) const {
  
  QImage returnImage = image;
  ::gridImage(&returnImage, originalSquareDim,
              originalWidth, originalHeight, Qt::black, gridLineWidth);
  return returnImage;
}

void patternPrinter::computeOrientationAndPageCounts() {

  int tWidthPerPage, tHeightPerPage; // temps

  // how much room do we want for grid-line-count numbers (in multiples
  // of symbolSize_ for future use)
  margin_ = 0;
  while (margin_ < sWidth("555")) {
    margin_ += symbolSize_;
  }
  xBoxesPerPage_ -= margin_/symbolSize_;
  tWidthPerPage = xBoxesPerPage_ * symbolSize_; // image width per page

  yBoxesPerPage_ -= margin_/symbolSize_;
  tHeightPerPage = yBoxesPerPage_ * symbolSize_; // image height per page

  int landscapeXPages, landscapeYPages;
  const int landscapePages =
    computeNumPagesHelper(patternImageWidth_, patternImageHeight_,
                          tHeightPerPage, tWidthPerPage,
                          &landscapeXPages, &landscapeYPages);
  int portraitXPages, portraitYPages;
  const int portraitPages =
    computeNumPagesHelper(patternImageWidth_, patternImageHeight_,
                          tWidthPerPage, tHeightPerPage,
                          &portraitXPages, &portraitYPages);

  if (portraitPages <= landscapePages) {
    portrait_ = true;
    xPages_ = portraitXPages;
    yPages_ = portraitYPages;
    widthPerPage_ = tWidthPerPage;
    heightPerPage_ = tHeightPerPage;
  }
  else { // landscape
    // don't switch printerWidth/Height yet since we'll be printing the
    // legend in portrait mode regardless
    portrait_ = false;
    xPages_ = landscapeXPages;
    yPages_ = landscapeYPages;
    widthPerPage_ = tHeightPerPage;
    heightPerPage_ = tWidthPerPage;
    int temp = xBoxesPerPage_;
    xBoxesPerPage_ = yBoxesPerPage_;
    yBoxesPerPage_ = temp;
  }
}

int patternPrinter::computeNumPagesHelper(int w, int h, int widthPerPage,
                                          int heightPerPage,
                                          int* xPages, int* yPages) const {

  int tXpages = 0; // will become xPages
  int tYpages = 0; // will become yPages
  // horizontal boxes per page
  const int xBoxesPerPage = widthPerPage/symbolSize_;
  // vertical boxes per page
  const int yBoxesPerPage = heightPerPage/symbolSize_;

  // horizontal pages needed
  tXpages = ceil((w/symbolSize_)/static_cast<qreal>(xBoxesPerPage));
  // vertical pages needed
  tYpages = ceil((h/symbolSize_)/static_cast<qreal>(yBoxesPerPage));
  *xPages = tXpages;
  *yPages = tYpages;

  return tXpages * tYpages;
}

int patternPrinter::drawLegend() {

  // max page number width
  const int maxPageNumWidth =
    sWidth(QString(::itoqs(xPages_ * yPages_).size(), '5')) + 10;
  const int maxPageNumHeight = sHeight("5");

  const qreal minLegendWidth = xPages_ * maxPageNumWidth;
  const qreal minLegendHeight = yPages_ * maxPageNumHeight;
  qreal ratio; // legend to original
  qreal legendWidth, legendHeight;
  if (patternImageWidth_ > patternImageHeight_) {
    legendWidth = (printerWidth_/4 > minLegendWidth) ?
      printerWidth_/4 : minLegendWidth;
    ratio = legendWidth/patternImageWidth_;
    legendHeight = ratio * patternImageHeight_;
  }
  else {
    legendHeight = (printerHeight_/5 > minLegendHeight) ?
      printerHeight_/5 : minLegendHeight;
    ratio = legendHeight/patternImageHeight_;
    legendWidth = ratio * patternImageWidth_;
  }
  const int pageWidth = (widthPerPage_ > patternImageWidth_) ?
    patternImageWidth_ : widthPerPage_;
  const int pageHeight = (heightPerPage_ > patternImageHeight_) ?
    patternImageHeight_ : heightPerPage_;
  // width of each "page" on the legend
  qreal legendBoxWidth = pageWidth * ratio;
  if (legendBoxWidth < maxPageNumWidth) {
    legendWidth = (legendWidth/legendBoxWidth) * maxPageNumWidth;
    legendBoxWidth = maxPageNumWidth;
  }
  // floating point zero (not, but good enough)
  const qreal epsilon = .0000001;
  // xx is the last "page" box width
  qreal xx = legendWidth - floor(legendWidth/legendBoxWidth)*legendBoxWidth;
  if (xx < epsilon) { // computer zero
    xx = legendBoxWidth;
  }
  else if (xx > 0 && xx < maxPageNumWidth) {
    legendWidth -= xx;
    xx = (maxPageNumWidth > legendBoxWidth) ?
      legendBoxWidth : maxPageNumWidth;
    legendWidth += xx;
  }

  // height of each "page" box on the legend
  qreal legendBoxHeight = pageHeight * ratio;
  if (legendBoxHeight < maxPageNumHeight) {
    legendHeight = (legendHeight/legendBoxHeight)*maxPageNumHeight;
    legendBoxHeight = maxPageNumHeight;
  }
  // yy is the last "page" box height
  qreal yy = legendHeight -
    floor(legendHeight/legendBoxHeight)*legendBoxHeight;
  if (yy < epsilon) {
    yy = legendBoxHeight;
  }
  else if (yy > 0 && yy < maxPageNumHeight) {
    legendHeight -= yy;
    yy = (maxPageNumHeight > legendBoxHeight) ?
      legendBoxHeight : maxPageNumHeight;
    legendHeight += yy;
  }

  // the border
  const qreal xstart = printerWidth_/2 - legendWidth/2;
  const qreal ystart = symbolSize_;
  painter_.drawRect(QRectF(xstart, ystart, legendWidth, legendHeight));
  // the interior vertical lines
  for (int i = 1; i * legendBoxWidth < legendWidth; ++i) {
    painter_.drawLine(QPointF(xstart + i * legendBoxWidth, ystart),
                      QPointF(xstart + i * legendBoxWidth,
                              ystart + legendHeight));
  }
  // the interior horizontal lines
  for (int j = 1; j * legendBoxHeight < legendHeight; ++j) {
    painter_.drawLine(QPointF(xstart, ystart + j * legendBoxHeight),
                      QPointF(xstart + legendWidth,
                              ystart + j * legendBoxHeight));
  }
  // add the page numbers to the legend boxes
  for (int x = 1; x <= xPages_; ++x) {
    for (int y = 1; y <= yPages_; ++y) {
      const qreal thisBoxWidth = (x < xPages_ || xPages_ == 1) ?
        legendBoxWidth : xx;
      const qreal thisBoxHeight = (y < yPages_ || yPages_ == 1) ?
        legendBoxHeight : yy;
      const int pageNum = yPages_ * (x-1) + y;
      painter_.
        drawText(QPointF(xstart + (x-1) * legendBoxWidth +
                         static_cast<qreal>(thisBoxWidth - sWidth(pageNum))/2,
                         ystart + (y-1) * legendBoxHeight +
                         static_cast<qreal>(thisBoxHeight)/2 +
                         static_cast<qreal>(sHeight(pageNum))/4),
                 ::itoqs(pageNum));
    }
  }
  return ystart + legendHeight;
}

class flossIntensity {
 public:
  bool operator()(const typedFloss& f1, const typedFloss& f2) const {
    return ::definiteIntensityCompare(f1.color(), f2.color());
  }
};

void patternPrinter::drawColorList(int startHeight) {

  painter_.save();
  int yused = startHeight;
  // have the list font match the symbol size, within reason
  // TODO: limit so that overflow isn't possible
  int symbolDim = qMax(symbolSize_, sHeight("B"));
  symbolDim = qMin(symbolDim, 35);
  ::setFontHeight(&painter_, symbolDim);
  const QFont listFont = painter_.font();

  const QFontMetrics listFontMetric(listFont);
  const int fontHeight = listFontMetric.height();

  //// list color count and box dimensions
  QRect textBoundingRect;
  painter_.drawText(QRect(0, yused + fontHeight, printerWidth_,
                          4 * fontHeight),
                    Qt::TextWordWrap,
                    QObject::tr("The pattern uses %1 colors and is %2 "
                                "squares wide by %3 squares high.")
                    .arg(::itoqs(colors_.size()))
                    .arg(::itoqs(xBoxes_))
                    .arg(::itoqs(yBoxes_)),
                    &textBoundingRect);
                    
  yused += textBoundingRect.height() + fontHeight;
  
  const bool useCodeAbbreviations = printListDescription(&yused, fontHeight);
  // save this height so it can be restored for a second column
  const int yusedSaved = yused;

  //// now draw the color list
  QFont boldFont = listFont;
  boldFont.setBold(true);
  painter_.setFont(boldFont);
  const QFontMetrics boldFontMetric(boldFont);

  //// tab stops
  const int padding = 10;
  const int swatchTab = symbolDim + 5;
  const int countTab = 2 * swatchTab + padding;
  const int codeTab = countTab + listFontMetric.horizontalAdvance("99999999") + padding;
  const int nameTab = codeTab + listFontMetric.horizontalAdvance("255 255 255") + padding;
  const int endTab = nameTab + boldFontMetric.horizontalAdvance("~8888:Ultra V DK Turquoise");

  yused += fontHeight;
  drawListHeader(0, yused, countTab, codeTab, nameTab);
  painter_.drawLine(0, yused + 3, endTab, yused + 3);
  yused += 5;
  painter_.setFont(listFont);

  int xtab = 0;
  bool partial = true; // the first page list may be a partial page
  QVector<typedFloss> flossVector = ::rgbToVerboseFloss(colors_);
  std::sort(flossVector.begin(), flossVector.end(), flossIntensity());

  // build a color count map
  QHash<QRgb, int> countsHash;
  ::colorCounts(squareImage_, squareDim_, &countsHash);

  QPixmap thisSymbol;
  QPainter symbolPainter;
  QPixmap thisPixmap(symbolDim, symbolDim);
  for (int i = 0, size = flossVector.size(); i < size; ++i) {
    const typedFloss thisFloss = flossVector[i];
    if (yused + fontHeight > printerHeight_) { // out of room in this column
      // if we're currently in a second column or there isn't room for a
      // second column, then start a new page
      if (xtab > 0 || endTab + 50 + endTab > printerWidth_) {
        xtab = 0;
        printer_.newPage();
        partial = false;
        yused = 0;
        painter_.setFont(boldFont);
        drawListHeader(xtab, fontHeight, countTab, codeTab, nameTab);
        painter_.setFont(listFont);
        yused += fontHeight;
        painter_.drawLine(xtab, yused + 3, endTab, yused + 3);
        yused += 5;
      }
      else { // start a second column
        xtab = endTab + 50;
        painter_.setFont(boldFont);
        if (partial) { // second column on first page of listing
          yused = yusedSaved;
          drawListHeader(xtab, fontHeight + yused, countTab,
                         codeTab, nameTab);
          yused += fontHeight;
        }
        else {
          yused = 0;
          drawListHeader(xtab, fontHeight, countTab, codeTab, nameTab);
          yused += fontHeight;
        }
        painter_.setFont(listFont);
        painter_.drawLine(xtab, yused + 3, endTab + xtab, yused + 3);
        yused += 5;
      }
    }
    //// symbol
    thisSymbol = imageContainer_->symbolNoBorder(thisFloss.color(),
                                                 symbolDim);
    symbolPainter.begin(&thisSymbol);
    symbolPainter.drawRect(0, 0, thisSymbol.width() - 1, 
                           thisSymbol.height() - 1);
    symbolPainter.end();
    painter_.drawPixmap(xtab, yused + 5, thisSymbol);
    //// color swatch ("sample")
    thisPixmap.fill(thisFloss.color().qc());
    painter_.drawPixmap(swatchTab + xtab + 2, yused + 5, thisPixmap);
    painter_.drawRect(swatchTab + xtab + 2, yused + 5,
                      symbolDim, symbolDim);
    //// color count
    painter_.drawText(countTab + xtab, yused + symbolDim,
                      ::itoqs(countsHash[thisFloss.color().qrgb()]));
    //// floss code (or rgb code)
    painter_.drawText(codeTab + xtab, yused + symbolDim,
                      flossToCode(thisFloss, useCodeAbbreviations));
    //// color name
    painter_.drawText(nameTab + xtab, yused + symbolDim, thisFloss.name());

    yused += symbolDim + 5;
  }
  printer_.newPage();
  painter_.restore();
}

QString patternPrinter::flossToCode(const typedFloss& f,
                                    bool useCodeAbbreviations) const {

  const int code = f.code();
  QString codeString;
  if (code != -1) { // valid floss
    if (code >= 0) {
      codeString = ::itoqs(code);
    }
    else { // the code is a string in this case
      if (code == WHITE_CODE) {
        codeString = "White";
      }
      else if (code == ECRU_CODE) {
        codeString = "Ecru";
      }
      else if (code == SNOW_WHITE_CODE) {
        codeString = "Snow White";
      }
      else {
        qWarning() << "String code error.";
        codeString = "N/A";
      }
    }
    if (useCodeAbbreviations) {
      codeString = f.type().prefix() + codeString;
    }
    return codeString;
  }
  else { // use the rgb code instead of the dmc code
    return ::ctos(f.color());
  }
}

void patternPrinter::drawListHeader(int margin, int y, int countTab,
                                    int codeTab, int nameTab) {

  //: The number of times a color appears in the pattern (keep short)
  painter_.drawText(margin + countTab, y, QObject::tr("Count"));
  //: The floss color code (keep short)
  painter_.drawText(margin + codeTab, y, QObject::tr("Code"));
  //: The floss color description (keep short)
  painter_.drawText(margin + nameTab, y, QObject::tr("Name"));
}

bool patternPrinter::drawPatternPages() {

  if (!portrait_) { // draw landscape
    int temp = printerWidth_;
    printerWidth_ = printerHeight_;
    printerHeight_ = temp;
    // you can't change the orientation under Windows, so we'll just
    // draw sideways instead
    painter_.rotate(-90);
    painter_.translate(-printerWidth_, 0);
  }

  painter_.setPen(QPen(Qt::black, 1));
  // image width to use on a particular page (last page may be smaller)
  int widthToUse = widthPerPage_;
  int heightToUse = heightPerPage_;
  const int f = 5; // fudge room for grid number separation from the grid
  const QHash<QRgb, QPixmap> symbolMap =
    imageContainer_->symbolsWithBorder(symbolSize_, symbolColorBorderWidth_);
  QProgressDialog progressMeter(QObject::tr("Creating pdf..."),
                                QObject::tr("Cancel"), 0,
                                (xPages_ * yPages_)/5);
  progressMeter.setMinimumDuration(4000);
  progressMeter.setWindowModality(Qt::WindowModal);
  progressMeter.move(PROGRESS_X_COORDINATE, PROGRESS_Y_COORDINATE);
  progressMeter.show();
  for (int x = 1; x <= xPages_; ++x) {
    for (int y = 1; y <= yPages_; ++y) {
      if (progressMeter.wasCanceled()) {
        return true;
      }
      const int pageNum = yPages_ * (x-1) + y;
      // draw the page number
      painter_.drawText(printerWidth_ - sWidth(pageNum), sHeight(pageNum) - 5,
                        ::itoqs(pageNum));
      if (pageNum % 5 == 0) {
        progressMeter.setValue(pageNum / 5);
      }
      widthToUse = widthPerPage_;
      if (x * widthPerPage_ > patternImageWidth_) {
        widthToUse = patternImageWidth_ - (x-1) * widthPerPage_;
      }
      heightToUse = heightPerPage_;
      if (y * heightPerPage_ > patternImageHeight_) {
        heightToUse = patternImageHeight_ - (y-1) * heightPerPage_;
      }

      // draw this page's image
      const int patternXBoxStart = ((x-1) * widthPerPage_)/symbolSize_;
      const int patternXBoxEnd = patternXBoxStart + (widthToUse/symbolSize_);
      const int patternYBoxStart = ((y-1) * heightPerPage_)/symbolSize_;
      const int patternYBoxEnd = patternYBoxStart + (heightToUse/symbolSize_);
      for (int j = patternYBoxStart, jj = 0; j < patternYBoxEnd;
            ++j, ++jj) {
        for (int i = patternXBoxStart, ii = 0; i < patternXBoxEnd;
              ++i, ++ii) {
          const QPixmap& thisSymbol =
            symbolMap[squareImage_.pixel(i * squareDim_, j * squareDim_)];
          painter_.drawPixmap(margin_ + ii * symbolSize_,
                              margin_ + jj * symbolSize_, thisSymbol);
        }
      }

      //// draw grid lines and counts
      //// x grid lines
      painter_.setPen(QPen(Qt::black, 1));
      int tx = 0;
      //// draw the thin x grid lines
      while (tx * symbolSize_ <= widthToUse) {
        painter_.drawLine(tx * symbolSize_ + margin_, margin_,
                          tx * symbolSize_ + margin_, heightToUse + margin_);
        ++tx;
      }
      bool lastXLine = false;
      if ((x-1) * widthPerPage_ + tx * symbolSize_ > patternImageWidth_) {
        lastXLine = true; // the last x line is drawn on this page
      }
      //// draw the thin y grid lines
      int ty = 0;
      while (ty * symbolSize_ <= heightToUse) {
        painter_.drawLine(margin_, ty * symbolSize_ + margin_,
                          widthToUse + margin_, ty * symbolSize_ + margin_);
        ++ty;
      }
      bool lastYLine = false;
      if ((y-1) * heightPerPage_ + ty * symbolSize_ >
          patternImageHeight_) {
        lastYLine = true; // the last y line is drawn on this page
      }

      //// bold lines
      tx = 0; // x grid count for this page
      if ((x-1) * xBoxesPerPage_ % boldLinesFrequency_ != 0) {
        // to the next multiple of boldLinesFrequency_
        tx = boldLinesFrequency_ - ((x-1) * xBoxesPerPage_ % boldLinesFrequency_);
      }

      const int savedTx = tx;
      // draw the x grid counts
      painter_.setPen(QPen(Qt::black, 1));
      while (tx * symbolSize_ <= widthToUse) {
        const int tgridx = (x-1) * xBoxesPerPage_ + tx;
        if (tx == 0) { // avoid collision
          painter_.drawText(margin_ + tx * symbolSize_, margin_ - f,
                            ::itoqs(tgridx));
        }
        else {
          painter_.drawText(margin_ + tx * symbolSize_ - sWidth(tgridx),
                            margin_ - f, ::itoqs(tgridx));
        }
        tx += boldLinesFrequency_;
      }

      // draw the bold x grid lines
      tx = savedTx;
      painter_.setPen(QPen(Qt::black, 3));
      while (tx * symbolSize_ <= widthToUse) {
        painter_.drawLine(tx * symbolSize_ + margin_, margin_,
                          tx * symbolSize_ + margin_, heightToUse + margin_);
        tx += boldLinesFrequency_;
      }
      tx -= boldLinesFrequency_;

      // draw the final line
      if (lastXLine) {
        painter_.setPen(QPen(Qt::black, 1));
        painter_.drawText(margin_ + widthToUse - sWidth(xBoxes_), margin_ - f,
                          ::itoqs(xBoxes_));
        painter_.setPen(QPen(Qt::black, 3));
        painter_.drawLine(widthToUse + margin_, margin_, widthToUse + margin_,
                          heightToUse + margin_);
      }

      ty = 0; // y grid count for this page
      if ((y-1) * yBoxesPerPage_ % boldLinesFrequency_ != 0) {
        // to the next multiple of 5
        ty = boldLinesFrequency_ - ((y-1) * yBoxesPerPage_ % boldLinesFrequency_);
      }

      const int savedTy = ty;
      // draw the y grid counts
      painter_.setPen(QPen(Qt::black, 1));
      while (ty * symbolSize_ <= heightToUse) {
        const int tgridy = (y-1) * yBoxesPerPage_ + ty;
        if (ty == 0) { // avoid confusion
          painter_.drawText(margin_ - sWidth(tgridy) - f,
                            ty * symbolSize_ + margin_ + sHeight(tgridy),
                            ::itoqs(tgridy));
        }
        else {
          painter_.drawText(margin_ - sWidth(tgridy) - f,
                            ty * symbolSize_ + margin_,
                            ::itoqs(tgridy));
        }
        ty += boldLinesFrequency_;
      }

      // draw the bold y grid lines
      ty = savedTy;
      painter_.setPen(QPen(Qt::black, 3));
      while (ty * symbolSize_ <= heightToUse) {
        painter_.drawLine(margin_, ty * symbolSize_ + margin_,
                          widthToUse + margin_, ty * symbolSize_ + margin_);
        ty += boldLinesFrequency_;
      }

      // draw the final line
      if (lastYLine) {
        painter_.setPen(QPen(Qt::black, 1));
        painter_.drawText(margin_ - sWidth(yBoxes_) - f, heightToUse + margin_,
                          ::itoqs(yBoxes_));
        painter_.setPen(QPen(Qt::black, 3));
        painter_.drawLine(margin_, heightToUse + margin_, widthToUse + margin_,
                          heightToUse + margin_);
      }

      painter_.setPen(QPen(Qt::black, 1)); // reset

      if (x < xPages_ || y < yPages_) {
        printer_.newPage();
      }
    }
  }
  return false;
}

bool patternPrinter::printListDescription(int* yUsed, int fontHeight) {

  QList<flossType> flossTypes = flossType::allFlossTypes();
  QList<QPair<QString, QString> > abbreviations;
  for (int i = 0, size = flossTypes.size(); i < size; ++i) {
    const flossType thisType = flossTypes[i];
    if (::colorsContainType(colors_, thisType)) {
      abbreviations.push_back(qMakePair(thisType.shortText(),
                                        thisType.prefix()));
    }
  }
  QString flossString;
  bool useCodeAbbreviations = false;
  if (abbreviations.size() == 1) { // only one type of floss
    if (abbreviations[0].first == "") { // flossVariable only
      flossString =
        QObject::tr("The Code column gives the RGB value of a color and the Name "
                    "column gives the code and DMC name of the nearest DMC color.");
    }
    else if (abbreviations[0].second != "d") { // not DMC
      flossString =
        //: %1 is "DMC" or "Anchor" or...
        QObject::tr("All codes are for %1 floss.  The Name column gives the code "
                    "and DMC name of the nearest DMC color.")
                   .arg(abbreviations[0].first);
    }
    else { // DMC only
      flossString =
        //: %1 is "DMC" or "Anchor" or...
        QObject::tr("All codes are for %1 floss.").arg(abbreviations[0].first);
    }
  }
  else { // more than one type of floss
    QString abbreviationsText;
    int numberOfAbbreviations = 0;
    for (int i = 0, size = abbreviations.size(); i < size; ++i) {
      const QString shortText = abbreviations[i].first;
      const QString prefix = abbreviations[i].second;
      if (shortText != "") { // don't include flossVariable
        abbreviationsText += prefix + " = " + shortText + ", ";
        ++numberOfAbbreviations;
      }
    }
    abbreviationsText.chop(2);
    if (numberOfAbbreviations > 1) {
      useCodeAbbreviations = true;
      flossString = QObject::tr("For colors available as floss the Code column "
                                "gives an abbreviation for the floss type (%1), "
                                "otherwise the RGB code of the color is given.  "
                                "The Name column gives the code and DMC name of "
                                "the nearest DMC color.").arg(abbreviationsText);
    }
    else { // variable plus one other type
        //: %1 is "DMC" or "Anchor" or...
      flossString = QObject::tr("For non-%1 colors the Code column gives the RGB "
                                "value of the color and the Name column gives the "
                                "code and DMC name of the nearest DMC color.")
                               .arg(abbreviations[0].first);
    }        
  }
  QRect textBoundingRect;
  painter_.drawText(QRect(0, *yUsed, printerWidth_, 4 * fontHeight),
                    Qt::TextWordWrap, flossString,
                    &textBoundingRect);
  *yUsed += textBoundingRect.height() + fontHeight;
  return useCodeAbbreviations;
}
