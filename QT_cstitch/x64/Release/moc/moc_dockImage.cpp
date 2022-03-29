/****************************************************************************
** Meta object code from reading C++ file 'dockImage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../dockImage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockImage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dockImage_t {
    const uint offsetsAndSize[14];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_dockImage_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_dockImage_t qt_meta_stringdata_dockImage = {
    {
QT_MOC_LITERAL(0, 9), // "dockImage"
QT_MOC_LITERAL(10, 15), // "viewportUpdated"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 11), // "xPercentage"
QT_MOC_LITERAL(39, 11), // "yPercentage"
QT_MOC_LITERAL(51, 9), // "rightEdge"
QT_MOC_LITERAL(61, 10) // "bottomEdge"

    },
    "dockImage\0viewportUpdated\0\0xPercentage\0"
    "yPercentage\0rightEdge\0bottomEdge"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dockImage[] = {

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
       1,    4,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::Bool, QMetaType::Bool,    3,    4,    5,    6,

       0        // eod
};

void dockImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<dockImage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->viewportUpdated((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (dockImage::*)(qreal , qreal , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&dockImage::viewportUpdated)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject dockImage::staticMetaObject = { {
    QMetaObject::SuperData::link<constWidthDock::staticMetaObject>(),
    qt_meta_stringdata_dockImage.offsetsAndSize,
    qt_meta_data_dockImage,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_dockImage_t
, QtPrivate::TypeAndForceComplete<dockImage, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<qreal, std::false_type>, QtPrivate::TypeAndForceComplete<qreal, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>



>,
    nullptr
} };


const QMetaObject *dockImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dockImage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dockImage.stringdata0))
        return static_cast<void*>(this);
    return constWidthDock::qt_metacast(_clname);
}

int dockImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = constWidthDock::qt_metacall(_c, _id, _a);
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
void dockImage::viewportUpdated(qreal _t1, qreal _t2, bool _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
