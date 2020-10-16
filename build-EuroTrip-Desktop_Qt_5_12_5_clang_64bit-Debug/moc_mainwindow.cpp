/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../EuroTrip/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[23];
    char stringdata0[449];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 24), // "on_actionAdmin_triggered"
QT_MOC_LITERAL(4, 61, 11), // "userIsAdmin"
QT_MOC_LITERAL(5, 73, 23), // "on_actionLoad_triggered"
QT_MOC_LITERAL(6, 97, 32), // "on_actionLoad_Extended_triggered"
QT_MOC_LITERAL(7, 130, 25), // "on_buttonGenerate_clicked"
QT_MOC_LITERAL(8, 156, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 178, 26), // "on_actionLog_Out_triggered"
QT_MOC_LITERAL(10, 205, 24), // "on_OptimalTravel_clicked"
QT_MOC_LITERAL(11, 230, 16), // "recursivePathing"
QT_MOC_LITERAL(12, 247, 13), // "QVector<City>"
QT_MOC_LITERAL(13, 261, 4), // "City"
QT_MOC_LITERAL(14, 266, 5), // "start"
QT_MOC_LITERAL(15, 272, 14), // "QVector<City>&"
QT_MOC_LITERAL(16, 287, 6), // "cities"
QT_MOC_LITERAL(17, 294, 6), // "sorted"
QT_MOC_LITERAL(18, 301, 21), // "on_customPlan_clicked"
QT_MOC_LITERAL(19, 323, 26), // "on_OptimalTravel_2_clicked"
QT_MOC_LITERAL(20, 350, 31), // "on_pushButton_loadFoods_clicked"
QT_MOC_LITERAL(21, 382, 32), // "on_pushButton_deleteFood_clicked"
QT_MOC_LITERAL(22, 415, 33) // "on_pushButton_changePrice_cli..."

    },
    "MainWindow\0on_actionExit_triggered\0\0"
    "on_actionAdmin_triggered\0userIsAdmin\0"
    "on_actionLoad_triggered\0"
    "on_actionLoad_Extended_triggered\0"
    "on_buttonGenerate_clicked\0"
    "on_pushButton_clicked\0on_actionLog_Out_triggered\0"
    "on_OptimalTravel_clicked\0recursivePathing\0"
    "QVector<City>\0City\0start\0QVector<City>&\0"
    "cities\0sorted\0on_customPlan_clicked\0"
    "on_OptimalTravel_2_clicked\0"
    "on_pushButton_loadFoods_clicked\0"
    "on_pushButton_deleteFood_clicked\0"
    "on_pushButton_changePrice_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    3,   98,    2, 0x08 /* Private */,
      18,    0,  105,    2, 0x08 /* Private */,
      19,    0,  106,    2, 0x08 /* Private */,
      20,    0,  107,    2, 0x08 /* Private */,
      21,    0,  108,    2, 0x08 /* Private */,
      22,    0,  109,    2, 0x08 /* Private */,

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
    0x80000000 | 12, 0x80000000 | 13, 0x80000000 | 15, 0x80000000 | 15,   14,   16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionExit_triggered(); break;
        case 1: _t->on_actionAdmin_triggered(); break;
        case 2: _t->userIsAdmin(); break;
        case 3: _t->on_actionLoad_triggered(); break;
        case 4: _t->on_actionLoad_Extended_triggered(); break;
        case 5: _t->on_buttonGenerate_clicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_actionLog_Out_triggered(); break;
        case 8: _t->on_OptimalTravel_clicked(); break;
        case 9: { QVector<City> _r = _t->recursivePathing((*reinterpret_cast< City(*)>(_a[1])),(*reinterpret_cast< QVector<City>(*)>(_a[2])),(*reinterpret_cast< QVector<City>(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVector<City>*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->on_customPlan_clicked(); break;
        case 11: _t->on_OptimalTravel_2_clicked(); break;
        case 12: _t->on_pushButton_loadFoods_clicked(); break;
        case 13: _t->on_pushButton_deleteFood_clicked(); break;
        case 14: _t->on_pushButton_changePrice_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
