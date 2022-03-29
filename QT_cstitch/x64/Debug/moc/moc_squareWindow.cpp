/****************************************************************************
** Meta object code from reading C++ file 'squareWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../squareWindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'squareWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_changeAllContextAction_t {
    const uint offsetsAndSize[8];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_changeAllContextAction_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_changeAllContextAction_t qt_meta_stringdata_changeAllContextAction = {
    {
QT_MOC_LITERAL(0, 22), // "changeAllContextAction"
QT_MOC_LITERAL(23, 23), // "changeAllContextTrigger"
QT_MOC_LITERAL(47, 0), // ""
QT_MOC_LITERAL(48, 5) // "color"

    },
    "changeAllContextAction\0changeAllContextTrigger\0"
    "\0color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_changeAllContextAction[] = {

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

void changeAllContextAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<changeAllContextAction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeAllContextTrigger((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (changeAllContextAction::*)(const QColor & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&changeAllContextAction::changeAllContextTrigger)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject changeAllContextAction::staticMetaObject = { {
    QMetaObject::SuperData::link<contextColorAction::staticMetaObject>(),
    qt_meta_stringdata_changeAllContextAction.offsetsAndSize,
    qt_meta_data_changeAllContextAction,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_changeAllContextAction_t
, QtPrivate::TypeAndForceComplete<changeAllContextAction, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>



>,
    nullptr
} };


const QMetaObject *changeAllContextAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *changeAllContextAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_changeAllContextAction.stringdata0))
        return static_cast<void*>(this);
    return contextColorAction::qt_metacast(_clname);
}

int changeAllContextAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void changeAllContextAction::changeAllContextTrigger(const QColor & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< changeAllContextAction *>(this), &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_squareWindow_t {
    const uint offsetsAndSize[108];
    char stringdata0[933];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_squareWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_squareWindow_t qt_meta_stringdata_squareWindow = {
    {
QT_MOC_LITERAL(0, 12), // "squareWindow"
QT_MOC_LITERAL(13, 17), // "processGridChange"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 7), // "checked"
QT_MOC_LITERAL(40, 22), // "processGridColorChange"
QT_MOC_LITERAL(63, 16), // "processChangeAll"
QT_MOC_LITERAL(80, 8), // "oldColor"
QT_MOC_LITERAL(89, 4), // "triC"
QT_MOC_LITERAL(94, 10), // "flossColor"
QT_MOC_LITERAL(105, 8), // "newColor"
QT_MOC_LITERAL(114, 17), // "processDetailCall"
QT_MOC_LITERAL(132, 9), // "numColors"
QT_MOC_LITERAL(142, 22), // "processDetailClearCall"
QT_MOC_LITERAL(165, 18), // "processToolChanged"
QT_MOC_LITERAL(184, 14), // "squareToolCode"
QT_MOC_LITERAL(199, 11), // "currentTool"
QT_MOC_LITERAL(211, 21), // "processLeftImageClick"
QT_MOC_LITERAL(233, 12), // "QMouseEvent*"
QT_MOC_LITERAL(246, 5), // "event"
QT_MOC_LITERAL(252, 22), // "processRightImageClick"
QT_MOC_LITERAL(275, 23), // "processActiveImageClick"
QT_MOC_LITERAL(299, 25), // "processInactiveImageClick"
QT_MOC_LITERAL(325, 24), // "processInactiveMouseMove"
QT_MOC_LITERAL(350, 22), // "processActiveMouseMove"
QT_MOC_LITERAL(373, 20), // "processLeftMouseMove"
QT_MOC_LITERAL(394, 21), // "processRightMouseMove"
QT_MOC_LITERAL(416, 19), // "processMouseRelease"
QT_MOC_LITERAL(436, 24), // "processBackHistoryAction"
QT_MOC_LITERAL(461, 27), // "processForwardHistoryAction"
QT_MOC_LITERAL(489, 20), // "processPatternButton"
QT_MOC_LITERAL(510, 14), // "squareImagePtr"
QT_MOC_LITERAL(525, 5), // "image"
QT_MOC_LITERAL(531, 12), // "patternIndex"
QT_MOC_LITERAL(544, 14), // "checkColorList"
QT_MOC_LITERAL(559, 16), // "displayImageInfo"
QT_MOC_LITERAL(576, 23), // "changeAllDialogFinished"
QT_MOC_LITERAL(600, 10), // "returnCode"
QT_MOC_LITERAL(611, 25), // "changeColorDialogFinished"
QT_MOC_LITERAL(637, 25), // "processColorDialogClosing"
QT_MOC_LITERAL(663, 27), // "processRightDialogMouseMove"
QT_MOC_LITERAL(691, 26), // "processLeftDialogMouseMove"
QT_MOC_LITERAL(718, 28), // "processRightDialogMouseClick"
QT_MOC_LITERAL(747, 27), // "processLeftDialogMouseClick"
QT_MOC_LITERAL(775, 17), // "updateDualZooming"
QT_MOC_LITERAL(793, 10), // "dualZoomOn"
QT_MOC_LITERAL(804, 4), // "zoom"
QT_MOC_LITERAL(809, 13), // "zoomIncrement"
QT_MOC_LITERAL(823, 17), // "replaceRareColors"
QT_MOC_LITERAL(841, 27), // "toolDockLabelColorRequested"
QT_MOC_LITERAL(869, 12), // "currentColor"
QT_MOC_LITERAL(882, 9), // "flossType"
QT_MOC_LITERAL(892, 4), // "type"
QT_MOC_LITERAL(897, 27), // "processToolFlossTypeChanged"
QT_MOC_LITERAL(925, 7) // "newType"

    },
    "squareWindow\0processGridChange\0\0checked\0"
    "processGridColorChange\0processChangeAll\0"
    "oldColor\0triC\0flossColor\0newColor\0"
    "processDetailCall\0numColors\0"
    "processDetailClearCall\0processToolChanged\0"
    "squareToolCode\0currentTool\0"
    "processLeftImageClick\0QMouseEvent*\0"
    "event\0processRightImageClick\0"
    "processActiveImageClick\0"
    "processInactiveImageClick\0"
    "processInactiveMouseMove\0"
    "processActiveMouseMove\0processLeftMouseMove\0"
    "processRightMouseMove\0processMouseRelease\0"
    "processBackHistoryAction\0"
    "processForwardHistoryAction\0"
    "processPatternButton\0squareImagePtr\0"
    "image\0patternIndex\0checkColorList\0"
    "displayImageInfo\0changeAllDialogFinished\0"
    "returnCode\0changeColorDialogFinished\0"
    "processColorDialogClosing\0"
    "processRightDialogMouseMove\0"
    "processLeftDialogMouseMove\0"
    "processRightDialogMouseClick\0"
    "processLeftDialogMouseClick\0"
    "updateDualZooming\0dualZoomOn\0zoom\0"
    "zoomIncrement\0replaceRareColors\0"
    "toolDockLabelColorRequested\0currentColor\0"
    "flossType\0type\0processToolFlossTypeChanged\0"
    "newType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_squareWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  224,    2, 0x08,    1 /* Private */,
       4,    0,  227,    2, 0x08,    3 /* Private */,
       5,    1,  228,    2, 0x08,    4 /* Private */,
       5,    2,  231,    2, 0x08,    6 /* Private */,
      10,    1,  236,    2, 0x08,    9 /* Private */,
      12,    0,  239,    2, 0x08,   11 /* Private */,
      13,    1,  240,    2, 0x08,   12 /* Private */,
      16,    1,  243,    2, 0x08,   14 /* Private */,
      19,    1,  246,    2, 0x08,   16 /* Private */,
      20,    1,  249,    2, 0x08,   18 /* Private */,
      21,    1,  252,    2, 0x08,   20 /* Private */,
      22,    1,  255,    2, 0x08,   22 /* Private */,
      23,    1,  258,    2, 0x08,   24 /* Private */,
      24,    1,  261,    2, 0x08,   26 /* Private */,
      25,    1,  264,    2, 0x08,   28 /* Private */,
      26,    1,  267,    2, 0x08,   30 /* Private */,
      27,    0,  270,    2, 0x08,   32 /* Private */,
      28,    0,  271,    2, 0x08,   33 /* Private */,
      29,    2,  272,    2, 0x08,   34 /* Private */,
      29,    1,  277,    2, 0x28,   37 /* Private | MethodCloned */,
      29,    0,  280,    2, 0x28,   39 /* Private | MethodCloned */,
      33,    0,  281,    2, 0x08,   40 /* Private */,
      34,    0,  282,    2, 0x08,   41 /* Private */,
      35,    3,  283,    2, 0x08,   42 /* Private */,
      37,    3,  290,    2, 0x08,   46 /* Private */,
      38,    0,  297,    2, 0x08,   50 /* Private */,
      39,    1,  298,    2, 0x08,   51 /* Private */,
      40,    1,  301,    2, 0x08,   53 /* Private */,
      41,    1,  304,    2, 0x08,   55 /* Private */,
      42,    1,  307,    2, 0x08,   57 /* Private */,
      43,    1,  310,    2, 0x08,   59 /* Private */,
      45,    1,  313,    2, 0x08,   61 /* Private */,
      47,    0,  316,    2, 0x08,   63 /* Private */,
      48,    2,  317,    2, 0x08,   64 /* Private */,
      52,    1,  322,    2, 0x08,   67 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    6,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 8,    6,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30, QMetaType::Int,   31,   32,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7, 0x80000000 | 8,   36,    6,    9,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7, 0x80000000 | 8,   36,    2,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void, QMetaType::Int,   46,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 50,   49,   51,
    QMetaType::Void, 0x80000000 | 50,   53,

       0        // eod
};

void squareWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<squareWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->processGridChange((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->processGridColorChange(); break;
        case 2: _t->processChangeAll((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 3: _t->processChangeAll((*reinterpret_cast< std::add_pointer_t<triC>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<flossColor>>(_a[2]))); break;
        case 4: _t->processDetailCall((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->processDetailClearCall(); break;
        case 6: _t->processToolChanged((*reinterpret_cast< std::add_pointer_t<squareToolCode>>(_a[1]))); break;
        case 7: _t->processLeftImageClick((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 8: _t->processRightImageClick((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 9: _t->processActiveImageClick((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 10: _t->processInactiveImageClick((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 11: _t->processInactiveMouseMove((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 12: _t->processActiveMouseMove((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 13: _t->processLeftMouseMove((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 14: _t->processRightMouseMove((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 15: _t->processMouseRelease((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 16: _t->processBackHistoryAction(); break;
        case 17: _t->processForwardHistoryAction(); break;
        case 18: _t->processPatternButton((*reinterpret_cast< std::add_pointer_t<squareImagePtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 19: _t->processPatternButton((*reinterpret_cast< std::add_pointer_t<squareImagePtr>>(_a[1]))); break;
        case 20: _t->processPatternButton(); break;
        case 21: _t->checkColorList(); break;
        case 22: _t->displayImageInfo(); break;
        case 23: _t->changeAllDialogFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<triC>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<flossColor>>(_a[3]))); break;
        case 24: _t->changeColorDialogFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<triC>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<flossColor>>(_a[3]))); break;
        case 25: _t->processColorDialogClosing(); break;
        case 26: _t->processRightDialogMouseMove((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 27: _t->processLeftDialogMouseMove((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 28: _t->processRightDialogMouseClick((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 29: _t->processLeftDialogMouseClick((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 30: _t->updateDualZooming((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 31: _t->zoom((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 32: _t->replaceRareColors(); break;
        case 33: _t->toolDockLabelColorRequested((*reinterpret_cast< std::add_pointer_t<triC>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<flossType>>(_a[2]))); break;
        case 34: _t->processToolFlossTypeChanged((*reinterpret_cast< std::add_pointer_t<flossType>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< flossType >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< flossType >(); break;
            }
            break;
        }
    }
}

const QMetaObject squareWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<imageCompareBase::staticMetaObject>(),
    qt_meta_stringdata_squareWindow.offsetsAndSize,
    qt_meta_data_squareWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_squareWindow_t
, QtPrivate::TypeAndForceComplete<squareWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const triC &, std::false_type>, QtPrivate::TypeAndForceComplete<const flossColor &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<squareToolCode, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<squareImagePtr, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<squareImagePtr, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<const triC &, std::false_type>, QtPrivate::TypeAndForceComplete<const flossColor &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<const triC &, std::false_type>, QtPrivate::TypeAndForceComplete<const flossColor &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const triC &, std::false_type>, QtPrivate::TypeAndForceComplete<flossType, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<flossType, std::false_type>


>,
    nullptr
} };


const QMetaObject *squareWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *squareWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_squareWindow.stringdata0))
        return static_cast<void*>(this);
    return imageCompareBase::qt_metacast(_clname);
}

int squareWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = imageCompareBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
