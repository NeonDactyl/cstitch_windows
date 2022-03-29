/****************************************************************************
** Meta object code from reading C++ file 'colorChooser.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../colorChooser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorChooser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_colorChooser_t {
    const uint offsetsAndSize[34];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_colorChooser_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_colorChooser_t qt_meta_stringdata_colorChooser = {
    {
QT_MOC_LITERAL(0, 12), // "colorChooser"
QT_MOC_LITERAL(13, 17), // "processProcessing"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 15), // "processColorAdd"
QT_MOC_LITERAL(48, 12), // "QMouseEvent*"
QT_MOC_LITERAL(61, 5), // "event"
QT_MOC_LITERAL(67, 20), // "processProcessChange"
QT_MOC_LITERAL(88, 8), // "boxIndex"
QT_MOC_LITERAL(97, 16), // "processMouseMove"
QT_MOC_LITERAL(114, 11), // "removeColor"
QT_MOC_LITERAL(126, 4), // "triC"
QT_MOC_LITERAL(131, 5), // "color"
QT_MOC_LITERAL(137, 9), // "clearList"
QT_MOC_LITERAL(147, 16), // "displayImageInfo"
QT_MOC_LITERAL(164, 11), // "zoomToWidth"
QT_MOC_LITERAL(176, 12), // "zoomToHeight"
QT_MOC_LITERAL(189, 11) // "zoomToImage"

    },
    "colorChooser\0processProcessing\0\0"
    "processColorAdd\0QMouseEvent*\0event\0"
    "processProcessChange\0boxIndex\0"
    "processMouseMove\0removeColor\0triC\0"
    "color\0clearList\0displayImageInfo\0"
    "zoomToWidth\0zoomToHeight\0zoomToImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_colorChooser[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x08,    1 /* Private */,
       3,    1,   75,    2, 0x08,    2 /* Private */,
       6,    1,   78,    2, 0x08,    4 /* Private */,
       8,    1,   81,    2, 0x08,    6 /* Private */,
       9,    1,   84,    2, 0x08,    8 /* Private */,
      12,    0,   87,    2, 0x08,   10 /* Private */,
      13,    0,   88,    2, 0x08,   11 /* Private */,
      14,    0,   89,    2, 0x08,   12 /* Private */,
      15,    0,   90,    2, 0x08,   13 /* Private */,
      16,    0,   91,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void colorChooser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<colorChooser *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->processProcessing(); break;
        case 1: _t->processColorAdd((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 2: _t->processProcessChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->processMouseMove((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 4: _t->removeColor((*reinterpret_cast< std::add_pointer_t<triC>>(_a[1]))); break;
        case 5: _t->clearList(); break;
        case 6: _t->displayImageInfo(); break;
        case 7: _t->zoomToWidth(); break;
        case 8: _t->zoomToHeight(); break;
        case 9: _t->zoomToImage(); break;
        default: ;
        }
    }
}

const QMetaObject colorChooser::staticMetaObject = { {
    QMetaObject::SuperData::link<imageZoomWindow::staticMetaObject>(),
    qt_meta_stringdata_colorChooser.offsetsAndSize,
    qt_meta_data_colorChooser,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_colorChooser_t
, QtPrivate::TypeAndForceComplete<colorChooser, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const triC &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *colorChooser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *colorChooser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_colorChooser.stringdata0))
        return static_cast<void*>(this);
    return imageZoomWindow::qt_metacast(_clname);
}

int colorChooser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = imageZoomWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
