/****************************************************************************
** Meta object code from reading C++ file 'modifypasswdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modifypasswdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifypasswdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ModifyPasswdialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   46,   46,   46, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   46,   46,   46, 0x08,
      65,   46,   46,   46, 0x08,
      83,   46,   46,   46, 0x08,
     101,   46,   46,   46, 0x08,
     119,   46,   46,   46, 0x08,
     137,   46,   46,   46, 0x08,
     155,   46,   46,   46, 0x08,
     173,   46,   46,   46, 0x08,
     191,   46,   46,   46, 0x08,
     209,   46,   46,   46, 0x08,
     227,   46,   46,   46, 0x08,
     247,   46,   46,   46, 0x08,
     266,   46,   46,   46, 0x08,
     285,   46,   46,   46, 0x08,
     308,   46,   46,   46, 0x08,
     328,   46,   46,   46, 0x08,
     349,   46,   46,   46, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ModifyPasswdialog[] = {
    "ModifyPasswdialog\0send_modify_passwd(QString)\0"
    "\0on_btn1_clicked()\0on_btn2_clicked()\0"
    "on_btn3_clicked()\0on_btn4_clicked()\0"
    "on_btn5_clicked()\0on_btn6_clicked()\0"
    "on_btn7_clicked()\0on_btn8_clicked()\0"
    "on_btn9_clicked()\0on_btn0_clicked()\0"
    "on_btnDot_clicked()\0on_btnCL_clicked()\0"
    "on_btnDE_clicked()\0on_btnCancel_clicked()\0"
    "on_btnEnt_clicked()\0On_editingFinished()\0"
    "On_editingFinished_2()\0"
};

void ModifyPasswdialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ModifyPasswdialog *_t = static_cast<ModifyPasswdialog *>(_o);
        switch (_id) {
        case 0: _t->send_modify_passwd((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_btn1_clicked(); break;
        case 2: _t->on_btn2_clicked(); break;
        case 3: _t->on_btn3_clicked(); break;
        case 4: _t->on_btn4_clicked(); break;
        case 5: _t->on_btn5_clicked(); break;
        case 6: _t->on_btn6_clicked(); break;
        case 7: _t->on_btn7_clicked(); break;
        case 8: _t->on_btn8_clicked(); break;
        case 9: _t->on_btn9_clicked(); break;
        case 10: _t->on_btn0_clicked(); break;
        case 11: _t->on_btnDot_clicked(); break;
        case 12: _t->on_btnCL_clicked(); break;
        case 13: _t->on_btnDE_clicked(); break;
        case 14: _t->on_btnCancel_clicked(); break;
        case 15: _t->on_btnEnt_clicked(); break;
        case 16: _t->On_editingFinished(); break;
        case 17: _t->On_editingFinished_2(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ModifyPasswdialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ModifyPasswdialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ModifyPasswdialog,
      qt_meta_data_ModifyPasswdialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ModifyPasswdialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ModifyPasswdialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ModifyPasswdialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModifyPasswdialog))
        return static_cast<void*>(const_cast< ModifyPasswdialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ModifyPasswdialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void ModifyPasswdialog::send_modify_passwd(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
