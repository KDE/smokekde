//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qpoint.h>
#include <qevent.h>
#include <qcstring.h>

class x_QDropEvent : public QDropEvent {
public:
    static void x_0(xargs *x) {
	x[0].x_long = (long)QDropEvent::Copy;
    }
    static void x_1(xargs *x) {
	x[0].x_long = (long)QDropEvent::Link;
    }
    static void x_2(xargs *x) {
	x[0].x_long = (long)QDropEvent::Move;
    }
    static void x_3(xargs *x) {
	x[0].x_long = (long)QDropEvent::Private;
    }
    static void x_4(xargs *x) {
	x[0].x_long = (long)QDropEvent::UserAction;
    }
    static void x_5(xargs *x) {
	// QDropEvent(const QPoint&, QEvent::Type)
	x_QDropEvent* xret = new x_QDropEvent(*(const QPoint *)x[1].x_voidp,(QEvent::Type)x[2].x_long);
	x[0].x_voidp = (void*)xret;
    }
    x_QDropEvent(const QPoint& x1, QEvent::Type x2) : QDropEvent(x1, x2) {
    }
    static void x_6(xargs *x) {
	// QDropEvent(const QPoint&)
	x_QDropEvent* xret = new x_QDropEvent(*(const QPoint *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QDropEvent(const QPoint& x1) : QDropEvent(x1) {
    }
    void x_7(xargs *x) const {
	// pos()
	const QPoint& xret = this->QDropEvent::pos();
	x[0].x_voidp = (void*)&xret;
    }
    void x_8(xargs *x) const {
	// isAccepted()
	bool xret = this->QDropEvent::isAccepted();
	x[0].x_bool = (bool)xret;
    }
    void x_9(xargs *x) {
	// accept(bool)
	this->QDropEvent::accept((bool)x[1].x_bool);
    }
    void x_10(xargs *x) {
	// accept()
	this->QDropEvent::accept();
    }
    void x_11(xargs *x) {
	// ignore()
	this->QDropEvent::ignore();
    }
    void x_12(xargs *x) const {
	// isActionAccepted()
	bool xret = this->QDropEvent::isActionAccepted();
	x[0].x_bool = (bool)xret;
    }
    void x_13(xargs *x) {
	// acceptAction(bool)
	this->QDropEvent::acceptAction((bool)x[1].x_bool);
    }
    void x_14(xargs *x) {
	// acceptAction()
	this->QDropEvent::acceptAction();
    }
    void x_15(xargs *x) {
	// setAction(QDropEvent::Action)
	this->QDropEvent::setAction((QDropEvent::Action)x[1].x_long);
    }
    void x_16(xargs *x) const {
	// action()
	QDropEvent::Action xret = this->QDropEvent::action();
	x[0].x_long = (long)xret;
    }
    void x_17(xargs *x) const {
	// source()
	QWidget* xret = this->QDropEvent::source();
	x[0].x_voidp = (void*)xret;
    }
    void x_18(xargs *x) const {
	// format(int)
	const char* xret = this->QDropEvent::format((int)x[1].x_int);
	x[0].x_voidp = (void*)xret;
    }
    void x_19(xargs *x) const {
	// format()
	const char* xret = this->QDropEvent::format();
	x[0].x_voidp = (void*)xret;
    }
    void x_20(xargs *x) const {
	// encodedData(const char*)
	QByteArray xret = this->QDropEvent::encodedData((const char*)x[1].x_voidp);
	x[0].x_voidp = (void*)new QByteArray(xret);
    }
    void x_21(xargs *x) const {
	// provides(const char*)
	bool xret = this->QDropEvent::provides((const char*)x[1].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_22(xargs *x) const {
	// data(const char*)
	QByteArray xret = this->QDropEvent::data((const char*)x[1].x_voidp);
	x[0].x_voidp = (void*)new QByteArray(xret);
    }
    void x_23(xargs *x) {
	// setPoint(const QPoint&)
	this->QDropEvent::setPoint(*(const QPoint *)x[1].x_voidp);
    }
    virtual QByteArray encodedData(const char* x1) const {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 2341, x)) {
	    QByteArray *xptr = (QByteArray *)x[0].x_voidp;
	    QByteArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDropEvent::encodedData(x1);
    }
    virtual const char* format(int x1) const {
	xargs x[2];
	x[1].x_int = (int)x1;
	if(call_method((void*)this, 2339, x)) 	return (const char*)x[0].x_voidp;
	return this->QDropEvent::format(x1);
    }
    virtual bool provides(const char* x1) const {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 2342, x)) return (bool)x[0].x_bool;
	return this->QDropEvent::provides(x1);
    }
    ~x_QDropEvent() {}
};
void xcall_QDropEvent(xargs *x, void *s, int xi) {
    x_QDropEvent *xself = (x_QDropEvent*)s;
    switch(xi) {
	case 0: x_QDropEvent::x_0(x);	break;
	case 1: x_QDropEvent::x_1(x);	break;
	case 2: x_QDropEvent::x_2(x);	break;
	case 3: x_QDropEvent::x_3(x);	break;
	case 4: x_QDropEvent::x_4(x);	break;
	case 5: x_QDropEvent::x_5(x);	break;
	case 6: x_QDropEvent::x_6(x);	break;
	case 7: xself->x_7(x);	break;
	case 8: xself->x_8(x);	break;
	case 9: xself->x_9(x);	break;
	case 10: xself->x_10(x);	break;
	case 11: xself->x_11(x);	break;
	case 12: xself->x_12(x);	break;
	case 13: xself->x_13(x);	break;
	case 14: xself->x_14(x);	break;
	case 15: xself->x_15(x);	break;
	case 16: xself->x_16(x);	break;
	case 17: xself->x_17(x);	break;
	case 18: xself->x_18(x);	break;
	case 19: xself->x_19(x);	break;
	case 20: xself->x_20(x);	break;
	case 21: xself->x_21(x);	break;
	case 22: xself->x_22(x);	break;
	case 23: xself->x_23(x);	break;
    }
}
