/****************************************************************************
** Meta object code from reading C++ file 'imageZoomWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../imageZoomWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageZoomWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_imageZoomWindow_t {
    const uint offsetsAndSize[34];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_imageZoomWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_imageZoomWindow_t qt_meta_stringdata_imageZoomWindow = {
    {
QT_MOC_LITERAL(0, 15), // "imageZoomWindow"
QT_MOC_LITERAL(16, 13), // "showQuickHelp"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 4), // "show"
QT_MOC_LITERAL(36, 12), // "originalSize"
QT_MOC_LITERAL(49, 6), // "zoomIn"
QT_MOC_LITERAL(56, 7), // "zoomOut"
QT_MOC_LITERAL(64, 4), // "zoom"
QT_MOC_LITERAL(69, 13), // "zoomIncrement"
QT_MOC_LITERAL(83, 11), // "zoomToWidth"
QT_MOC_LITERAL(95, 12), // "zoomToHeight"
QT_MOC_LITERAL(108, 11), // "zoomToImage"
QT_MOC_LITERAL(120, 16), // "displayImageInfo"
QT_MOC_LITERAL(137, 4), // "quit"
QT_MOC_LITERAL(142, 13), // "helpRequested"
QT_MOC_LITERAL(156, 9), // "helpAbout"
QT_MOC_LITERAL(166, 4) // "open"

    },
    "imageZoomWindow\0showQuickHelp\0\0show\0"
    "originalSize\0zoomIn\0zoomOut\0zoom\0"
    "zoomIncrement\0zoomToWidth\0zoomToHeight\0"
    "zoomToImage\0displayImageInfo\0quit\0"
    "helpRequested\0helpAbout\0open"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_imageZoomWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   98,    2, 0x0a,    1 /* Public */,
       1,    0,  101,    2, 0x2a,    3 /* Public | MethodCloned */,
       4,    0,  102,    2, 0x09,    4 /* Protected */,
       5,    0,  103,    2, 0x09,    5 /* Protected */,
       6,    0,  104,    2, 0x09,    6 /* Protected */,
       7,    1,  105,    2, 0x09,    7 /* Protected */,
       9,    0,  108,    2, 0x09,    9 /* Protected */,
      10,    0,  109,    2, 0x09,   10 /* Protected */,
      11,    0,  110,    2, 0x09,   11 /* Protected */,
      12,    0,  111,    2, 0x09,   12 /* Protected */,
      13,    0,  112,    2, 0x09,   13 /* Protected */,
      14,    0,  113,    2, 0x109,   14 /* Protected | MethodIsConst  */,
      15,    0,  114,    2, 0x08,   15 /* Private */,
      16,    0,  115,    2, 0x08,   16 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void imageZoomWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<imageZoomWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showQuickHelp((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->showQuickHelp(); break;
        case 2: _t->originalSize(); break;
        case 3: _t->zoomIn(); break;
        case 4: _t->zoomOut(); break;
        case 5: _t->zoom((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->zoomToWidth(); break;
        case 7: _t->zoomToHeight(); break;
        case 8: _t->zoomToImage(); break;
        case 9: _t->displayImageInfo(); break;
        case 10: { bool _r = _t->quit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->helpRequested(); break;
        case 12: _t->helpAbout(); break;
        case 13: _t->open(); break;
        default: ;
        }
    }
}

const QMetaObject imageZoomWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_imageZoomWindow.offsetsAndSize,
    qt_meta_data_imageZoomWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_imageZoomWindow_t
, QtPrivate::TypeAndForceComplete<imageZoomWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *imageZoomWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *imageZoomWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_imageZoomWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int imageZoomWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
