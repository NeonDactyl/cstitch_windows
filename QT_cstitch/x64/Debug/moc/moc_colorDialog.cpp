/****************************************************************************
** Meta object code from reading C++ file 'colorDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../colorDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_colorDialog_t {
    const uint offsetsAndSize[38];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_colorDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_colorDialog_t qt_meta_stringdata_colorDialog = {
    {
QT_MOC_LITERAL(0, 11), // "colorDialog"
QT_MOC_LITERAL(12, 8), // "finished"
QT_MOC_LITERAL(21, 0), // ""
QT_MOC_LITERAL(22, 10), // "returnCode"
QT_MOC_LITERAL(33, 4), // "triC"
QT_MOC_LITERAL(38, 8), // "oldColor"
QT_MOC_LITERAL(47, 10), // "flossColor"
QT_MOC_LITERAL(58, 8), // "newColor"
QT_MOC_LITERAL(67, 18), // "colorDialogClosing"
QT_MOC_LITERAL(86, 18), // "processCancelClick"
QT_MOC_LITERAL(105, 18), // "processAcceptClick"
QT_MOC_LITERAL(124, 16), // "setColorSelected"
QT_MOC_LITERAL(141, 4), // "QRgb"
QT_MOC_LITERAL(146, 5), // "color"
QT_MOC_LITERAL(152, 1), // "x"
QT_MOC_LITERAL(154, 1), // "y"
QT_MOC_LITERAL(156, 17), // "processModeChange"
QT_MOC_LITERAL(174, 16), // "processLeftClick"
QT_MOC_LITERAL(191, 17) // "processRightClick"

    },
    "colorDialog\0finished\0\0returnCode\0triC\0"
    "oldColor\0flossColor\0newColor\0"
    "colorDialogClosing\0processCancelClick\0"
    "processAcceptClick\0setColorSelected\0"
    "QRgb\0color\0x\0y\0processModeChange\0"
    "processLeftClick\0processRightClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_colorDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   62,    2, 0x06,    1 /* Public */,
       8,    0,   69,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   70,    2, 0x09,    6 /* Protected */,
      10,    0,   71,    2, 0x09,    7 /* Protected */,
      11,    3,   72,    2, 0x08,    8 /* Private */,
      16,    0,   79,    2, 0x08,   12 /* Private */,
      17,    0,   80,    2, 0x08,   13 /* Private */,
      18,    0,   81,    2, 0x08,   14 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, 0x80000000 | 6,    3,    5,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int, QMetaType::Int,   13,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void colorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<colorDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<triC>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<flossColor>>(_a[3]))); break;
        case 1: _t->colorDialogClosing(); break;
        case 2: _t->processCancelClick(); break;
        case 3: _t->processAcceptClick(); break;
        case 4: _t->setColorSelected((*reinterpret_cast< std::add_pointer_t<QRgb>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 5: _t->processModeChange(); break;
        case 6: _t->processLeftClick(); break;
        case 7: _t->processRightClick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (colorDialog::*)(int , const triC & , const flossColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&colorDialog::finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (colorDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&colorDialog::colorDialogClosing)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject colorDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<cancelAcceptDialogBase::staticMetaObject>(),
    qt_meta_stringdata_colorDialog.offsetsAndSize,
    qt_meta_data_colorDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_colorDialog_t
, QtPrivate::TypeAndForceComplete<colorDialog, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<const triC &, std::false_type>, QtPrivate::TypeAndForceComplete<const flossColor &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QRgb, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *colorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *colorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_colorDialog.stringdata0))
        return static_cast<void*>(this);
    return cancelAcceptDialogBase::qt_metacast(_clname);
}

int colorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = cancelAcceptDialogBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void colorDialog::finished(int _t1, const triC & _t2, const flossColor & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void colorDialog::colorDialogClosing()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
