/****************************************************************************
** Meta object code from reading C++ file 'cabin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LR_3/cabin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cabin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cabin_t {
    QByteArrayData data[15];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cabin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cabin_t qt_meta_stringdata_Cabin = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Cabin"
QT_MOC_LITERAL(1, 6, 13), // "statusChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "message"
QT_MOC_LITERAL(4, 29, 14), // "targetAchieved"
QT_MOC_LITERAL(5, 44, 5), // "floor"
QT_MOC_LITERAL(6, 50, 9), // "Direction"
QT_MOC_LITERAL(7, 60, 9), // "direction"
QT_MOC_LITERAL(8, 70, 18), // "intermediatePassed"
QT_MOC_LITERAL(9, 89, 20), // "stoppedOnTargetFloor"
QT_MOC_LITERAL(10, 110, 4), // "move"
QT_MOC_LITERAL(11, 115, 8), // "movement"
QT_MOC_LITERAL(12, 124, 9), // "getTarget"
QT_MOC_LITERAL(13, 134, 11), // "stopOnFloor"
QT_MOC_LITERAL(14, 146, 16) // "sendDoorsMessage"

    },
    "Cabin\0statusChanged\0\0message\0"
    "targetAchieved\0floor\0Direction\0direction\0"
    "intermediatePassed\0stoppedOnTargetFloor\0"
    "move\0movement\0getTarget\0stopOnFloor\0"
    "sendDoorsMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cabin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    2,   62,    2, 0x06 /* Public */,
       8,    2,   67,    2, 0x06 /* Public */,
       9,    0,   72,    2, 0x06 /* Public */,
      10,    0,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   74,    2, 0x08 /* Private */,
      12,    1,   75,    2, 0x08 /* Private */,
      13,    0,   78,    2, 0x08 /* Private */,
      14,    1,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    5,    7,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    5,    7,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void Cabin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Cabin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->targetAchieved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Direction(*)>(_a[2]))); break;
        case 2: _t->intermediatePassed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Direction(*)>(_a[2]))); break;
        case 3: _t->stoppedOnTargetFloor(); break;
        case 4: _t->move(); break;
        case 5: _t->movement(); break;
        case 6: _t->getTarget((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->stopOnFloor(); break;
        case 8: _t->sendDoorsMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Cabin::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cabin::statusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Cabin::*)(int , Direction );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cabin::targetAchieved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Cabin::*)(int , Direction );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cabin::intermediatePassed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Cabin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cabin::stoppedOnTargetFloor)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Cabin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cabin::move)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cabin::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Cabin.data,
    qt_meta_data_Cabin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Cabin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cabin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cabin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Cabin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Cabin::statusChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Cabin::targetAchieved(int _t1, Direction _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Cabin::intermediatePassed(int _t1, Direction _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Cabin::stoppedOnTargetFloor()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Cabin::move()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
