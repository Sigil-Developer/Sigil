/****************************************************************************
** Meta object code from reading C++ file 'rpcconsole.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/rpcconsole.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rpcconsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RPCConsole[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      35,   27,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   11,   11,   11, 0x08,
      89,   83,   11,   11, 0x08,
     122,   11,   11,   11, 0x08,
     158,   11,   11,   11, 0x08,
     198,  191,   11,   11, 0x08,
     260,  233,   11,   11, 0x08,
     296,   11,   11,   11, 0x08,
     330,   11,   11,   11, 0x0a,
     360,  338,   11,   11, 0x0a,
     403,  386,   11,   11, 0x2a,
     430,  424,   11,   11, 0x0a,
     472,  453,   11,   11, 0x0a,
     501,  494,   11,   11, 0x0a,
     520,   11,   11,   11, 0x0a,
     534,   11,   11,   11, 0x0a,
     548,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_RPCConsole[] = {
    "RPCConsole\0\0stopExecutor()\0command\0"
    "cmdRequest(QString)\0on_lineEdit_returnPressed()\0"
    "index\0on_tabWidget_currentChanged(int)\0"
    "on_openDebugLogfileButton_clicked()\0"
    "on_showCLOptionsButton_clicked()\0"
    "nValue\0on_sldGraphRange_valueChanged(int)\0"
    "totalBytesIn,totalBytesOut\0"
    "updateTrafficStats(quint64,quint64)\0"
    "on_btnClearTrafficGraph_clicked()\0"
    "clear()\0category,message,html\0"
    "message(int,QString,bool)\0category,message\0"
    "message(int,QString)\0count\0"
    "setNumConnections(int)\0count,countOfPeers\0"
    "setNumBlocks(int,int)\0offset\0"
    "browseHistory(int)\0scrollToEnd()\0"
    "showConsole()\0showTraffic()\0"
};

void RPCConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RPCConsole *_t = static_cast<RPCConsole *>(_o);
        switch (_id) {
        case 0: _t->stopExecutor(); break;
        case 1: _t->cmdRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_lineEdit_returnPressed(); break;
        case 3: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_openDebugLogfileButton_clicked(); break;
        case 5: _t->on_showCLOptionsButton_clicked(); break;
        case 6: _t->on_sldGraphRange_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->updateTrafficStats((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 8: _t->on_btnClearTrafficGraph_clicked(); break;
        case 9: _t->clear(); break;
        case 10: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 11: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->browseHistory((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->scrollToEnd(); break;
        case 16: _t->showConsole(); break;
        case 17: _t->showTraffic(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RPCConsole::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RPCConsole::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RPCConsole,
      qt_meta_data_RPCConsole, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RPCConsole::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RPCConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RPCConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RPCConsole))
        return static_cast<void*>(const_cast< RPCConsole*>(this));
    return QDialog::qt_metacast(_clname);
}

int RPCConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void RPCConsole::stopExecutor()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void RPCConsole::cmdRequest(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
