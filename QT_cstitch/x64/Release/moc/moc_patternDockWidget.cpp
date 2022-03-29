/****************************************************************************
** Meta object code from reading C++ file 'patternDockWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../patternDockWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'patternDockWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_patternDockWidget_t {
    const uint offsetsAndSize[18];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_patternDockWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_patternDockWidget_t qt_meta_stringdata_patternDockWidget = {
    {
QT_MOC_LITERAL(0, 17), // "patternDockWidget"
QT_MOC_LITERAL(18, 12), // "changeSymbol"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 4), // "triC"
QT_MOC_LITERAL(37, 5), // "color"
QT_MOC_LITERAL(43, 4), // "QRgb"
QT_MOC_LITERAL(48, 6), // "symbol"
QT_MOC_LITERAL(55, 21), // "processContextRequest"
QT_MOC_LITERAL(77, 5) // "point"

    },
    "patternDockWidget\0changeSymbol\0\0triC\0"
    "color\0QRgb\0symbol\0processContextRequest\0"
    "point"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_patternDockWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   35,    2, 0x0a,    3 /* Public */,
       7,    1,   40,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::QPixmap,    4,    6,
    QMetaType::Void, QMetaType::QPoint,    8,

       0        // eod
};

void patternDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<patternDockWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeSymbol((*reinterpret_cast< std::add_pointer_t<triC>>(_a[1]))); break;
        case 1: _t->changeSymbol((*reinterpret_cast< std::add_pointer_t<QRgb>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPixmap>>(_a[2]))); break;
        case 2: _t->processContextRequest((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (patternDockWidget::*)(const triC & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&patternDockWidget::changeSymbol)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject patternDockWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<constWidthDock::staticMetaObject>(),
    qt_meta_stringdata_patternDockWidget.offsetsAndSize,
    qt_meta_data_patternDockWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_patternDockWidget_t
, QtPrivate::TypeAndForceComplete<patternDockWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const triC &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QRgb, std::false_type>, QtPrivate::TypeAndForceComplete<const QPixmap &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>


>,
    nullptr
} };


const QMetaObject *patternDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *patternDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_patternDockWidget.stringdata0))
        return static_cast<void*>(this);
    return constWidthDock::qt_metacast(_clname);
}

int patternDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = constWidthDock::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void patternDockWidget::changeSymbol(const triC & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
