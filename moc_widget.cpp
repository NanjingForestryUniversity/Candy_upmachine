/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Widget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,   24,   24,   24, 0x05,
      25,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   24,   24,   24, 0x08,
      62,   24,   24,   24, 0x08,
      84,   24,   24,   24, 0x08,
     104,   24,   24,   24, 0x08,
     123,   24,   24,   24, 0x08,
     145,   24,   24,   24, 0x08,
     167,   24,   24,   24, 0x08,
     191,   24,   24,   24, 0x08,
     213,   24,   24,   24, 0x08,
     235,   24,   24,   24, 0x08,
     257,   24,   24,   24, 0x08,
     281,   24,   24,   24, 0x08,
     303,   24,   24,   24, 0x08,
     329,   24,   24,   24, 0x08,
     356,   24,   24,   24, 0x08,
     379,   24,   24,   24, 0x08,
     405,   24,   24,   24, 0x08,
     434,   24,   24,   24, 0x08,
     456,   24,   24,   24, 0x08,
     478,   24,   24,   24, 0x08,
     508,   24,   24,   24, 0x08,
     530,   24,   24,   24, 0x08,
     551,   24,   24,   24, 0x08,
     589,   24,   24,   24, 0x08,
     613,   24,   24,   24, 0x08,
     635,   24,   24,   24, 0x08,
     659,   24,   24,   24, 0x08,
     685,   24,   24,   24, 0x08,
     715,   24,   24,   24, 0x08,
     739,   24,   24,   24, 0x08,
     764,   24,   24,   24, 0x08,
     783,   24,   24,   24, 0x08,
     815,   24,   24,   24, 0x08,
     839,   24,   24,   24, 0x08,
     861,   24,   24,   24, 0x08,
     879,   24,   24,   24, 0x08,
     897,   24,   24,   24, 0x08,
     915,   24,   24,   24, 0x08,
     933,   24,   24,   24, 0x08,
     951,   24,   24,   24, 0x08,
     969,   24,   24,   24, 0x08,
     987,   24,   24,   24, 0x08,
    1005,   24,   24,   24, 0x08,
    1023,   24,   24,   24, 0x08,
    1041,   24,   24,   24, 0x08,
    1059,   24,   24,   24, 0x08,
    1080,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Widget[] = {
    "Widget\0correct_signal()\0\0wrong_passwd()\0"
    "On_btn_Tab1_2_click()\0On_btn_Tab1_3_click()\0"
    "On_btnStart_click()\0On_bthStop_click()\0"
    "On_btn_Tab2_1_click()\0On_btn_Tab2_5_click()\0"
    "On_btnValveTest_click()\0On_btn_Tab3_1_click()\0"
    "On_btn_Tab3_4_click()\0On_btn_Tab3_6_click()\0"
    "On_btnImportImg_click()\0On_btnSaveImg_click()\0"
    "On_btnImportModel_click()\0"
    "On_btnModifyPasswd_click()\0"
    "On_btn_correct_click()\0On_btn_getcorrect_click()\0"
    "On_btn_setcamerapara_click()\0"
    "On_btn_Tab4_3_click()\0On_btn_Tab5_3_click()\0"
    "On_btn_set_thereshold_click()\0"
    "On_btn_Tab6_3_click()\0On_btn_close_click()\0"
    "On_candy_select_box_index_change(int)\0"
    "On_btnManualValveTest()\0On_btn_Tab7_3_click()\0"
    "On_btnchannelup_click()\0"
    "On_btnchanneldown_click()\0"
    "On_btn_channel_send_clicked()\0"
    "judge_password(QString)\0"
    "modify_password(QString)\0showimage(cv::Mat)\0"
    "drawbox(QVector<bad_candy_box>)\0"
    "showimage_test(cv::Mat)\0ServerNewConnection()\0"
    "get_tab(uint8_t*)\0On_btn1_clicked()\0"
    "On_btn2_clicked()\0On_btn3_clicked()\0"
    "On_btn4_clicked()\0On_btn5_clicked()\0"
    "On_btn6_clicked()\0On_btn7_clicked()\0"
    "On_btn8_clicked()\0On_btn9_clicked()\0"
    "On_btn0_clicked()\0On_btn_DEL_clicked()\0"
    "readfrom_lowermachine()\0"
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Widget *_t = static_cast<Widget *>(_o);
        switch (_id) {
        case 0: _t->correct_signal(); break;
        case 1: _t->wrong_passwd(); break;
        case 2: _t->On_btn_Tab1_2_click(); break;
        case 3: _t->On_btn_Tab1_3_click(); break;
        case 4: _t->On_btnStart_click(); break;
        case 5: _t->On_bthStop_click(); break;
        case 6: _t->On_btn_Tab2_1_click(); break;
        case 7: _t->On_btn_Tab2_5_click(); break;
        case 8: _t->On_btnValveTest_click(); break;
        case 9: _t->On_btn_Tab3_1_click(); break;
        case 10: _t->On_btn_Tab3_4_click(); break;
        case 11: _t->On_btn_Tab3_6_click(); break;
        case 12: _t->On_btnImportImg_click(); break;
        case 13: _t->On_btnSaveImg_click(); break;
        case 14: _t->On_btnImportModel_click(); break;
        case 15: _t->On_btnModifyPasswd_click(); break;
        case 16: _t->On_btn_correct_click(); break;
        case 17: _t->On_btn_getcorrect_click(); break;
        case 18: _t->On_btn_setcamerapara_click(); break;
        case 19: _t->On_btn_Tab4_3_click(); break;
        case 20: _t->On_btn_Tab5_3_click(); break;
        case 21: _t->On_btn_set_thereshold_click(); break;
        case 22: _t->On_btn_Tab6_3_click(); break;
        case 23: _t->On_btn_close_click(); break;
        case 24: _t->On_candy_select_box_index_change((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->On_btnManualValveTest(); break;
        case 26: _t->On_btn_Tab7_3_click(); break;
        case 27: _t->On_btnchannelup_click(); break;
        case 28: _t->On_btnchanneldown_click(); break;
        case 29: _t->On_btn_channel_send_clicked(); break;
        case 30: _t->judge_password((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 31: _t->modify_password((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: _t->showimage((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 33: _t->drawbox((*reinterpret_cast< QVector<bad_candy_box>(*)>(_a[1]))); break;
        case 34: _t->showimage_test((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 35: _t->ServerNewConnection(); break;
        case 36: _t->get_tab((*reinterpret_cast< uint8_t*(*)>(_a[1]))); break;
        case 37: _t->On_btn1_clicked(); break;
        case 38: _t->On_btn2_clicked(); break;
        case 39: _t->On_btn3_clicked(); break;
        case 40: _t->On_btn4_clicked(); break;
        case 41: _t->On_btn5_clicked(); break;
        case 42: _t->On_btn6_clicked(); break;
        case 43: _t->On_btn7_clicked(); break;
        case 44: _t->On_btn8_clicked(); break;
        case 45: _t->On_btn9_clicked(); break;
        case 46: _t->On_btn0_clicked(); break;
        case 47: _t->On_btn_DEL_clicked(); break;
        case 48: _t->readfrom_lowermachine(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Widget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget,
      qt_meta_data_Widget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Widget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Widget))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    }
    return _id;
}

// SIGNAL 0
void Widget::correct_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Widget::wrong_passwd()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
