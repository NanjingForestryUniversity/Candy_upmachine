/****************************************************************************
** Meta object code from reading C++ file 'thread.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "thread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'thread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Process_img[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   32,   32,   32, 0x05,
      33,   32,   32,   32, 0x05,
      66,   32,   32,   32, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Process_img[] = {
    "Process_img\0send_image(cv::Mat)\0\0"
    "send_res(QVector<bad_candy_box>)\0"
    "send_tab(uint8_t*)\0"
};

void Process_img::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Process_img *_t = static_cast<Process_img *>(_o);
        switch (_id) {
        case 0: _t->send_image((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 1: _t->send_res((*reinterpret_cast< QVector<bad_candy_box>(*)>(_a[1]))); break;
        case 2: _t->send_tab((*reinterpret_cast< uint8_t*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Process_img::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Process_img::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_Process_img,
      qt_meta_data_Process_img, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Process_img::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Process_img::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Process_img::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Process_img))
        return static_cast<void*>(const_cast< Process_img*>(this));
    return QThread::qt_metacast(_clname);
}

int Process_img::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Process_img::send_image(cv::Mat _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Process_img::send_res(QVector<bad_candy_box> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Process_img::send_tab(uint8_t * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_Adjust_para[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   38,   38,   38, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   38,   38,   38, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Adjust_para[] = {
    "Adjust_para\0send_image_debug(cv::Mat)\0"
    "\0get_correct_siganl()\0"
};

void Adjust_para::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Adjust_para *_t = static_cast<Adjust_para *>(_o);
        switch (_id) {
        case 0: _t->send_image_debug((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 1: _t->get_correct_siganl(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Adjust_para::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Adjust_para::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_Adjust_para,
      qt_meta_data_Adjust_para, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Adjust_para::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Adjust_para::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Adjust_para::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Adjust_para))
        return static_cast<void*>(const_cast< Adjust_para*>(this));
    return QThread::qt_metacast(_clname);
}

int Adjust_para::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Adjust_para::send_image_debug(cv::Mat _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_Grab_img[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Grab_img[] = {
    "Grab_img\0"
};

void Grab_img::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Grab_img::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Grab_img::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_Grab_img,
      qt_meta_data_Grab_img, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Grab_img::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Grab_img::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Grab_img::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Grab_img))
        return static_cast<void*>(const_cast< Grab_img*>(this));
    return QThread::qt_metacast(_clname);
}

int Grab_img::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
