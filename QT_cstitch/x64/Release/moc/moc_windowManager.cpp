/****************************************************************************
** Meta object code from reading C++ file 'windowManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../windowManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_windowManager_t {
    const uint offsetsAndSize[32];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_windowManager_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_windowManager_t qt_meta_stringdata_windowManager = {
    {
QT_MOC_LITERAL(0, 13), // "windowManager"
QT_MOC_LITERAL(14, 4), // "save"
QT_MOC_LITERAL(19, 0), // ""
QT_MOC_LITERAL(20, 6), // "saveAs"
QT_MOC_LITERAL(27, 15), // "projectFilename"
QT_MOC_LITERAL(43, 11), // "openProject"
QT_MOC_LITERAL(55, 17), // "autoShowQuickHelp"
QT_MOC_LITERAL(73, 4), // "show"
QT_MOC_LITERAL(78, 19), // "displayActionWindow"
QT_MOC_LITERAL(98, 8), // "QAction*"
QT_MOC_LITERAL(107, 6), // "action"
QT_MOC_LITERAL(114, 28), // "startOriginalImageColorCount"
QT_MOC_LITERAL(143, 15), // "openRecentImage"
QT_MOC_LITERAL(159, 9), // "imageFile"
QT_MOC_LITERAL(169, 17), // "openRecentProject"
QT_MOC_LITERAL(187, 11) // "projectFile"

    },
    "windowManager\0save\0\0saveAs\0projectFilename\0"
    "openProject\0autoShowQuickHelp\0show\0"
    "displayActionWindow\0QAction*\0action\0"
    "startOriginalImageColorCount\0"
    "openRecentImage\0imageFile\0openRecentProject\0"
    "projectFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_windowManager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x0a,    1 /* Public */,
       3,    1,   69,    2, 0x0a,    2 /* Public */,
       3,    0,   72,    2, 0x2a,    4 /* Public | MethodCloned */,
       5,    0,   73,    2, 0x0a,    5 /* Public */,
       6,    1,   74,    2, 0x08,    6 /* Private */,
       8,    1,   77,    2, 0x08,    8 /* Private */,
      11,    0,   80,    2, 0x08,   10 /* Private */,
      12,    1,   81,    2, 0x08,   11 /* Private */,
      14,    1,   84,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   15,

       0        // eod
};

void windowManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<windowManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->save(); break;
        case 1: _t->saveAs((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->saveAs(); break;
        case 3: _t->openProject(); break;
        case 4: _t->autoShowQuickHelp((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->displayActionWindow((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 6: _t->startOriginalImageColorCount(); break;
        case 7: _t->openRecentImage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->openRecentProject((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject windowManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_windowManager.offsetsAndSize,
    qt_meta_data_windowManager,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_windowManager_t
, QtPrivate::TypeAndForceComplete<windowManager, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAction *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *windowManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *windowManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_windowManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int windowManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
