/****************************************************************************
** Meta object code from reading C++ file 'dockListWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../dockListWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockListWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dockListWidget_t {
    const uint offsetsAndSize[14];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_dockListWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_dockListWidget_t qt_meta_stringdata_dockListWidget = {
    {
QT_MOC_LITERAL(0, 14), // "dockListWidget"
QT_MOC_LITERAL(15, 12), // "colorRemoved"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 4), // "triC"
QT_MOC_LITERAL(34, 5), // "color"
QT_MOC_LITERAL(40, 21), // "processContextRequest"
QT_MOC_LITERAL(62, 5) // "point"

    },
    "dockListWidget\0colorRemoved\0\0triC\0"
    "color\0processContextRequest\0point"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dockListWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   29,    2, 0x09,    3 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    6,

       0        // eod
};

void dockListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<dockListWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->colorRemoved((*reinterpret_cast< std::add_pointer_t<triC>>(_a[1]))); break;
        case 1: _t->processContextRequest((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (dockListWidget::*)(const triC & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&dockListWidget::colorRemoved)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject dockListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<constWidthDock::staticMetaObject>(),
    qt_meta_stringdata_dockListWidget.offsetsAndSize,
    qt_meta_data_dockListWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_dockListWidget_t
, QtPrivate::TypeAndForceComplete<dockListWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const triC &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>


>,
    nullptr
} };


const QMetaObject *dockListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dockListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dockListWidget.stringdata0))
        return static_cast<void*>(this);
    return constWidthDock::qt_metacast(_clname);
}

int dockListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = constWidthDock::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void dockListWidget::colorRemoved(const triC & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_dockListSwatchWidget_t {
    const uint offsetsAndSize[10];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_dockListSwatchWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_dockListSwatchWidget_t qt_meta_stringdata_dockListSwatchWidget = {
    {
QT_MOC_LITERAL(0, 20), // "dockListSwatchWidget"
QT_MOC_LITERAL(21, 17), // "updateColorSwatch"
QT_MOC_LITERAL(39, 0), // ""
QT_MOC_LITERAL(40, 4), // "QRgb"
QT_MOC_LITERAL(45, 5) // "color"

    },
    "dockListSwatchWidget\0updateColorSwatch\0"
    "\0QRgb\0color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dockListSwatchWidget[] = {

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
       1,    1,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void dockListSwatchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<dockListSwatchWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateColorSwatch((*reinterpret_cast< std::add_pointer_t<QRgb>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject dockListSwatchWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<dockListWidget::staticMetaObject>(),
    qt_meta_stringdata_dockListSwatchWidget.offsetsAndSize,
    qt_meta_data_dockListSwatchWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_dockListSwatchWidget_t
, QtPrivate::TypeAndForceComplete<dockListSwatchWidget, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QRgb, std::false_type>


>,
    nullptr
} };


const QMetaObject *dockListSwatchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dockListSwatchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dockListSwatchWidget.stringdata0))
        return static_cast<void*>(this);
    return dockListWidget::qt_metacast(_clname);
}

int dockListSwatchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = dockListWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
