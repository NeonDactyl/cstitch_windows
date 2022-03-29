/****************************************************************************
** Meta object code from reading C++ file 'patternWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../patternWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'patternWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pdfViewerDialog_t {
    const uint offsetsAndSize[6];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_pdfViewerDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_pdfViewerDialog_t qt_meta_stringdata_pdfViewerDialog = {
    {
QT_MOC_LITERAL(0, 15), // "pdfViewerDialog"
QT_MOC_LITERAL(16, 16), // "updateViewerPath"
QT_MOC_LITERAL(33, 0) // ""

    },
    "pdfViewerDialog\0updateViewerPath\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pdfViewerDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void pdfViewerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<pdfViewerDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateViewerPath(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject pdfViewerDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<cancelAcceptDialogBase::staticMetaObject>(),
    qt_meta_stringdata_pdfViewerDialog.offsetsAndSize,
    qt_meta_data_pdfViewerDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_pdfViewerDialog_t
, QtPrivate::TypeAndForceComplete<pdfViewerDialog, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *pdfViewerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pdfViewerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pdfViewerDialog.stringdata0))
        return static_cast<void*>(this);
    return cancelAcceptDialogBase::qt_metacast(_clname);
}

int pdfViewerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cancelAcceptDialogBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_patternWindow_t {
    const uint offsetsAndSize[64];
    char stringdata0[439];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_patternWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_patternWindow_t qt_meta_stringdata_patternWindow = {
    {
QT_MOC_LITERAL(0, 13), // "patternWindow"
QT_MOC_LITERAL(14, 16), // "changeSymbolSlot"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 4), // "triC"
QT_MOC_LITERAL(37, 5), // "color"
QT_MOC_LITERAL(43, 14), // "imageClickSlot"
QT_MOC_LITERAL(58, 12), // "QMouseEvent*"
QT_MOC_LITERAL(71, 5), // "event"
QT_MOC_LITERAL(77, 8), // "saveSlot"
QT_MOC_LITERAL(86, 11), // "zoomToWidth"
QT_MOC_LITERAL(98, 12), // "zoomToHeight"
QT_MOC_LITERAL(111, 11), // "zoomToImage"
QT_MOC_LITERAL(123, 16), // "displayImageInfo"
QT_MOC_LITERAL(140, 16), // "switchActionSlot"
QT_MOC_LITERAL(157, 17), // "processGridChange"
QT_MOC_LITERAL(175, 7), // "checked"
QT_MOC_LITERAL(183, 21), // "backHistoryActionSlot"
QT_MOC_LITERAL(205, 24), // "forwardHistoryActionSlot"
QT_MOC_LITERAL(230, 20), // "processImageListMenu"
QT_MOC_LITERAL(251, 8), // "QAction*"
QT_MOC_LITERAL(260, 6), // "action"
QT_MOC_LITERAL(267, 15), // "processImageBox"
QT_MOC_LITERAL(283, 9), // "imageName"
QT_MOC_LITERAL(293, 13), // "processDelete"
QT_MOC_LITERAL(307, 22), // "processGridColorChange"
QT_MOC_LITERAL(330, 17), // "labelScrollChange"
QT_MOC_LITERAL(348, 22), // "processDockImageUpdate"
QT_MOC_LITERAL(371, 11), // "xPercentage"
QT_MOC_LITERAL(383, 11), // "yPercentage"
QT_MOC_LITERAL(395, 9), // "rightEdge"
QT_MOC_LITERAL(405, 10), // "bottomEdge"
QT_MOC_LITERAL(416, 22) // "updatePdfViewerOptions"

    },
    "patternWindow\0changeSymbolSlot\0\0triC\0"
    "color\0imageClickSlot\0QMouseEvent*\0"
    "event\0saveSlot\0zoomToWidth\0zoomToHeight\0"
    "zoomToImage\0displayImageInfo\0"
    "switchActionSlot\0processGridChange\0"
    "checked\0backHistoryActionSlot\0"
    "forwardHistoryActionSlot\0processImageListMenu\0"
    "QAction*\0action\0processImageBox\0"
    "imageName\0processDelete\0processGridColorChange\0"
    "labelScrollChange\0processDockImageUpdate\0"
    "xPercentage\0yPercentage\0rightEdge\0"
    "bottomEdge\0updatePdfViewerOptions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_patternWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  122,    2, 0x08,    1 /* Private */,
       5,    1,  125,    2, 0x08,    3 /* Private */,
       8,    0,  128,    2, 0x08,    5 /* Private */,
       9,    0,  129,    2, 0x08,    6 /* Private */,
      10,    0,  130,    2, 0x08,    7 /* Private */,
      11,    0,  131,    2, 0x08,    8 /* Private */,
      12,    0,  132,    2, 0x08,    9 /* Private */,
      13,    0,  133,    2, 0x08,   10 /* Private */,
      14,    1,  134,    2, 0x08,   11 /* Private */,
      16,    0,  137,    2, 0x08,   13 /* Private */,
      17,    0,  138,    2, 0x08,   14 /* Private */,
      18,    1,  139,    2, 0x08,   15 /* Private */,
      21,    1,  142,    2, 0x08,   17 /* Private */,
      23,    0,  145,    2, 0x08,   19 /* Private */,
      24,    0,  146,    2, 0x08,   20 /* Private */,
      25,    0,  147,    2, 0x08,   21 /* Private */,
      26,    4,  148,    2, 0x08,   22 /* Private */,
      31,    0,  157,    2, 0x08,   27 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::Bool, QMetaType::Bool,   27,   28,   29,   30,
    QMetaType::Void,

       0        // eod
};

void patternWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<patternWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeSymbolSlot((*reinterpret_cast< std::add_pointer_t<triC>>(_a[1]))); break;
        case 1: _t->imageClickSlot((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 2: _t->saveSlot(); break;
        case 3: _t->zoomToWidth(); break;
        case 4: _t->zoomToHeight(); break;
        case 5: _t->zoomToImage(); break;
        case 6: _t->displayImageInfo(); break;
        case 7: _t->switchActionSlot(); break;
        case 8: _t->processGridChange((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->backHistoryActionSlot(); break;
        case 10: _t->forwardHistoryActionSlot(); break;
        case 11: _t->processImageListMenu((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 12: _t->processImageBox((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->processDelete(); break;
        case 14: _t->processGridColorChange(); break;
        case 15: _t->labelScrollChange(); break;
        case 16: _t->processDockImageUpdate((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4]))); break;
        case 17: _t->updatePdfViewerOptions(); break;
        default: ;
        }
    }
}

const QMetaObject patternWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<imageSaverWindow::staticMetaObject>(),
    qt_meta_stringdata_patternWindow.offsetsAndSize,
    qt_meta_data_patternWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_patternWindow_t
, QtPrivate::TypeAndForceComplete<patternWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const triC &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAction *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<qreal, std::false_type>, QtPrivate::TypeAndForceComplete<qreal, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *patternWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *patternWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_patternWindow.stringdata0))
        return static_cast<void*>(this);
    return imageSaverWindow::qt_metacast(_clname);
}

int patternWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = imageSaverWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
