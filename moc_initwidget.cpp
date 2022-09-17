/****************************************************************************
** Meta object code from reading C++ file 'initwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "initwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'initwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InitWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   34,   34,   34, 0x08,
      35,   34,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InitWidget[] = {
    "InitWidget\0init_mainwindow_slot()\0\0"
    "change_window_slot()\0"
};

void InitWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InitWidget *_t = static_cast<InitWidget *>(_o);
        switch (_id) {
        case 0: _t->init_mainwindow_slot(); break;
        case 1: _t->change_window_slot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData InitWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InitWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InitWidget,
      qt_meta_data_InitWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InitWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InitWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InitWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InitWidget))
        return static_cast<void*>(const_cast< InitWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int InitWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
