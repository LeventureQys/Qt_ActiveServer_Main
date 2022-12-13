/****************************************************************************
** Meta object code from reading C++ file 'OutPut_Class.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OutPut_Class.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OutPut_Class.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OutPut_Class_t {
    QByteArrayData data[14];
    char stringdata0[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OutPut_Class_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OutPut_Class_t qt_meta_stringdata_OutPut_Class = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OutPut_Class"
QT_MOC_LITERAL(1, 13, 7), // "ClassID"
QT_MOC_LITERAL(2, 21, 38), // "{D2FC96B4-1957-4909-AA2F-DA17..."
QT_MOC_LITERAL(3, 60, 11), // "InterfaceID"
QT_MOC_LITERAL(4, 72, 38), // "{FB298DC5-6AE0-4E86-92C8-DF06..."
QT_MOC_LITERAL(5, 111, 8), // "EventsID"
QT_MOC_LITERAL(6, 120, 38), // "{37FB2D8B-F98F-4352-8E69-251F..."
QT_MOC_LITERAL(7, 159, 14), // "RegisterObject"
QT_MOC_LITERAL(8, 174, 3), // "yes"
QT_MOC_LITERAL(9, 178, 16), // "send_to_progress"
QT_MOC_LITERAL(10, 195, 0), // ""
QT_MOC_LITERAL(11, 196, 5), // "value"
QT_MOC_LITERAL(12, 202, 25), // "sig_receive_from_progress"
QT_MOC_LITERAL(13, 228, 21) // "receive_from_progress"

    },
    "OutPut_Class\0ClassID\0"
    "{D2FC96B4-1957-4909-AA2F-DA173971639F}\0"
    "InterfaceID\0{FB298DC5-6AE0-4E86-92C8-DF06105797B4}\0"
    "EventsID\0{37FB2D8B-F98F-4352-8E69-251FBB87AA4F}\0"
    "RegisterObject\0yes\0send_to_progress\0"
    "\0value\0sig_receive_from_progress\0"
    "receive_from_progress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OutPut_Class[] = {

 // content:
       7,       // revision
       0,       // classname
       4,   14, // classinfo
       3,   22, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,
       5,    6,
       7,    8,

 // signals: name, argc, parameters, tag, flags
       9,    1,   37,   10, 0x06 /* Public */,
      12,    1,   40,   10, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   43,   10, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void OutPut_Class::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OutPut_Class *_t = static_cast<OutPut_Class *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_to_progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sig_receive_from_progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->receive_from_progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (OutPut_Class::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OutPut_Class::send_to_progress)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OutPut_Class::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OutPut_Class::sig_receive_from_progress)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OutPut_Class::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OutPut_Class.data,
      qt_meta_data_OutPut_Class,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OutPut_Class::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OutPut_Class::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OutPut_Class.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QAxBindable"))
        return static_cast< QAxBindable*>(this);
    return QObject::qt_metacast(_clname);
}

int OutPut_Class::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void OutPut_Class::send_to_progress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OutPut_Class::sig_receive_from_progress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
