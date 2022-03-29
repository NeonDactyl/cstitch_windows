/****************************************************************************
** Meta object code from reading C++ file 'colorCompare.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../colorCompare.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorCompare.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_colorCompare_t {
    const uint offsetsAndSize[32];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_colorCompare_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_colorCompare_t qt_meta_stringdata_colorCompare = {
    {
QT_MOC_LITERAL(0, 12), // "colorCompare"
QT_MOC_LITERAL(13, 16), // "displayImageInfo"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 19), // "processSquareButton"
QT_MOC_LITERAL(51, 8), // "imagePtr"
QT_MOC_LITERAL(60, 9), // "container"
QT_MOC_LITERAL(70, 16), // "squareModeString"
QT_MOC_LITERAL(87, 10), // "squareSize"
QT_MOC_LITERAL(98, 8), // "newIndex"
QT_MOC_LITERAL(107, 20), // "processLeftMouseMove"
QT_MOC_LITERAL(128, 12), // "QMouseEvent*"
QT_MOC_LITERAL(141, 5), // "event"
QT_MOC_LITERAL(147, 21), // "processRightMouseMove"
QT_MOC_LITERAL(169, 17), // "changeProcessMode"
QT_MOC_LITERAL(187, 14), // "squareBoxIndex"
QT_MOC_LITERAL(202, 14) // "showDimensions"

    },
    "colorCompare\0displayImageInfo\0\0"
    "processSquareButton\0imagePtr\0container\0"
    "squareModeString\0squareSize\0newIndex\0"
    "processLeftMouseMove\0QMouseEvent*\0"
    "event\0processRightMouseMove\0"
    "changeProcessMode\0squareBoxIndex\0"
    "showDimensions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_colorCompare[] = {

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
       3,    4,   75,    2, 0x08,    2 /* Private */,
       3,    3,   84,    2, 0x28,    7 /* Private | MethodCloned */,
       3,    2,   91,    2, 0x28,   11 /* Private | MethodCloned */,
       3,    1,   96,    2, 0x28,   14 /* Private | MethodCloned */,
       3,    0,   99,    2, 0x28,   16 /* Private | MethodCloned */,
       9,    1,  100,    2, 0x08,   17 /* Private */,
      12,    1,  103,    2, 0x08,   19 /* Private */,
      13,    1,  106,    2, 0x08,   21 /* Private */,
      15,    0,  109,    2, 0x08,   23 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString, QMetaType::Int, QMetaType::Int,    5,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString, QMetaType::Int,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString,    5,    6,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,

       0        // eod
};

void colorCompare::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<colorCompare *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->displayImageInfo(); break;
        case 1: _t->processSquareButton((*reinterpret_cast< std::add_pointer_t<imagePtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 2: _t->processSquareButton((*reinterpret_cast< std::add_pointer_t<imagePtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 3: _t->processSquareButton((*reinterpret_cast< std::add_pointer_t<imagePtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->processSquareButton((*reinterpret_cast< std::add_pointer_t<imagePtr>>(_a[1]))); break;
        case 5: _t->processSquareButton(); break;
        case 6: _t->processLeftMouseMove((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 7: _t->processRightMouseMove((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 8: _t->changeProcessMode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->showDimensions(); break;
        default: ;
        }
    }
}

const QMetaObject colorCompare::staticMetaObject = { {
    QMetaObject::SuperData::link<imageCompareBase::staticMetaObject>(),
    qt_meta_stringdata_colorCompare.offsetsAndSize,
    qt_meta_data_colorCompare,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_colorCompare_t
, QtPrivate::TypeAndForceComplete<colorCompare, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<imagePtr, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<imagePtr, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<imagePtr, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<imagePtr, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *colorCompare::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *colorCompare::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_colorCompare.stringdata0))
        return static_cast<void*>(this);
    return imageCompareBase::qt_metacast(_clname);
}

int colorCompare::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = imageCompareBase::qt_metacall(_c, _id, _a);
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
