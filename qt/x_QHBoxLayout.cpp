//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qvariant.h>
#include <qlayout.h>
#include <qrect.h>
#include <qsize.h>

class x_QHBoxLayout : public QHBoxLayout {
public:
    static void x_0(xargs *x) {
	// QHBoxLayout(QWidget*, int, int, const char*)
	x_QHBoxLayout* xret = new x_QHBoxLayout((QWidget*)x[1].x_voidp,(int)x[2].x_int,(int)x[3].x_int,(const char*)x[4].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QHBoxLayout(QWidget* x1, int x2, int x3, const char* x4) : QHBoxLayout(x1, x2, x3, x4) {
    }
    static void x_1(xargs *x) {
	// QHBoxLayout(QWidget*, int, int)
	x_QHBoxLayout* xret = new x_QHBoxLayout((QWidget*)x[1].x_voidp,(int)x[2].x_int,(int)x[3].x_int);
	x[0].x_voidp = (void*)xret;
    }
    x_QHBoxLayout(QWidget* x1, int x2, int x3) : QHBoxLayout(x1, x2, x3) {
    }
    static void x_2(xargs *x) {
	// QHBoxLayout(QWidget*, int)
	x_QHBoxLayout* xret = new x_QHBoxLayout((QWidget*)x[1].x_voidp,(int)x[2].x_int);
	x[0].x_voidp = (void*)xret;
    }
    x_QHBoxLayout(QWidget* x1, int x2) : QHBoxLayout(x1, x2) {
    }
    static void x_3(xargs *x) {
	// QHBoxLayout(QWidget*)
	x_QHBoxLayout* xret = new x_QHBoxLayout((QWidget*)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QHBoxLayout(QWidget* x1) : QHBoxLayout(x1) {
    }
    static void x_4(xargs *x) {
	// QHBoxLayout(QLayout*, int, const char*)
	x_QHBoxLayout* xret = new x_QHBoxLayout((QLayout*)x[1].x_voidp,(int)x[2].x_int,(const char*)x[3].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QHBoxLayout(QLayout* x1, int x2, const char* x3) : QHBoxLayout(x1, x2, x3) {
    }
    static void x_5(xargs *x) {
	// QHBoxLayout(QLayout*, int)
	x_QHBoxLayout* xret = new x_QHBoxLayout((QLayout*)x[1].x_voidp,(int)x[2].x_int);
	x[0].x_voidp = (void*)xret;
    }
    x_QHBoxLayout(QLayout* x1, int x2) : QHBoxLayout(x1, x2) {
    }
    static void x_6(xargs *x) {
	// QHBoxLayout(QLayout*)
	x_QHBoxLayout* xret = new x_QHBoxLayout((QLayout*)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QHBoxLayout(QLayout* x1) : QHBoxLayout(x1) {
    }
    static void x_7(xargs *x) {
	// QHBoxLayout(int, const char*)
	x_QHBoxLayout* xret = new x_QHBoxLayout((int)x[1].x_int,(const char*)x[2].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QHBoxLayout(int x1, const char* x2) : QHBoxLayout(x1, x2) {
    }
    static void x_8(xargs *x) {
	// QHBoxLayout(int)
	x_QHBoxLayout* xret = new x_QHBoxLayout((int)x[1].x_int);
	x[0].x_voidp = (void*)xret;
    }
    x_QHBoxLayout(int x1) : QHBoxLayout(x1) {
    }
    static void x_9(xargs *x) {
	// QHBoxLayout()
	x_QHBoxLayout* xret = new x_QHBoxLayout();
	x[0].x_voidp = (void*)xret;
    }
    x_QHBoxLayout() : QHBoxLayout() {
    }
    virtual void addItem(QLayoutItem* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 278, x)) return;
	this->QBoxLayout::addItem(x1);
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	xargs x[4];
	x[1].x_voidp = (void*)x1;
	x[2].x_voidp = (void*)x2;
	x[3].x_voidp = (void*)x3;
	if(call_method((void*)this, 5475, x)) return (bool)x[0].x_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual void childEvent(QChildEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 4109, x)) return;
	this->QLayout::childEvent(x1);
    }
    virtual void connectNotify(const char* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5473, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void customEvent(QCustomEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5472, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual void disconnectNotify(const char* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5474, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual bool event(QEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5410, x)) return (bool)x[0].x_bool;
	return this->QObject::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	xargs x[3];
	x[1].x_voidp = (void*)x1;
	x[2].x_voidp = (void*)x2;
	if(call_method((void*)this, 4108, x)) return (bool)x[0].x_bool;
	return this->QLayout::eventFilter(x1, x2);
    }
    virtual QSizePolicy::ExpandData expanding() const {
	xargs x[1];
	if(call_method((void*)this, 305, x)) return (QSizePolicy::ExpandData)x[0].x_long;
	return this->QBoxLayout::expanding();
    }
    virtual QRect geometry() const {
	xargs x[1];
	if(call_method((void*)this, 4090, x)) {
	    QRect *xptr = (QRect *)x[0].x_voidp;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QLayout::geometry();
    }
    virtual bool hasHeightForWidth() const {
	xargs x[1];
	if(call_method((void*)this, 303, x)) return (bool)x[0].x_bool;
	return this->QBoxLayout::hasHeightForWidth();
    }
    virtual int heightForWidth(int x1) const {
	xargs x[2];
	x[1].x_int = (int)x1;
	if(call_method((void*)this, 304, x)) return (int)x[0].x_int;
	return this->QBoxLayout::heightForWidth(x1);
    }
    virtual void insertChild(QObject* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5433, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual void invalidate() {
	xargs x[1];
	if(call_method((void*)this, 306, x)) return;
	this->QBoxLayout::invalidate();
    }
    virtual bool isEmpty() const {
	xargs x[1];
	if(call_method((void*)this, 4099, x)) return (bool)x[0].x_bool;
	return this->QLayout::isEmpty();
    }
    virtual QLayoutIterator iterator() {
	xargs x[1];
	if(call_method((void*)this, 307, x)) {
	    QLayoutIterator *xptr = (QLayoutIterator *)x[0].x_voidp;
	    QLayoutIterator xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QBoxLayout::iterator();
    }
    virtual QLayout* layout() {
	xargs x[1];
	if(call_method((void*)this, 4104, x)) 	return (QLayout*)x[0].x_voidp;
	return this->QLayout::layout();
    }
    virtual QSize maximumSize() const {
	xargs x[1];
	if(call_method((void*)this, 302, x)) {
	    QSize *xptr = (QSize *)x[0].x_voidp;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QBoxLayout::maximumSize();
    }
    virtual QSize minimumSize() const {
	xargs x[1];
	if(call_method((void*)this, 301, x)) {
	    QSize *xptr = (QSize *)x[0].x_voidp;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QBoxLayout::minimumSize();
    }
    virtual QVariant property(const char* x1) const {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5447, x)) {
	    QVariant *xptr = (QVariant *)x[0].x_voidp;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QObject::property(x1);
    }
    virtual void removeChild(QObject* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5434, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setAlignment(int x1) {
	xargs x[2];
	x[1].x_int = (int)x1;
	if(call_method((void*)this, 4132, x)) return;
	this->QLayoutItem::setAlignment(x1);
    }
    virtual void setAutoAdd(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 4087, x)) return;
	this->QLayout::setAutoAdd(x1);
    }
    virtual void setGeometry(const QRect& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 308, x)) return;
	this->QBoxLayout::setGeometry(x1);
    }
    virtual void setMargin(int x1) {
	xargs x[2];
	x[1].x_int = (int)x1;
	if(call_method((void*)this, 4076, x)) return;
	this->QLayout::setMargin(x1);
    }
    virtual void setMenuBar(QMenuBar* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 4083, x)) return;
	this->QLayout::setMenuBar(x1);
    }
    virtual void setName(const char* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5416, x)) return;
	this->QObject::setName(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	xargs x[3];
	x[1].x_voidp = (void*)x1;
	x[2].x_voidp = (void*)&x2;
	if(call_method((void*)this, 5446, x)) return (bool)x[0].x_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setSpacing(int x1) {
	xargs x[2];
	x[1].x_int = (int)x1;
	if(call_method((void*)this, 4077, x)) return;
	this->QLayout::setSpacing(x1);
    }
    virtual QSize sizeHint() const {
	xargs x[1];
	if(call_method((void*)this, 300, x)) {
	    QSize *xptr = (QSize *)x[0].x_voidp;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QBoxLayout::sizeHint();
    }
    virtual QSpacerItem* spacerItem() {
	xargs x[1];
	if(call_method((void*)this, 4130, x)) 	return (QSpacerItem*)x[0].x_voidp;
	return this->QLayoutItem::spacerItem();
    }
    virtual void timerEvent(QTimerEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5470, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual QWidget* widget() {
	xargs x[1];
	if(call_method((void*)this, 4127, x)) 	return (QWidget*)x[0].x_voidp;
	return this->QLayoutItem::widget();
    }
    ~x_QHBoxLayout() {}
};
void xcall_QHBoxLayout(xargs *x, void *s, int xi) {
    x_QHBoxLayout *xself = (x_QHBoxLayout*)s;
    switch(xi) {
	case 0: x_QHBoxLayout::x_0(x);	break;
	case 1: x_QHBoxLayout::x_1(x);	break;
	case 2: x_QHBoxLayout::x_2(x);	break;
	case 3: x_QHBoxLayout::x_3(x);	break;
	case 4: x_QHBoxLayout::x_4(x);	break;
	case 5: x_QHBoxLayout::x_5(x);	break;
	case 6: x_QHBoxLayout::x_6(x);	break;
	case 7: x_QHBoxLayout::x_7(x);	break;
	case 8: x_QHBoxLayout::x_8(x);	break;
	case 9: x_QHBoxLayout::x_9(x);	break;
	case 10: delete (QHBoxLayout*)xself;	break;
    }
}
