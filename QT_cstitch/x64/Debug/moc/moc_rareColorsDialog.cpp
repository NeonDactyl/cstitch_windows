/****************************************************************************
** Meta object code from reading C++ file 'rareColorsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../rareColorsDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rareColorsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rareColorsDialog_t {
    const uint offsetsAndSize[20];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_rareColorsDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_rareColorsDialog_t qt_meta_stringdata_rareColorsDialog = {
    {
QT_MOC_LITERAL(0, 16), // "rareColorsDialog"
QT_MOC_LITERAL(17, 13), // "processNewMin"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 3), // "min"
QT_MOC_LITERAL(36, 16), // "createIconPixmap"
QT_MOC_LITERAL(53, 4), // "QRgb"
QT_MOC_LITERAL(58, 8), // "oldColor"
QT_MOC_LITERAL(67, 8), // "newColor"
QT_MOC_LITERAL(76, 22), // "checkUncheckCheckboxes"
QT_MOC_LITERAL(99, 14) // "checkOrUncheck"

    },
    "rareColorsDialog\0processNewMin\0\0min\0"
    "createIconPixmap\0QRgb\0oldColor\0newColor\0"
    "checkUncheckCheckboxes\0checkOrUncheck"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rareColorsDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x08,    1 /* Private */,
       4,    2,   35,    2, 0x108,    3 /* Private | MethodIsConst  */,
       8,    1,   40,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::QPixmap, 0x80000000 | 5, 0x80000000 | 5,    6,    7,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void rareColorsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<rareColorsDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->processNewMin((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: { QPixmap _r = _t->createIconPixmap((*reinterpret_cast< std::add_pointer_t<QRgb>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QRgb>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->checkUncheckCheckboxes((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject rareColorsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<cancelAcceptDialogBase::staticMetaObject>(),
    qt_meta_stringdata_rareColorsDialog.offsetsAndSize,
    qt_meta_data_rareColorsDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_rareColorsDialog_t
, QtPrivate::TypeAndForceComplete<rareColorsDialog, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>, QtPrivate::TypeAndForceComplete<QRgb, std::false_type>, QtPrivate::TypeAndForceComplete<QRgb, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *rareColorsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rareColorsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rareColorsDialog.stringdata0))
        return static_cast<void*>(this);
    return cancelAcceptDialogBase::qt_metacast(_clname);
}

int rareColorsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cancelAcceptDialogBase::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
