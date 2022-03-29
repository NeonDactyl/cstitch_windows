/****************************************************************************
** Meta object code from reading C++ file 'squareDockTools.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../squareDockTools.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'squareDockTools.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_changeAllAction_t {
    const uint offsetsAndSize[8];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_changeAllAction_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_changeAllAction_t qt_meta_stringdata_changeAllAction = {
    {
QT_MOC_LITERAL(0, 15), // "changeAllAction"
QT_MOC_LITERAL(16, 28), // "changeAllColorContextTrigger"
QT_MOC_LITERAL(45, 0), // ""
QT_MOC_LITERAL(46, 5) // "color"

    },
    "changeAllAction\0changeAllColorContextTrigger\0"
    "\0color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_changeAllAction[] = {

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
       1,    1,   20,    2, 0x106,    1 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,

       0        // eod
};

void changeAllAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<changeAllAction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeAllColorContextTrigger((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (changeAllAction::*)(const QColor & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&changeAllAction::changeAllColorContextTrigger)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject changeAllAction::staticMetaObject = { {
    QMetaObject::SuperData::link<contextColorAction::staticMetaObject>(),
    qt_meta_stringdata_changeAllAction.offsetsAndSize,
    qt_meta_data_changeAllAction,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_changeAllAction_t
, QtPrivate::TypeAndForceComplete<changeAllAction, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>



>,
    nullptr
} };


const QMetaObject *changeAllAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *changeAllAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_changeAllAction.stringdata0))
        return static_cast<void*>(this);
    return contextColorAction::qt_metacast(_clname);
}

int changeAllAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = contextColorAction::qt_metacall(_c, _id, _a);
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
void changeAllAction::changeAllColorContextTrigger(const QColor & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< changeAllAction *>(this), &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_changeOneAction_t {
    const uint offsetsAndSize[8];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_changeOneAction_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_changeOneAction_t qt_meta_stringdata_changeOneAction = {
    {
QT_MOC_LITERAL(0, 15), // "changeOneAction"
QT_MOC_LITERAL(16, 28), // "changeOneColorContextTrigger"
QT_MOC_LITERAL(45, 0), // ""
QT_MOC_LITERAL(46, 5) // "color"

    },
    "changeOneAction\0changeOneColorContextTrigger\0"
    "\0color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_changeOneAction[] = {

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
       1,    1,   20,    2, 0x106,    1 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,

       0        // eod
};

void changeOneAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<changeOneAction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeOneColorContextTrigger((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (changeOneAction::*)(const QColor & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&changeOneAction::changeOneColorContextTrigger)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject changeOneAction::staticMetaObject = { {
    QMetaObject::SuperData::link<contextColorAction::staticMetaObject>(),
    qt_meta_stringdata_changeOneAction.offsetsAndSize,
    qt_meta_data_changeOneAction,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_changeOneAction_t
, QtPrivate::TypeAndForceComplete<changeOneAction, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>



>,
    nullptr
} };


const QMetaObject *changeOneAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *changeOneAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_changeOneAction.stringdata0))
        return static_cast<void*>(this);
    return contextColorAction::qt_metacast(_clname);
}

int changeOneAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = contextColorAction::qt_metacall(_c, _id, _a);
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
void changeOneAction::changeOneColorContextTrigger(const QColor & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< changeOneAction *>(this), &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_fillRegionAction_t {
    const uint offsetsAndSize[8];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_fillRegionAction_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_fillRegionAction_t qt_meta_stringdata_fillRegionAction = {
    {
QT_MOC_LITERAL(0, 16), // "fillRegionAction"
QT_MOC_LITERAL(17, 24), // "fillRegionContextTrigger"
QT_MOC_LITERAL(42, 0), // ""
QT_MOC_LITERAL(43, 5) // "color"

    },
    "fillRegionAction\0fillRegionContextTrigger\0"
    "\0color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fillRegionAction[] = {

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
       1,    1,   20,    2, 0x106,    1 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,

       0        // eod
};

void fillRegionAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<fillRegionAction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fillRegionContextTrigger((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (fillRegionAction::*)(const QColor & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&fillRegionAction::fillRegionContextTrigger)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject fillRegionAction::staticMetaObject = { {
    QMetaObject::SuperData::link<contextColorAction::staticMetaObject>(),
    qt_meta_stringdata_fillRegionAction.offsetsAndSize,
    qt_meta_data_fillRegionAction,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_fillRegionAction_t
, QtPrivate::TypeAndForceComplete<fillRegionAction, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>



>,
    nullptr
} };


const QMetaObject *fillRegionAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fillRegionAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_fillRegionAction.stringdata0))
        return static_cast<void*>(this);
    return contextColorAction::qt_metacast(_clname);
}

int fillRegionAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = contextColorAction::qt_metacall(_c, _id, _a);
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
void fillRegionAction::fillRegionContextTrigger(const QColor & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< fillRegionAction *>(this), &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_squareDockToolButton_t {
    const uint offsetsAndSize[12];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_squareDockToolButton_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_squareDockToolButton_t qt_meta_stringdata_squareDockToolButton = {
    {
QT_MOC_LITERAL(0, 20), // "squareDockToolButton"
QT_MOC_LITERAL(21, 17), // "toolButtonClicked"
QT_MOC_LITERAL(39, 0), // ""
QT_MOC_LITERAL(40, 21), // "squareDockToolButton*"
QT_MOC_LITERAL(62, 11), // "clickedTool"
QT_MOC_LITERAL(74, 13) // "buttonClicked"

    },
    "squareDockToolButton\0toolButtonClicked\0"
    "\0squareDockToolButton*\0clickedTool\0"
    "buttonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_squareDockToolButton[] = {

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
       5,    0,   29,    2, 0x08,    3 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void squareDockToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<squareDockToolButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->toolButtonClicked((*reinterpret_cast< std::add_pointer_t<squareDockToolButton*>>(_a[1]))); break;
        case 1: _t->buttonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< squareDockToolButton* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (squareDockToolButton::*)(squareDockToolButton * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&squareDockToolButton::toolButtonClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject squareDockToolButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QToolButton::staticMetaObject>(),
    qt_meta_stringdata_squareDockToolButton.offsetsAndSize,
    qt_meta_data_squareDockToolButton,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_squareDockToolButton_t
, QtPrivate::TypeAndForceComplete<squareDockToolButton, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<squareDockToolButton *, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *squareDockToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *squareDockToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_squareDockToolButton.stringdata0))
        return static_cast<void*>(this);
    return QToolButton::qt_metacast(_clname);
}

int squareDockToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void squareDockToolButton::toolButtonClicked(squareDockToolButton * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_changeAllToolButton_t {
    const uint offsetsAndSize[12];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_changeAllToolButton_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_changeAllToolButton_t qt_meta_stringdata_changeAllToolButton = {
    {
QT_MOC_LITERAL(0, 19), // "changeAllToolButton"
QT_MOC_LITERAL(20, 17), // "setToolLabelColor"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 4), // "QRgb"
QT_MOC_LITERAL(44, 5), // "color"
QT_MOC_LITERAL(50, 29) // "processChangeAllContextAction"

    },
    "changeAllToolButton\0setToolLabelColor\0"
    "\0QRgb\0color\0processChangeAllContextAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_changeAllToolButton[] = {

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
       5,    1,   29,    2, 0x08,    3 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    4,

       0        // eod
};

void changeAllToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<changeAllToolButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setToolLabelColor((*reinterpret_cast< std::add_pointer_t<QRgb>>(_a[1]))); break;
        case 1: _t->processChangeAllContextAction((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (changeAllToolButton::*)(QRgb );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&changeAllToolButton::setToolLabelColor)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject changeAllToolButton::staticMetaObject = { {
    QMetaObject::SuperData::link<squareDockToolButton::staticMetaObject>(),
    qt_meta_stringdata_changeAllToolButton.offsetsAndSize,
    qt_meta_data_changeAllToolButton,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_changeAllToolButton_t
, QtPrivate::TypeAndForceComplete<changeAllToolButton, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QRgb, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>


>,
    nullptr
} };


const QMetaObject *changeAllToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *changeAllToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_changeAllToolButton.stringdata0))
        return static_cast<void*>(this);
    return squareDockToolButton::qt_metacast(_clname);
}

int changeAllToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = squareDockToolButton::qt_metacall(_c, _id, _a);
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
void changeAllToolButton::setToolLabelColor(QRgb _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_changeOneToolButton_t {
    const uint offsetsAndSize[12];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_changeOneToolButton_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_changeOneToolButton_t qt_meta_stringdata_changeOneToolButton = {
    {
QT_MOC_LITERAL(0, 19), // "changeOneToolButton"
QT_MOC_LITERAL(20, 17), // "setToolLabelColor"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 4), // "QRgb"
QT_MOC_LITERAL(44, 5), // "color"
QT_MOC_LITERAL(50, 29) // "processChangeOneContextAction"

    },
    "changeOneToolButton\0setToolLabelColor\0"
    "\0QRgb\0color\0processChangeOneContextAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_changeOneToolButton[] = {

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
       5,    1,   29,    2, 0x08,    3 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    4,

       0        // eod
};

void changeOneToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<changeOneToolButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setToolLabelColor((*reinterpret_cast< std::add_pointer_t<QRgb>>(_a[1]))); break;
        case 1: _t->processChangeOneContextAction((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (changeOneToolButton::*)(QRgb );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&changeOneToolButton::setToolLabelColor)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject changeOneToolButton::staticMetaObject = { {
    QMetaObject::SuperData::link<squareDockToolButton::staticMetaObject>(),
    qt_meta_stringdata_changeOneToolButton.offsetsAndSize,
    qt_meta_data_changeOneToolButton,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_changeOneToolButton_t
, QtPrivate::TypeAndForceComplete<changeOneToolButton, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QRgb, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>


>,
    nullptr
} };


const QMetaObject *changeOneToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *changeOneToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_changeOneToolButton.stringdata0))
        return static_cast<void*>(this);
    return squareDockToolButton::qt_metacast(_clname);
}

int changeOneToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = squareDockToolButton::qt_metacall(_c, _id, _a);
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
void changeOneToolButton::setToolLabelColor(QRgb _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_fillToolButton_t {
    const uint offsetsAndSize[12];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_fillToolButton_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_fillToolButton_t qt_meta_stringdata_fillToolButton = {
    {
QT_MOC_LITERAL(0, 14), // "fillToolButton"
QT_MOC_LITERAL(15, 17), // "setToolLabelColor"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 4), // "QRgb"
QT_MOC_LITERAL(39, 5), // "color"
QT_MOC_LITERAL(45, 30) // "processFillRegionContextAction"

    },
    "fillToolButton\0setToolLabelColor\0\0"
    "QRgb\0color\0processFillRegionContextAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fillToolButton[] = {

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
       5,    1,   29,    2, 0x08,    3 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    4,

       0        // eod
};

void fillToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<fillToolButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setToolLabelColor((*reinterpret_cast< std::add_pointer_t<QRgb>>(_a[1]))); break;
        case 1: _t->processFillRegionContextAction((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (fillToolButton::*)(QRgb );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&fillToolButton::setToolLabelColor)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject fillToolButton::staticMetaObject = { {
    QMetaObject::SuperData::link<squareDockToolButton::staticMetaObject>(),
    qt_meta_stringdata_fillToolButton.offsetsAndSize,
    qt_meta_data_fillToolButton,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_fillToolButton_t
, QtPrivate::TypeAndForceComplete<fillToolButton, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QRgb, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>


>,
    nullptr
} };


const QMetaObject *fillToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fillToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_fillToolButton.stringdata0))
        return static_cast<void*>(this);
    return squareDockToolButton::qt_metacast(_clname);
}

int fillToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = squareDockToolButton::qt_metacall(_c, _id, _a);
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
void fillToolButton::setToolLabelColor(QRgb _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
