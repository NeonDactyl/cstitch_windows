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

#ifndef SQUAREIMAGELABEL_H
#define SQUAREIMAGELABEL_H

#include "imageUtility.h"
#include "imageLabel.h"

//
// Extend imageLabel to provide support for displaying a squared image,
// including gridding, square drawing (via setSquaresColor for the
// drawing color, addSquare to draw a (temporary) square in the drawing
// color, and clearSquares to stop drawing the squares added since the last
// clearSquares), and hash drawing (i.e. "x"es through squares, via
// start/stopDrawingHashes and add/removeHashSquare)
//
class squareImageLabel : public imageLabelBase {

  Q_OBJECT

 public:
  explicit squareImageLabel(QWidget* parent)
    : imageLabelBase(parent), xSquareCount_(0), ySquareCount_(0),
    scaledDimension_(-1), gridOn_(false), gridColor_(qRgb(0, 0, 0)),
    squareColor_(qRgb(0, 0, 0)), lastSquareDrawn_(0),
    drawingSquares_(false), lastHashDrawn_(0), drawingHashes_(false) {

    // don't clear window before painting
    setAttribute(Qt::WA_OpaquePaintEvent);
  }
  // the image's current size
  QSize size() const { return QSize(width(), height()); }
  // the image's current width
  int width() const {
    return xSquareCount_ * scaledDimension_;
  }
  // the image's current height
  int height() const {
    return ySquareCount_ * scaledDimension_;
  }
  void setGridOn(bool b) {
    gridOn_ = b;
    update();
  }
  bool gridOn() const { return gridOn_; }
  void setGridColor(QRgb color) { gridColor_ = color; update(); }
  QRgb gridColor() const { return gridColor_; }
  void setImageSize(const QSize& size);
  void setImageWidth(int newWidth);
  void setImageHeight(int newHeight);
  // sets size to <image>'s size; user must call update
  void setNewImage(const QImage& image, const QList<QRgb>& colors,
                   int xSquareCount, int ySquareCount,
                   bool imageIsOriginal);
  void updateImage(const QImage& image, const QList<QRgb>& colors,
                   const QRect& updateRectangle);
  // Set the color that squares added via addSquare will be drawn in.
  // Once called, only squares added with addSquare will be drawn on this
  // label, until clearSquares is called.
  void setSquaresColor(QRgb squaresColor) {
    squareColor_ = squaresColor;
    drawingSquares_ = true;
    lastSquareDrawn_ = -1;
  }
  // add a square to be drawn in squareColor_; all squares added will be
  // drawn on the widget until clearSquares() is called
  // <coordinates> are box coordinates
  // the label MUST be updated for the change to become visible
  void addSquare(const pairOfInts& coordinates) {
    drawSquares_.push_back(coordinates);
  }
  // clear all of the added squares, restoring the image to its state
  // before any squares were addSquare()ed
  void clearSquares() {
    drawSquares_.clear();
    drawingSquares_ = false;
    lastSquareDrawn_ = -1;
  }
  // once called, only hashes (added with addHashSquare) will be drawn
  // on this label, until clearHashes is called (or they are removed with
  // removeHashSquare)
  void startDrawingHashes() { drawingHashes_ = true; }
  void stopDrawingHashes() { drawingHashes_ = false; }
  // add a square to be drawn as "x"ed in <p>'s color at the box
  // coordinates given by <p>
  // the label MUST be updated for the change to become visible
  void addHashSquare(const pixel& p) {
    hashSquares_.push_back(p);
  }
  // stop hashing the square with box coordinates given by <p> and replace
  // that square with <p>'s color
  // the label MUST be updated for the change to become visible
  void removeHashSquare(const pixel& p);
  // clear all of the hash squares, restoring the image to its state
  // before any hashes were addHashSquare()ed
  // return true if there were any hash squares to clear
  bool clearHashes();

 private:
  int originalWidth() const { return baseImage_.width(); }
  // return true if we paint the image all at once (as opposed to 
  // drawing each square)
  bool imageIsFlat() const {
    return colorSquares_.isEmpty();
  }
  int originalHeight() const { return baseImage_.height(); }
  void generateColorSquares(const QList<QRgb>& colors);
  void paintEvent(QPaintEvent* event);

 private:
  QImage baseImage_;
  bool imageIsOriginal_; // baseImage_ is the Original image
  // only used when baseImage_ isFlat()
  QPixmap scaledImage_;
  
  // number of horizontal squares in baseImage_
  // (just a more convenient way of saying "original square dimension"
  // (but always real scaled width for the original image))
  int xSquareCount_;
  int ySquareCount_; // (for convenience)
  // key is an image color, value is the square image square to draw for
  // that color
  QHash<QRgb, QPixmap> colorSquares_;
  // square dimension of the scaled image (always 1 for the original image)
  int scaledDimension_;
  bool gridOn_;
  QRgb gridColor_;

  QRgb squareColor_; // the color to draw drawSquares_ in
  QList<pairOfInts> drawSquares_; // uses box coordinates
  int lastSquareDrawn_; // drawSquares_ index of the last square drawn
  bool drawingSquares_; // true if squares are currently being drag-drawn

  QList<pixel> hashSquares_; // uses box coordinates
  // remove these hash squares at the next paint event and clear this list
  QList<pixel> hashSquaresToBeRemoved_;
  int lastHashDrawn_; // hashSquares_ index of the last hash drawn
  // true if we're actively drag-drawing hashes
  // NOTE that false doesn't mean there aren't any hashes, just that they
  // aren't currently being drag-drawn
  bool drawingHashes_;
};

#endif
