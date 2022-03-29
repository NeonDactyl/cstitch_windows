/****************************************************************************
** Meta object code from reading C++ file 'detailToolDock.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../detailToolDock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'detailToolDock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_detailToolDock_t {
    const uint offsetsAndSize[14];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_detailToolDock_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_detailToolDock_t qt_meta_stringdata_detailToolDock = {
    {
QT_MOC_LITERAL(0, 14), // "detailToolDock"
QT_MOC_LITERAL(15, 12), // "detailCalled"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 9), // "numColors"
QT_MOC_LITERAL(39, 11), // "clearCalled"
QT_MOC_LITERAL(51, 17), // "processDetailCall"
QT_MOC_LITERAL(69, 16) // "processClearCall"

    },
    "detailToolDock\0detailCalled\0\0numColors\0"
    "clearCalled\0processDetailCall\0"
    "processClearCall"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_detailToolDock[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x106,    1 /* Public | MethodIsConst  */,
       4,    0,   41,    2, 0x106,    3 /* Public | MethodIsConst  */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   42,    2, 0x08,    4 /* Private */,
       6,    0,   43,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void detailToolDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<detailToolDock *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->detailCalled((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->clearCalled(); break;
        case 2: _t->processDetailCall(); break;
        case 3: _t->processClearCall(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (detailToolDock::*)(int ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&detailToolDock::detailCalled)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (detailToolDock::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&detailToolDock::clearCalled)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject detailToolDock::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_detailToolDock.offsetsAndSize,
    qt_meta_data_detailToolDock,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_detailToolDock_t
, QtPrivate::TypeAndForceComplete<detailToolDock, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *detailToolDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *detailToolDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_detailToolDock.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int detailToolDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void detailToolDock::detailCalled(int _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< detailToolDock *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void detailToolDock::clearCalled()const
{
    QMetaObject::activate(const_cast< detailToolDock *>(this), &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
