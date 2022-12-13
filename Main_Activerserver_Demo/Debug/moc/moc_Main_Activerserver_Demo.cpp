/****************************************************************************
** Meta object code from reading C++ file 'Main_Activerserver_Demo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Main_Activerserver_Demo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Main_Activerserver_Demo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Main_Activerserver_Demo_t {
    QByteArrayData data[5];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Main_Activerserver_Demo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Main_Activerserver_Demo_t qt_meta_stringdata_Main_Activerserver_Demo = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Main_Activerserver_Demo"
QT_MOC_LITERAL(1, 24, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 8), // "rec_slot"
QT_MOC_LITERAL(4, 56, 1) // "a"

    },
    "Main_Activerserver_Demo\0on_pushButton_clicked\0"
    "\0rec_slot\0a"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Main_Activerserver_Demo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void Main_Activerserver_Demo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Main_Activerserver_Demo *_t = static_cast<Main_Activerserver_Demo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->rec_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Main_Activerserver_Demo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Main_Activerserver_Demo.data,
      qt_meta_data_Main_Activerserver_Demo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Main_Activerserver_Demo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Main_Activerserver_Demo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Main_Activerserver_Demo.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QAxBindable"))
        return static_cast< QAxBindable*>(this);
    return QWidget::qt_metacast(_clname);
}

int Main_Activerserver_Demo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
