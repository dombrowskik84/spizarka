/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_logOutButton_clicked",
    "",
    "on_suggetButton_clicked",
    "on_tableView_activated",
    "QModelIndex",
    "index",
    "on_deleteIngrButton_clicked",
    "ShowResources",
    "ShowIngredients",
    "ShowRecipes",
    "resizeRowsInTableView",
    "AddIngredientsToTheShoppingList",
    "ShowShoppingList",
    "receiveMap",
    "QMap<QString,int>",
    "map",
    "receiveNewKcal",
    "kcal"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    1,   88,    2, 0x08,    3 /* Private */,
       7,    0,   91,    2, 0x08,    5 /* Private */,
       8,    0,   92,    2, 0x0a,    6 /* Public */,
       9,    0,   93,    2, 0x0a,    7 /* Public */,
      10,    0,   94,    2, 0x0a,    8 /* Public */,
      11,    0,   95,    2, 0x0a,    9 /* Public */,
      12,    0,   96,    2, 0x0a,   10 /* Public */,
      13,    0,   97,    2, 0x0a,   11 /* Public */,
      14,    1,   98,    2, 0x0a,   12 /* Public */,
      17,    1,  101,    2, 0x0a,   14 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::Int,   18,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_logOutButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_suggetButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableView_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_deleteIngrButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ShowResources'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ShowIngredients'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ShowRecipes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resizeRowsInTableView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AddIngredientsToTheShoppingList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ShowShoppingList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveMap'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMap<QString,int> &, std::false_type>,
        // method 'receiveNewKcal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_logOutButton_clicked(); break;
        case 1: _t->on_suggetButton_clicked(); break;
        case 2: _t->on_tableView_activated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->on_deleteIngrButton_clicked(); break;
        case 4: _t->ShowResources(); break;
        case 5: _t->ShowIngredients(); break;
        case 6: _t->ShowRecipes(); break;
        case 7: _t->resizeRowsInTableView(); break;
        case 8: _t->AddIngredientsToTheShoppingList(); break;
        case 9: _t->ShowShoppingList(); break;
        case 10: _t->receiveMap((*reinterpret_cast< std::add_pointer_t<QMap<QString,int>>>(_a[1]))); break;
        case 11: _t->receiveNewKcal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BaseClass"))
        return static_cast< BaseClass*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
