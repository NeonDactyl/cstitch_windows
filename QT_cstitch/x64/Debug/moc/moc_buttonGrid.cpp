/****************************************************************************
** Meta object code from reading C++ file 'buttonGrid.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../buttonGrid.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buttonGrid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_buttonGrid_t {
    const uint offsetsAndSize[8];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_buttonGrid_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_buttonGrid_t qt_meta_stringdata_buttonGrid = {
    {
QT_MOC_LITERAL(0, 10), // "buttonGrid"
QT_MOC_LITERAL(11, 14), // "buttonSelected"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 5) // "index"

    },
    "buttonGrid\0buttonSelected\0\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_buttonGrid[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void buttonGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<buttonGrid *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->buttonSelected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (buttonGrid::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&buttonGrid::buttonSelected)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject buttonGrid::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_buttonGrid.offsetsAndSize,
    qt_meta_data_buttonGrid,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_buttonGrid_t
, QtPrivate::TypeAndForceComplete<buttonGrid, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>



>,
    nullptr
} };


const QMetaObject *buttonGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *buttonGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_buttonGrid.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int buttonGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void buttonGrid::buttonSelected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_colorButtonGrid_t {
    const uint offsetsAndSize[14];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_colorButtonGrid_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_colorButtonGrid_t qt_meta_stringdata_colorButtonGrid = {
    {
QT_MOC_LITERAL(0, 15), // "colorButtonGrid"
QT_MOC_LITERAL(16, 14), // "buttonSelected"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 4), // "QRgb"
QT_MOC_LITERAL(37, 5), // "color"
QT_MOC_LITERAL(43, 1), // "x"
QT_MOC_LITERAL(45, 1) // "y"

    },
    "colorButtonGrid\0buttonSelected\0\0QRgb\0"
    "color\0x\0y"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_colorButtonGrid[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,

       0        // eod
};

void colorButtonGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<colorButtonGrid *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->buttonSelected((*reinterpret_cast< std::add_pointer_t<QRgb>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (colorButtonGrid::*)(QRgb , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&colorButtonGrid::buttonSelected)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject colorButtonGrid::staticMetaObject = { {
    QMetaObject::SuperData::link<buttonGrid::staticMetaObject>(),
    qt_meta_stringdata_colorButtonGrid.offsetsAndSize,
    qt_meta_data_colorButtonGrid,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_colorButtonGrid_t
, QtPrivate::TypeAndForceComplete<colorButtonGrid, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QRgb, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>



>,
    nullptr
} };


const QMetaObject *colorButtonGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *colorButtonGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_colorButtonGrid.stringdata0))
        return static_cast<void*>(this);
    return buttonGrid::qt_metacast(_clname);
}

int colorButtonGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = buttonGrid::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void colorButtonGrid::buttonSelected(QRgb _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
