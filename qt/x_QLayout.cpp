//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qvariant.h>
#include <qlayout.h>
#include <qrect.h>
#include <qsize.h>

class x_QLayout : public QLayout {
public:
    static void x_0(xargs *x) {
	x[0].x_long = (long)QLayout::unlimited;
    }
    static void x_1(xargs *x) {
	x[0].x_long = (long)QLayout::FreeResize;
    }
    static void x_2(xargs *x) {
	x[0].x_long = (long)QLayout::Minimum;
    }
    static void x_3(xargs *x) {
	x[0].x_long = (long)QLayout::Fixed;
    }
    static void x_4(xargs *x) {
	// QLayout(QWidget*, int, int, const char*)
	x_QLayout* xret = new x_QLayout((QWidget*)x[1].x_voidp,(int)x[2].x_int,(int)x[3].x_int,(const char*)x[4].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QLayout(QWidget* x1, int x2, int x3, const char* x4) : QLayout(x1, x2, x3, x4) {
    }
    static void x_5(xargs *x) {
	// QLayout(QWidget*, int, int)
	x_QLayout* xret = new x_QLayout((QWidget*)x[1].x_voidp,(int)x[2].x_int,(int)x[3].x_int);
	x[0].x_voidp = (void*)xret;
    }
    x_QLayout(QWidget* x1, int x2, int x3) : QLayout(x1, x2, x3) {
    }
    static void x_6(xargs *x) {
	// QLayout(QWidget*, int)
	x_QLayout* xret = new x_QLayout((QWidget*)x[1].x_voidp,(int)x[2].x_int);
	x[0].x_voidp = (void*)xret;
    }
    x_QLayout(QWidget* x1, int x2) : QLayout(x1, x2) {
    }
    static void x_7(xargs *x) {
	// QLayout(QWidget*)
	x_QLayout* xret = new x_QLayout((QWidget*)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QLayout(QWidget* x1) : QLayout(x1) {
    }
    static void x_8(xargs *x) {
	// QLayout(QLayout*, int, const char*)
	x_QLayout* xret = new x_QLayout((QLayout*)x[1].x_voidp,(int)x[2].x_int,(const char*)x[3].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QLayout(QLayout* x1, int x2, const char* x3) : QLayout(x1, x2, x3) {
    }
    static void x_9(xargs *x) {
	// QLayout(QLayout*, int)
	x_QLayout* xret = new x_QLayout((QLayout*)x[1].x_voidp,(int)x[2].x_int);
	x[0].x_voidp = (void*)xret;
    }
    x_QLayout(QLayout* x1, int x2) : QLayout(x1, x2) {
    }
    static void x_10(xargs *x) {
	// QLayout(QLayout*)
	x_QLayout* xret = new x_QLayout((QLayout*)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QLayout(QLayout* x1) : QLayout(x1) {
    }
    static void x_11(xargs *x) {
	// QLayout(int, const char*)
	x_QLayout* xret = new x_QLayout((int)x[1].x_int,(const char*)x[2].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QLayout(int x1, const char* x2) : QLayout(x1, x2) {
    }
    static void x_12(xargs *x) {
	// QLayout(int)
	x_QLayout* xret = new x_QLayout((int)x[1].x_int);
	x[0].x_voidp = (void*)xret;
    }
    x_QLayout(int x1) : QLayout(x1) {
    }
    static void x_13(xargs *x) {
	// QLayout()
	x_QLayout* xret = new x_QLayout();
	x[0].x_voidp = (void*)xret;
    }
    x_QLayout() : QLayout() {
    }
    void x_14(xargs *x) const {
	// margin()
	int xret = this->QLayout::margin();
	x[0].x_int = (int)xret;
    }
    void x_15(xargs *x) const {
	// spacing()
	int xret = this->QLayout::spacing();
	x[0].x_int = (int)xret;
    }
    void x_16(xargs *x) {
	// setMargin(int)
	this->QLayout::setMargin((int)x[1].x_int);
    }
    void x_17(xargs *x) {
	// setSpacing(int)
	this->QLayout::setSpacing((int)x[1].x_int);
    }
    void x_18(xargs *x) const {
	// defaultBorder()
	int xret = this->QLayout::defaultBorder();
	x[0].x_int = (int)xret;
    }
    void x_19(xargs *x) {
	// freeze(int, int)
	this->QLayout::freeze((int)x[1].x_int,(int)x[2].x_int);
    }
    void x_20(xargs *x) {
	// freeze()
	this->QLayout::freeze();
    }
    void x_21(xargs *x) {
	// setResizeMode(QLayout::ResizeMode)
	this->QLayout::setResizeMode((QLayout::ResizeMode)x[1].x_long);
    }
    void x_22(xargs *x) const {
	// resizeMode()
	QLayout::ResizeMode xret = this->QLayout::resizeMode();
	x[0].x_long = (long)xret;
    }
    void x_23(xargs *x) {
	// setMenuBar(QMenuBar*)
	this->QLayout::setMenuBar((QMenuBar*)x[1].x_voidp);
    }
    void x_24(xargs *x) const {
	// menuBar()
	QMenuBar* xret = this->QLayout::menuBar();
	x[0].x_voidp = (void*)xret;
    }
    void x_25(xargs *x) {
	// mainWidget()
	QWidget* xret = this->QLayout::mainWidget();
	x[0].x_voidp = (void*)xret;
    }
    void x_26(xargs *x) const {
	// isTopLevel()
	bool xret = this->QLayout::isTopLevel();
	x[0].x_bool = (bool)xret;
    }
    void x_27(xargs *x) {
	// setAutoAdd(bool)
	this->QLayout::setAutoAdd((bool)x[1].x_bool);
    }
    void x_28(xargs *x) const {
	// autoAdd()
	bool xret = this->QLayout::autoAdd();
	x[0].x_bool = (bool)xret;
    }
    void x_29(xargs *x) {
	// invalidate()
	this->QLayout::invalidate();
    }
    void x_30(xargs *x) const {
	// geometry()
	QRect xret = this->QLayout::geometry();
	x[0].x_voidp = (void*)new QRect(xret);
    }
    void x_31(xargs *x) {
	// activate()
	bool xret = this->QLayout::activate();
	x[0].x_bool = (bool)xret;
    }
    void x_32(xargs *x) {
	// add(QWidget*)
	this->QLayout::add((QWidget*)x[1].x_voidp);
    }
    void x_33(xargs *x) {
	// addItem(QLayoutItem*)
	this->QLayout::addItem((QLayoutItem*)x[1].x_voidp);
    }
    void x_34(xargs *x) const {
	// expanding()
	QSizePolicy::ExpandData xret = this->QLayout::expanding();
	x[0].x_long = (long)xret;
    }
    void x_35(xargs *x) const {
	// minimumSize()
	QSize xret = this->QLayout::minimumSize();
	x[0].x_voidp = (void*)new QSize(xret);
    }
    void x_36(xargs *x) const {
	// maximumSize()
	QSize xret = this->QLayout::maximumSize();
	x[0].x_voidp = (void*)new QSize(xret);
    }
    void x_37(xargs *x) {
	// setGeometry(const QRect&)
	this->QLayout::setGeometry(*(const QRect *)x[1].x_voidp);
    }
    void x_38(xargs *x) {
	// iterator()
	QLayoutIterator xret = this->QLayout::iterator();
	x[0].x_voidp = (void*)new QLayoutIterator(xret);
    }
    void x_39(xargs *x) const {
	// isEmpty()
	bool xret = this->QLayout::isEmpty();
	x[0].x_bool = (bool)xret;
    }
    void x_40(xargs *x) const {
	// totalHeightForWidth(int)
	int xret = this->QLayout::totalHeightForWidth((int)x[1].x_int);
	x[0].x_int = (int)xret;
    }
    void x_41(xargs *x) const {
	// totalMinimumSize()
	QSize xret = this->QLayout::totalMinimumSize();
	x[0].x_voidp = (void*)new QSize(xret);
    }
    void x_42(xargs *x) const {
	// totalMaximumSize()
	QSize xret = this->QLayout::totalMaximumSize();
	x[0].x_voidp = (void*)new QSize(xret);
    }
    void x_43(xargs *x) const {
	// totalSizeHint()
	QSize xret = this->QLayout::totalSizeHint();
	x[0].x_voidp = (void*)new QSize(xret);
    }
    void x_44(xargs *x) {
	// layout()
	QLayout* xret = this->QLayout::layout();
	x[0].x_voidp = (void*)xret;
    }
    void x_45(xargs *x) const {
	// supportsMargin()
	bool xret = this->QLayout::supportsMargin();
	x[0].x_bool = (bool)xret;
    }
    void x_46(xargs *x) {
	// setEnabled(bool)
	this->QLayout::setEnabled((bool)x[1].x_bool);
    }
    void x_47(xargs *x) const {
	// isEnabled()
	bool xret = this->QLayout::isEnabled();
	x[0].x_bool = (bool)xret;
    }
    void x_48(xargs *x) {
	// eventFilter(QObject*, QEvent*)
	bool xret = this->QLayout::eventFilter((QObject*)x[1].x_voidp,(QEvent*)x[2].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_49(xargs *x) {
	// childEvent(QChildEvent*)
	this->QLayout::childEvent((QChildEvent*)x[1].x_voidp);
    }
    void x_50(xargs *x) {
	// addChildLayout(QLayout*)
	this->QLayout::addChildLayout((QLayout*)x[1].x_voidp);
    }
    void x_51(xargs *x) {
	// deleteAllItems()
	this->QLayout::deleteAllItems();
    }
    void x_52(xargs *x) {
	// setSupportsMargin(bool)
	this->QLayout::setSupportsMargin((bool)x[1].x_bool);
    }
    void x_53(xargs *x) const {
	// alignmentRect(const QRect&)
	QRect xret = this->QLayout::alignmentRect(*(const QRect *)x[1].x_voidp);
	x[0].x_voidp = (void*)new QRect(xret);
    }
    virtual void addItem(QLayoutItem* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	call_method_abstract((void*)this, 4093, x);
	return;
	// ABSTRACT
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
	if(call_method((void*)this, 4094, x)) return (QSizePolicy::ExpandData)x[0].x_long;
	return this->QLayout::expanding();
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
	if(call_method((void*)this, 4124, x)) return (bool)x[0].x_bool;
	return this->QLayoutItem::hasHeightForWidth();
    }
    virtual int heightForWidth(int x1) const {
	xargs x[2];
	x[1].x_int = (int)x1;
	if(call_method((void*)this, 4125, x)) return (int)x[0].x_int;
	return this->QLayoutItem::heightForWidth(x1);
    }
    virtual void insertChild(QObject* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5433, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual void invalidate() {
	xargs x[1];
	if(call_method((void*)this, 4089, x)) return;
	this->QLayout::invalidate();
    }
    virtual bool isEmpty() const {
	xargs x[1];
	if(call_method((void*)this, 4099, x)) return (bool)x[0].x_bool;
	return this->QLayout::isEmpty();
    }
    virtual QLayoutIterator iterator() {
	xargs x[1];
	call_method_abstract((void*)this, 4098, x);
	QLayoutIterator *xptr = (QLayoutIterator *)x[0].x_voidp;
	QLayoutIterator xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual QLayout* layout() {
	xargs x[1];
	if(call_method((void*)this, 4104, x)) 	return (QLayout*)x[0].x_voidp;
	return this->QLayout::layout();
    }
    virtual QSize maximumSize() const {
	xargs x[1];
	if(call_method((void*)this, 4096, x)) {
	    QSize *xptr = (QSize *)x[0].x_voidp;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QLayout::maximumSize();
    }
    virtual QSize minimumSize() const {
	xargs x[1];
	if(call_method((void*)this, 4095, x)) {
	    QSize *xptr = (QSize *)x[0].x_voidp;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QLayout::minimumSize();
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
	call_method_abstract((void*)this, 4097, x);
	return;
	// ABSTRACT
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
	call_method_abstract((void*)this, 4117, x);
	QSize *xptr = (QSize *)x[0].x_voidp;
	QSize xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
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
    ~x_QLayout() {}
};
void xcall_QLayout(xargs *x, void *s, int xi) {
    x_QLayout *xself = (x_QLayout*)s;
    switch(xi) {
	case 0: x_QLayout::x_0(x);	break;
	case 1: x_QLayout::x_1(x);	break;
	case 2: x_QLayout::x_2(x);	break;
	case 3: x_QLayout::x_3(x);	break;
	case 4: x_QLayout::x_4(x);	break;
	case 5: x_QLayout::x_5(x);	break;
	case 6: x_QLayout::x_6(x);	break;
	case 7: x_QLayout::x_7(x);	break;
	case 8: x_QLayout::x_8(x);	break;
	case 9: x_QLayout::x_9(x);	break;
	case 10: x_QLayout::x_10(x);	break;
	case 11: x_QLayout::x_11(x);	break;
	case 12: x_QLayout::x_12(x);	break;
	case 13: x_QLayout::x_13(x);	break;
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
	case 53: xself->x_53(x);	break;
	case 54: delete (QLayout*)xself;	break;
    }
}
