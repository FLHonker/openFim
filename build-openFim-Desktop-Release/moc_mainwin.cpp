/****************************************************************************
** Meta object code from reading C++ file 'mainwin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../openFim/mainwin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWin_t {
    QByteArrayData data[15];
    char stringdata0[331];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWin_t qt_meta_stringdata_MainWin = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MainWin"
QT_MOC_LITERAL(1, 8, 24), // "on_actionNew_N_triggered"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 25), // "on_actionSave_S_triggered"
QT_MOC_LITERAL(4, 60, 28), // "on_actionSave_As_M_triggered"
QT_MOC_LITERAL(5, 89, 25), // "on_actionOpen_O_triggered"
QT_MOC_LITERAL(6, 115, 26), // "on_actionClose_L_triggered"
QT_MOC_LITERAL(7, 142, 25), // "on_actionExit_Q_triggered"
QT_MOC_LITERAL(8, 168, 27), // "on_actionRevoke_Z_triggered"
QT_MOC_LITERAL(9, 196, 24), // "on_actionCut_X_triggered"
QT_MOC_LITERAL(10, 221, 25), // "on_actionCopy_C_triggered"
QT_MOC_LITERAL(11, 247, 26), // "on_actionPaste_V_triggered"
QT_MOC_LITERAL(12, 274, 13), // "show_findText"
QT_MOC_LITERAL(13, 288, 25), // "on_actionSearch_triggered"
QT_MOC_LITERAL(14, 314, 16) // "do_cursorChanged"

    },
    "MainWin\0on_actionNew_N_triggered\0\0"
    "on_actionSave_S_triggered\0"
    "on_actionSave_As_M_triggered\0"
    "on_actionOpen_O_triggered\0"
    "on_actionClose_L_triggered\0"
    "on_actionExit_Q_triggered\0"
    "on_actionRevoke_Z_triggered\0"
    "on_actionCut_X_triggered\0"
    "on_actionCopy_C_triggered\0"
    "on_actionPaste_V_triggered\0show_findText\0"
    "on_actionSearch_triggered\0do_cursorChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWin *_t = static_cast<MainWin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionNew_N_triggered(); break;
        case 1: _t->on_actionSave_S_triggered(); break;
        case 2: _t->on_actionSave_As_M_triggered(); break;
        case 3: _t->on_actionOpen_O_triggered(); break;
        case 4: _t->on_actionClose_L_triggered(); break;
        case 5: _t->on_actionExit_Q_triggered(); break;
        case 6: _t->on_actionRevoke_Z_triggered(); break;
        case 7: _t->on_actionCut_X_triggered(); break;
        case 8: _t->on_actionCopy_C_triggered(); break;
        case 9: _t->on_actionPaste_V_triggered(); break;
        case 10: _t->show_findText(); break;
        case 11: _t->on_actionSearch_triggered(); break;
        case 12: _t->do_cursorChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWin::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWin.data,
      qt_meta_data_MainWin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWin.stringdata0))
        return static_cast<void*>(const_cast< MainWin*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
