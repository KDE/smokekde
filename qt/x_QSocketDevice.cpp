//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qglobal.h>
#include <qiodevice.h>
#include <qsocketdevice.h>
#include <qcstring.h>
#include <qhostaddress.h>

class x_QSocketDevice : public QSocketDevice {
public:
    static void x_0(xargs *x) {
	x[0].x_long = (long)QSocketDevice::Stream;
    }
    static void x_1(xargs *x) {
	x[0].x_long = (long)QSocketDevice::Datagram;
    }
    static void x_2(xargs *x) {
	x[0].x_long = (long)QSocketDevice::NoError;
    }
    static void x_3(xargs *x) {
	x[0].x_long = (long)QSocketDevice::AlreadyBound;
    }
    static void x_4(xargs *x) {
	x[0].x_long = (long)QSocketDevice::Inaccessible;
    }
    static void x_5(xargs *x) {
	x[0].x_long = (long)QSocketDevice::NoResources;
    }
    static void x_6(xargs *x) {
	x[0].x_long = (long)QSocketDevice::Bug;
    }
    static void x_7(xargs *x) {
	x[0].x_long = (long)QSocketDevice::Impossible;
    }
    static void x_8(xargs *x) {
	x[0].x_long = (long)QSocketDevice::NoFiles;
    }
    static void x_9(xargs *x) {
	x[0].x_long = (long)QSocketDevice::ConnectionRefused;
    }
    static void x_10(xargs *x) {
	x[0].x_long = (long)QSocketDevice::NetworkFailure;
    }
    static void x_11(xargs *x) {
	x[0].x_long = (long)QSocketDevice::UnknownError;
    }
    static void x_12(xargs *x) {
	// QSocketDevice(QSocketDevice::Type)
	x_QSocketDevice* xret = new x_QSocketDevice((QSocketDevice::Type)x[1].x_long);
	x[0].x_voidp = (void*)xret;
    }
    x_QSocketDevice(QSocketDevice::Type x1) : QSocketDevice(x1) {
    }
    static void x_13(xargs *x) {
	// QSocketDevice()
	x_QSocketDevice* xret = new x_QSocketDevice();
	x[0].x_voidp = (void*)xret;
    }
    x_QSocketDevice() : QSocketDevice() {
    }
    static void x_14(xargs *x) {
	// QSocketDevice(int, QSocketDevice::Type)
	x_QSocketDevice* xret = new x_QSocketDevice((int)x[1].x_int,(QSocketDevice::Type)x[2].x_long);
	x[0].x_voidp = (void*)xret;
    }
    x_QSocketDevice(int x1, QSocketDevice::Type x2) : QSocketDevice(x1, x2) {
    }
    void x_15(xargs *x) const {
	// isValid()
	bool xret = this->QSocketDevice::isValid();
	x[0].x_bool = (bool)xret;
    }
    void x_16(xargs *x) const {
	// type()
	QSocketDevice::Type xret = this->QSocketDevice::type();
	x[0].x_long = (long)xret;
    }
    void x_17(xargs *x) const {
	// socket()
	int xret = this->QSocketDevice::socket();
	x[0].x_int = (int)xret;
    }
    void x_18(xargs *x) {
	// setSocket(int, QSocketDevice::Type)
	this->QSocketDevice::setSocket((int)x[1].x_int,(QSocketDevice::Type)x[2].x_long);
    }
    void x_19(xargs *x) {
	// open(int)
	bool xret = this->QSocketDevice::open((int)x[1].x_int);
	x[0].x_bool = (bool)xret;
    }
    void x_20(xargs *x) {
	// close()
	this->QSocketDevice::close();
    }
    void x_21(xargs *x) {
	// flush()
	this->QSocketDevice::flush();
    }
    void x_22(xargs *x) const {
	// size()
	QIODevice::Offset xret = this->QSocketDevice::size();
	x[0].x_voidp = (void*)new QIODevice::Offset(xret);
    }
    void x_23(xargs *x) const {
	// at()
	QIODevice::Offset xret = this->QSocketDevice::at();
	x[0].x_voidp = (void*)new QIODevice::Offset(xret);
    }
    void x_24(xargs *x) {
	// at(QIODevice::Offset)
	bool xret = this->QSocketDevice::at(*(QIODevice::Offset *)x[1].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_25(xargs *x) const {
	// atEnd()
	bool xret = this->QSocketDevice::atEnd();
	x[0].x_bool = (bool)xret;
    }
    void x_26(xargs *x) const {
	// blocking()
	bool xret = this->QSocketDevice::blocking();
	x[0].x_bool = (bool)xret;
    }
    void x_27(xargs *x) {
	// setBlocking(bool)
	this->QSocketDevice::setBlocking((bool)x[1].x_bool);
    }
    void x_28(xargs *x) const {
	// addressReusable()
	bool xret = this->QSocketDevice::addressReusable();
	x[0].x_bool = (bool)xret;
    }
    void x_29(xargs *x) {
	// setAddressReusable(bool)
	this->QSocketDevice::setAddressReusable((bool)x[1].x_bool);
    }
    void x_30(xargs *x) const {
	// receiveBufferSize()
	int xret = this->QSocketDevice::receiveBufferSize();
	x[0].x_int = (int)xret;
    }
    void x_31(xargs *x) {
	// setReceiveBufferSize(uint)
	this->QSocketDevice::setReceiveBufferSize((uint)x[1].x_uint);
    }
    void x_32(xargs *x) const {
	// sendBufferSize()
	int xret = this->QSocketDevice::sendBufferSize();
	x[0].x_int = (int)xret;
    }
    void x_33(xargs *x) {
	// setSendBufferSize(uint)
	this->QSocketDevice::setSendBufferSize((uint)x[1].x_uint);
    }
    void x_34(xargs *x) {
	// connect(const QHostAddress&, Q_UINT16)
	bool xret = this->QSocketDevice::connect(*(const QHostAddress *)x[1].x_voidp,*(Q_UINT16 *)x[2].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_35(xargs *x) {
	// bind(const QHostAddress&, Q_UINT16)
	bool xret = this->QSocketDevice::bind(*(const QHostAddress *)x[1].x_voidp,*(Q_UINT16 *)x[2].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_36(xargs *x) {
	// listen(int)
	bool xret = this->QSocketDevice::listen((int)x[1].x_int);
	x[0].x_bool = (bool)xret;
    }
    void x_37(xargs *x) {
	// accept()
	int xret = this->QSocketDevice::accept();
	x[0].x_int = (int)xret;
    }
    void x_38(xargs *x) const {
	// bytesAvailable()
	Q_LONG xret = this->QSocketDevice::bytesAvailable();
	x[0].x_voidp = (void*)new Q_LONG(xret);
    }
    void x_39(xargs *x) const {
	// waitForMore(int, bool*)
	Q_LONG xret = this->QSocketDevice::waitForMore((int)x[1].x_int,(bool*)x[2].x_voidp);
	x[0].x_voidp = (void*)new Q_LONG(xret);
    }
    void x_40(xargs *x) const {
	// waitForMore(int)
	Q_LONG xret = this->QSocketDevice::waitForMore((int)x[1].x_int);
	x[0].x_voidp = (void*)new Q_LONG(xret);
    }
    void x_41(xargs *x) {
	// readBlock(char*, Q_ULONG)
	Q_LONG xret = this->QSocketDevice::readBlock((char*)x[1].x_voidp,*(Q_ULONG *)x[2].x_voidp);
	x[0].x_voidp = (void*)new Q_LONG(xret);
    }
    void x_42(xargs *x) {
	// writeBlock(const char*, Q_ULONG)
	Q_LONG xret = this->QSocketDevice::writeBlock((const char*)x[1].x_voidp,*(Q_ULONG *)x[2].x_voidp);
	x[0].x_voidp = (void*)new Q_LONG(xret);
    }
    void x_43(xargs *x) {
	// writeBlock(const char*, Q_ULONG, const QHostAddress&, Q_UINT16)
	Q_LONG xret = this->QSocketDevice::writeBlock((const char*)x[1].x_voidp,*(Q_ULONG *)x[2].x_voidp,*(const QHostAddress *)x[3].x_voidp,*(Q_UINT16 *)x[4].x_voidp);
	x[0].x_voidp = (void*)new Q_LONG(xret);
    }
    void x_44(xargs *x) {
	// getch()
	int xret = this->QSocketDevice::getch();
	x[0].x_int = (int)xret;
    }
    void x_45(xargs *x) {
	// putch(int)
	int xret = this->QSocketDevice::putch((int)x[1].x_int);
	x[0].x_int = (int)xret;
    }
    void x_46(xargs *x) {
	// ungetch(int)
	int xret = this->QSocketDevice::ungetch((int)x[1].x_int);
	x[0].x_int = (int)xret;
    }
    void x_47(xargs *x) const {
	// port()
	Q_UINT16 xret = this->QSocketDevice::port();
	x[0].x_voidp = (void*)new Q_UINT16(xret);
    }
    void x_48(xargs *x) const {
	// peerPort()
	Q_UINT16 xret = this->QSocketDevice::peerPort();
	x[0].x_voidp = (void*)new Q_UINT16(xret);
    }
    void x_49(xargs *x) const {
	// address()
	QHostAddress xret = this->QSocketDevice::address();
	x[0].x_voidp = (void*)new QHostAddress(xret);
    }
    void x_50(xargs *x) const {
	// peerAddress()
	QHostAddress xret = this->QSocketDevice::peerAddress();
	x[0].x_voidp = (void*)new QHostAddress(xret);
    }
    void x_51(xargs *x) const {
	// error()
	QSocketDevice::Error xret = this->QSocketDevice::error();
	x[0].x_long = (long)xret;
    }
    void x_52(xargs *x) {
	// setError(QSocketDevice::Error)
	this->QSocketDevice::setError((QSocketDevice::Error)x[1].x_long);
    }
    virtual int accept() {
	xargs x[1];
	if(call_method((void*)this, 7045, x)) return (int)x[0].x_int;
	return this->QSocketDevice::accept();
    }
    virtual QIODevice::Offset at() const {
	xargs x[1];
	if(call_method((void*)this, 7031, x)) {
	    QIODevice::Offset *xptr = (QIODevice::Offset *)x[0].x_voidp;
	    QIODevice::Offset xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSocketDevice::at();
    }
    virtual bool at(QIODevice::Offset x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 7032, x)) return (bool)x[0].x_bool;
	return this->QSocketDevice::at(x1);
    }
    virtual bool atEnd() const {
	xargs x[1];
	if(call_method((void*)this, 7033, x)) return (bool)x[0].x_bool;
	return this->QSocketDevice::atEnd();
    }
    virtual bool bind(const QHostAddress& x1, Q_UINT16 x2) {
	xargs x[3];
	x[1].x_voidp = (void*)&x1;
	x[2].x_voidp = (void*)&x2;
	if(call_method((void*)this, 7043, x)) return (bool)x[0].x_bool;
	return this->QSocketDevice::bind(x1, x2);
    }
    virtual void close() {
	xargs x[1];
	if(call_method((void*)this, 7028, x)) return;
	this->QSocketDevice::close();
    }
    virtual bool connect(const QHostAddress& x1, Q_UINT16 x2) {
	xargs x[3];
	x[1].x_voidp = (void*)&x1;
	x[2].x_voidp = (void*)&x2;
	if(call_method((void*)this, 7042, x)) return (bool)x[0].x_bool;
	return this->QSocketDevice::connect(x1, x2);
    }
    virtual void flush() {
	xargs x[1];
	if(call_method((void*)this, 7029, x)) return;
	this->QSocketDevice::flush();
    }
    virtual int getch() {
	xargs x[1];
	if(call_method((void*)this, 7052, x)) return (int)x[0].x_int;
	return this->QSocketDevice::getch();
    }
    virtual bool listen(int x1) {
	xargs x[2];
	x[1].x_int = (int)x1;
	if(call_method((void*)this, 7044, x)) return (bool)x[0].x_bool;
	return this->QSocketDevice::listen(x1);
    }
    virtual bool open(int x1) {
	xargs x[2];
	x[1].x_int = (int)x1;
	if(call_method((void*)this, 7027, x)) return (bool)x[0].x_bool;
	return this->QSocketDevice::open(x1);
    }
    virtual int putch(int x1) {
	xargs x[2];
	x[1].x_int = (int)x1;
	if(call_method((void*)this, 7053, x)) return (int)x[0].x_int;
	return this->QSocketDevice::putch(x1);
    }
    virtual QByteArray readAll() {
	xargs x[1];
	if(call_method((void*)this, 3398, x)) {
	    QByteArray *xptr = (QByteArray *)x[0].x_voidp;
	    QByteArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QIODevice::readAll();
    }
    virtual Q_LONG readBlock(char* x1, Q_ULONG x2) {
	xargs x[3];
	x[1].x_voidp = (void*)x1;
	x[2].x_voidp = (void*)&x2;
	if(call_method((void*)this, 7049, x)) {
	    Q_LONG *xptr = (Q_LONG *)x[0].x_voidp;
	    Q_LONG xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSocketDevice::readBlock(x1, x2);
    }
    virtual Q_LONG readLine(char* x1, Q_ULONG x2) {
	xargs x[3];
	x[1].x_voidp = (void*)x1;
	x[2].x_voidp = (void*)&x2;
	if(call_method((void*)this, 3396, x)) {
	    Q_LONG *xptr = (Q_LONG *)x[0].x_voidp;
	    Q_LONG xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QIODevice::readLine(x1, x2);
    }
    virtual void setAddressReusable(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 7037, x)) return;
	this->QSocketDevice::setAddressReusable(x1);
    }
    virtual void setBlocking(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 7035, x)) return;
	this->QSocketDevice::setBlocking(x1);
    }
    virtual void setReceiveBufferSize(uint x1) {
	xargs x[2];
	x[1].x_uint = (uint)x1;
	if(call_method((void*)this, 7039, x)) return;
	this->QSocketDevice::setReceiveBufferSize(x1);
    }
    virtual void setSendBufferSize(uint x1) {
	xargs x[2];
	x[1].x_uint = (uint)x1;
	if(call_method((void*)this, 7041, x)) return;
	this->QSocketDevice::setSendBufferSize(x1);
    }
    virtual void setSocket(int x1, QSocketDevice::Type x2) {
	xargs x[3];
	x[1].x_int = (int)x1;
	x[2].x_long = (long)x2;
	if(call_method((void*)this, 7026, x)) return;
	this->QSocketDevice::setSocket(x1, x2);
    }
    virtual QIODevice::Offset size() const {
	xargs x[1];
	if(call_method((void*)this, 7030, x)) {
	    QIODevice::Offset *xptr = (QIODevice::Offset *)x[0].x_voidp;
	    QIODevice::Offset xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSocketDevice::size();
    }
    virtual int ungetch(int x1) {
	xargs x[2];
	x[1].x_int = (int)x1;
	if(call_method((void*)this, 7054, x)) return (int)x[0].x_int;
	return this->QSocketDevice::ungetch(x1);
    }
    virtual Q_LONG writeBlock(const char* x1, Q_ULONG x2) {
	xargs x[3];
	x[1].x_voidp = (void*)x1;
	x[2].x_voidp = (void*)&x2;
	if(call_method((void*)this, 7050, x)) {
	    Q_LONG *xptr = (Q_LONG *)x[0].x_voidp;
	    Q_LONG xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSocketDevice::writeBlock(x1, x2);
    }
    virtual Q_LONG writeBlock(const char* x1, Q_ULONG x2, const QHostAddress& x3, Q_UINT16 x4) {
	xargs x[5];
	x[1].x_voidp = (void*)x1;
	x[2].x_voidp = (void*)&x2;
	x[3].x_voidp = (void*)&x3;
	x[4].x_voidp = (void*)&x4;
	if(call_method((void*)this, 7051, x)) {
	    Q_LONG *xptr = (Q_LONG *)x[0].x_voidp;
	    Q_LONG xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSocketDevice::writeBlock(x1, x2, x3, x4);
    }
    ~x_QSocketDevice() {}
};
void xcall_QSocketDevice(xargs *x, void *s, int xi) {
    x_QSocketDevice *xself = (x_QSocketDevice*)s;
    switch(xi) {
	case 0: x_QSocketDevice::x_0(x);	break;
	case 1: x_QSocketDevice::x_1(x);	break;
	case 2: x_QSocketDevice::x_2(x);	break;
	case 3: x_QSocketDevice::x_3(x);	break;
	case 4: x_QSocketDevice::x_4(x);	break;
	case 5: x_QSocketDevice::x_5(x);	break;
	case 6: x_QSocketDevice::x_6(x);	break;
	case 7: x_QSocketDevice::x_7(x);	break;
	case 8: x_QSocketDevice::x_8(x);	break;
	case 9: x_QSocketDevice::x_9(x);	break;
	case 10: x_QSocketDevice::x_10(x);	break;
	case 11: x_QSocketDevice::x_11(x);	break;
	case 12: x_QSocketDevice::x_12(x);	break;
	case 13: x_QSocketDevice::x_13(x);	break;
	case 14: x_QSocketDevice::x_14(x);	break;
	case 15: xself->x_15(x);	break;
	case 16: xself->x_16(x);	break;
	case 17: xself->x_17(x);	break;
	case 18: xself->x_18(x);	break;
	case 19: xself->x_19(x);	break;
	case 20: xself->x_20(x);	break;
	case 21: xself->x_21(x);	break;
	case 22: xself->x_22(x);	break;
	case 23: xself->x_23(x);	break;
	case 24: xself->x_24(x);	break;
	case 25: xself->x_25(x);	break;
	case 26: xself->x_26(x);	break;
	case 27: xself->x_27(x);	break;
	case 28: xself->x_28(x);	break;
	case 29: xself->x_29(x);	break;
	case 30: xself->x_30(x);	break;
	case 31: xself->x_31(x);	break;
	case 32: xself->x_32(x);	break;
	case 33: xself->x_33(x);	break;
	case 34: xself->x_34(x);	break;
	case 35: xself->x_35(x);	break;
	case 36: xself->x_36(x);	break;
	case 37: xself->x_37(x);	break;
	case 38: xself->x_38(x);	break;
	case 39: xself->x_39(x);	break;
	case 40: xself->x_40(x);	break;
	case 41: xself->x_41(x);	break;
	case 42: xself->x_42(x);	break;
	case 43: xself->x_43(x);	break;
	case 44: xself->x_44(x);	break;
	case 45: xself->x_45(x);	break;
	case 46: xself->x_46(x);	break;
	case 47: xself->x_47(x);	break;
	case 48: xself->x_48(x);	break;
	case 49: xself->x_49(x);	break;
	case 50: xself->x_50(x);	break;
	case 51: xself->x_51(x);	break;
	case 52: xself->x_52(x);	break;
	case 53: delete (QSocketDevice*)xself;	break;
    }
}
