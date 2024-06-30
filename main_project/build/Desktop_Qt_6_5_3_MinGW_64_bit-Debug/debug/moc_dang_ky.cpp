/****************************************************************************
** Meta object code from reading C++ file 'dang_ky.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dang_ky.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dang_ky.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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
struct qt_meta_stringdata_CLASSDang_kyENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSDang_kyENDCLASS = QtMocHelpers::stringData(
    "Dang_ky",
    "on_btnHello_clicked",
    "",
    "on_btnInfor_clicked",
    "on_btnQuestion_clicked",
    "on_btnDangky_clicked",
    "on_btnCapnhat_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDang_kyENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[8];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[23];
    char stringdata5[21];
    char stringdata6[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDang_kyENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDang_kyENDCLASS_t qt_meta_stringdata_CLASSDang_kyENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "Dang_ky"
        QT_MOC_LITERAL(8, 19),  // "on_btnHello_clicked"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 19),  // "on_btnInfor_clicked"
        QT_MOC_LITERAL(49, 22),  // "on_btnQuestion_clicked"
        QT_MOC_LITERAL(72, 20),  // "on_btnDangky_clicked"
        QT_MOC_LITERAL(93, 21)   // "on_btnCapnhat_clicked"
    },
    "Dang_ky",
    "on_btnHello_clicked",
    "",
    "on_btnInfor_clicked",
    "on_btnQuestion_clicked",
    "on_btnDangky_clicked",
    "on_btnCapnhat_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDang_kyENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Dang_ky::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSDang_kyENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDang_kyENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDang_kyENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Dang_ky, std::true_type>,
        // method 'on_btnHello_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnInfor_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnQuestion_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnDangky_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnCapnhat_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Dang_ky::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dang_ky *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btnHello_clicked(); break;
        case 1: _t->on_btnInfor_clicked(); break;
        case 2: _t->on_btnQuestion_clicked(); break;
        case 3: _t->on_btnDangky_clicked(); break;
        case 4: _t->on_btnCapnhat_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Dang_ky::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dang_ky::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDang_kyENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Dang_ky::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
