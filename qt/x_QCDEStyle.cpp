//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qpoint.h>
#include <qstring.h>
#include <qcdestyle.h>
#include <qsize.h>
#include <qvariant.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qstyle.h>

class x_QCDEStyle : public QCDEStyle {
public:
    static void x_0(xargs *x) {
	// QCDEStyle(bool)
	x_QCDEStyle* xret = new x_QCDEStyle((bool)x[1].x_bool);
	x[0].x_voidp = (void*)xret;
    }
    x_QCDEStyle(bool x1) : QCDEStyle(x1) {
    }
    static void x_1(xargs *x) {
	// QCDEStyle()
	x_QCDEStyle* xret = new x_QCDEStyle();
	x[0].x_voidp = (void*)xret;
    }
    x_QCDEStyle() : QCDEStyle() {
    }
    void x_2(xargs *x) const {
	// pixelMetric(QStyle::PixelMetric, const QWidget*)
	int xret = this->QCDEStyle::pixelMetric((QStyle::PixelMetric)x[1].x_long,(const QWidget*)x[2].x_voidp);
	x[0].x_int = (int)xret;
    }
    void x_3(xargs *x) const {
	// pixelMetric(QStyle::PixelMetric)
	int xret = this->QCDEStyle::pixelMetric((QStyle::PixelMetric)x[1].x_long);
	x[0].x_int = (int)xret;
    }
    void x_4(xargs *x) const {
	// drawControl(QStyle::ControlElement, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags, const QStyleOption&)
	this->QCDEStyle::drawControl((QStyle::ControlElement)x[1].x_long,(QPainter*)x[2].x_voidp,(const QWidget*)x[3].x_voidp,*(const QRect *)x[4].x_voidp,*(const QColorGroup *)x[5].x_voidp,*(QStyle::SFlags *)x[6].x_voidp,*(const QStyleOption *)x[7].x_voidp);
    }
    void x_5(xargs *x) const {
	// drawControl(QStyle::ControlElement, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags)
	this->QCDEStyle::drawControl((QStyle::ControlElement)x[1].x_long,(QPainter*)x[2].x_voidp,(const QWidget*)x[3].x_voidp,*(const QRect *)x[4].x_voidp,*(const QColorGroup *)x[5].x_voidp,*(QStyle::SFlags *)x[6].x_voidp);
    }
    void x_6(xargs *x) const {
	// drawControl(QStyle::ControlElement, QPainter*, const QWidget*, const QRect&, const QColorGroup&)
	this->QCDEStyle::drawControl((QStyle::ControlElement)x[1].x_long,(QPainter*)x[2].x_voidp,(const QWidget*)x[3].x_voidp,*(const QRect *)x[4].x_voidp,*(const QColorGroup *)x[5].x_voidp);
    }
    void x_7(xargs *x) const {
	// drawPrimitive(QStyle::PrimitiveElement, QPainter*, const QRect&, const QColorGroup&, QStyle::SFlags, const QStyleOption&)
	this->QCDEStyle::drawPrimitive((QStyle::PrimitiveElement)x[1].x_long,(QPainter*)x[2].x_voidp,*(const QRect *)x[3].x_voidp,*(const QColorGroup *)x[4].x_voidp,*(QStyle::SFlags *)x[5].x_voidp,*(const QStyleOption *)x[6].x_voidp);
    }
    void x_8(xargs *x) const {
	// drawPrimitive(QStyle::PrimitiveElement, QPainter*, const QRect&, const QColorGroup&, QStyle::SFlags)
	this->QCDEStyle::drawPrimitive((QStyle::PrimitiveElement)x[1].x_long,(QPainter*)x[2].x_voidp,*(const QRect *)x[3].x_voidp,*(const QColorGroup *)x[4].x_voidp,*(QStyle::SFlags *)x[5].x_voidp);
    }
    void x_9(xargs *x) const {
	// drawPrimitive(QStyle::PrimitiveElement, QPainter*, const QRect&, const QColorGroup&)
	this->QCDEStyle::drawPrimitive((QStyle::PrimitiveElement)x[1].x_long,(QPainter*)x[2].x_voidp,*(const QRect *)x[3].x_voidp,*(const QColorGroup *)x[4].x_voidp);
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
	if(call_method((void*)this, 5471, x)) return;
	this->QObject::childEvent(x1);
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
    virtual void drawComplexControl(QStyle::ComplexControl x1, QPainter* x2, const QWidget* x3, const QRect& x4, const QColorGroup& x5, QStyle::SFlags x6, QStyle::SCFlags x7, QStyle::SCFlags x8, const QStyleOption& x9) const {
	xargs x[10];
	x[1].x_long = (long)x1;
	x[2].x_voidp = (void*)x2;
	x[3].x_voidp = (void*)x3;
	x[4].x_voidp = (void*)&x4;
	x[5].x_voidp = (void*)&x5;
	x[6].x_voidp = (void*)&x6;
	x[7].x_voidp = (void*)&x7;
	x[8].x_voidp = (void*)&x8;
	x[9].x_voidp = (void*)&x9;
	if(call_method((void*)this, 5183, x)) return;
	this->QMotifStyle::drawComplexControl(x1, x2, x3, x4, x5, x6, x7, x8, x9);
    }
    virtual void drawComplexControlMask(QStyle::ComplexControl x1, QPainter* x2, const QWidget* x3, const QRect& x4, const QStyleOption& x5) const {
	xargs x[6];
	x[1].x_long = (long)x1;
	x[2].x_voidp = (void*)x2;
	x[3].x_voidp = (void*)x3;
	x[4].x_voidp = (void*)&x4;
	x[5].x_voidp = (void*)&x5;
	if(call_method((void*)this, 1169, x)) return;
	this->QCommonStyle::drawComplexControlMask(x1, x2, x3, x4, x5);
    }
    virtual void drawControl(QStyle::ControlElement x1, QPainter* x2, const QWidget* x3, const QRect& x4, const QColorGroup& x5, QStyle::SFlags x6, const QStyleOption& x7) const {
	xargs x[8];
	x[1].x_long = (long)x1;
	x[2].x_voidp = (void*)x2;
	x[3].x_voidp = (void*)x3;
	x[4].x_voidp = (void*)&x4;
	x[5].x_voidp = (void*)&x5;
	x[6].x_voidp = (void*)&x6;
	x[7].x_voidp = (void*)&x7;
	if(call_method((void*)this, 435, x)) return;
	this->QCDEStyle::drawControl(x1, x2, x3, x4, x5, x6, x7);
    }
    virtual void drawControlMask(QStyle::ControlElement x1, QPainter* x2, const QWidget* x3, const QRect& x4, const QStyleOption& x5) const {
	xargs x[6];
	x[1].x_long = (long)x1;
	x[2].x_voidp = (void*)x2;
	x[3].x_voidp = (void*)x3;
	x[4].x_voidp = (void*)&x4;
	x[5].x_voidp = (void*)&x5;
	if(call_method((void*)this, 1161, x)) return;
	this->QCommonStyle::drawControlMask(x1, x2, x3, x4, x5);
    }
    virtual void drawItem(QPainter* x1, const QRect& x2, int x3, const QColorGroup& x4, bool x5, const QPixmap* x6, const QString& x7, int x8, const QColor* x9) const {
	xargs x[10];
	x[1].x_voidp = (void*)x1;
	x[2].x_voidp = (void*)&x2;
	x[3].x_int = (int)x3;
	x[4].x_voidp = (void*)&x4;
	x[5].x_bool = (bool)x5;
	x[6].x_voidp = (void*)x6;
	x[7].x_voidp = (void*)&x7;
	x[8].x_int = (int)x8;
	x[9].x_voidp = (void*)x9;
	if(call_method((void*)this, 7876, x)) return;
	this->QStyle::drawItem(x1, x2, x3, x4, x5, x6, x7, x8, x9);
    }
    virtual void drawPrimitive(QStyle::PrimitiveElement x1, QPainter* x2, const QRect& x3, const QColorGroup& x4, QStyle::SFlags x5, const QStyleOption& x6) const {
	xargs x[7];
	x[1].x_long = (long)x1;
	x[2].x_voidp = (void*)x2;
	x[3].x_voidp = (void*)&x3;
	x[4].x_voidp = (void*)&x4;
	x[5].x_voidp = (void*)&x5;
	x[6].x_voidp = (void*)&x6;
	if(call_method((void*)this, 438, x)) return;
	this->QCDEStyle::drawPrimitive(x1, x2, x3, x4, x5, x6);
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
	if(call_method((void*)this, 5411, x)) return (bool)x[0].x_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual void insertChild(QObject* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5433, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual QRect itemRect(QPainter* x1, const QRect& x2, int x3, bool x4, const QPixmap* x5, const QString& x6, int x7) const {
	xargs x[8];
	x[1].x_voidp = (void*)x1;
	x[2].x_voidp = (void*)&x2;
	x[3].x_int = (int)x3;
	x[4].x_bool = (bool)x4;
	x[5].x_voidp = (void*)x5;
	x[6].x_voidp = (void*)&x6;
	x[7].x_int = (int)x7;
	if(call_method((void*)this, 7874, x)) {
	    QRect *xptr = (QRect *)x[0].x_voidp;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QStyle::itemRect(x1, x2, x3, x4, x5, x6, x7);
    }
    virtual int pixelMetric(QStyle::PixelMetric x1, const QWidget* x2) const {
	xargs x[3];
	x[1].x_long = (long)x1;
	x[2].x_voidp = (void*)x2;
	if(call_method((void*)this, 433, x)) return (int)x[0].x_int;
	return this->QCDEStyle::pixelMetric(x1, x2);
    }
    virtual void polish(QApplication* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5175, x)) return;
	this->QMotifStyle::polish(x1);
    }
    virtual void polish(QPalette& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 5173, x)) return;
	this->QMotifStyle::polish(x1);
    }
    virtual void polish(QWidget* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5174, x)) return;
	this->QMotifStyle::polish(x1);
    }
    virtual void polishPopupMenu(QPopupMenu* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5176, x)) return;
	this->QMotifStyle::polishPopupMenu(x1);
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
    virtual QStyle::SubControl querySubControl(QStyle::ComplexControl x1, const QWidget* x2, const QPoint& x3, const QStyleOption& x4) const {
	xargs x[5];
	x[1].x_long = (long)x1;
	x[2].x_voidp = (void*)x2;
	x[3].x_voidp = (void*)&x3;
	x[4].x_voidp = (void*)&x4;
	if(call_method((void*)this, 1173, x)) return (QStyle::SubControl)x[0].x_long;
	return this->QCommonStyle::querySubControl(x1, x2, x3, x4);
    }
    virtual QRect querySubControlMetrics(QStyle::ComplexControl x1, const QWidget* x2, QStyle::SubControl x3, const QStyleOption& x4) const {
	xargs x[5];
	x[1].x_long = (long)x1;
	x[2].x_voidp = (void*)x2;
	x[3].x_long = (long)x3;
	x[4].x_voidp = (void*)&x4;
	if(call_method((void*)this, 5188, x)) {
	    QRect *xptr = (QRect *)x[0].x_voidp;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QMotifStyle::querySubControlMetrics(x1, x2, x3, x4);
    }
    virtual void removeChild(QObject* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5434, x)) return;
	this->QObject::removeChild(x1);
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
    virtual QSize sizeFromContents(QStyle::ContentsType x1, const QWidget* x2, const QSize& x3, const QStyleOption& x4) const {
	xargs x[5];
	x[1].x_long = (long)x1;
	x[2].x_voidp = (void*)x2;
	x[3].x_voidp = (void*)&x3;
	x[4].x_voidp = (void*)&x4;
	if(call_method((void*)this, 5192, x)) {
	    QSize *xptr = (QSize *)x[0].x_voidp;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QMotifStyle::sizeFromContents(x1, x2, x3, x4);
    }
    virtual int styleHint(QStyle::StyleHint x1, const QWidget* x2, const QStyleOption& x3, QStyleHintReturn* x4) const {
	xargs x[5];
	x[1].x_long = (long)x1;
	x[2].x_voidp = (void*)x2;
	x[3].x_voidp = (void*)&x3;
	x[4].x_voidp = (void*)x4;
	if(call_method((void*)this, 5198, x)) return (int)x[0].x_int;
	return this->QMotifStyle::styleHint(x1, x2, x3, x4);
    }
    virtual QPixmap stylePixmap(QStyle::StylePixmap x1, const QWidget* x2, const QStyleOption& x3) const {
	xargs x[4];
	x[1].x_long = (long)x1;
	x[2].x_voidp = (void*)x2;
	x[3].x_voidp = (void*)&x3;
	if(call_method((void*)this, 5195, x)) {
	    QPixmap *xptr = (QPixmap *)x[0].x_voidp;
	    QPixmap xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QMotifStyle::stylePixmap(x1, x2, x3);
    }
    virtual QRect subRect(QStyle::SubRect x1, const QWidget* x2) const {
	xargs x[3];
	x[1].x_long = (long)x1;
	x[2].x_voidp = (void*)x2;
	if(call_method((void*)this, 5194, x)) {
	    QRect *xptr = (QRect *)x[0].x_voidp;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QMotifStyle::subRect(x1, x2);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5470, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual void unPolish(QApplication* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 7871, x)) return;
	this->QStyle::unPolish(x1);
    }
    virtual void unPolish(QWidget* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 7869, x)) return;
	this->QStyle::unPolish(x1);
    }
    ~x_QCDEStyle() {}
};
void xcall_QCDEStyle(xargs *x, void *s, int xi) {
    x_QCDEStyle *xself = (x_QCDEStyle*)s;
    switch(xi) {
	case 0: x_QCDEStyle::x_0(x);	break;
	case 1: x_QCDEStyle::x_1(x);	break;
	case 2: xself->x_2(x);	break;
	case 3: xself->x_3(x);	break;
	case 4: xself->x_4(x);	break;
	case 5: xself->x_5(x);	break;
	case 6: xself->x_6(x);	break;
	case 7: xself->x_7(x);	break;
	case 8: xself->x_8(x);	break;
	case 9: xself->x_9(x);	break;
	case 10: delete (QCDEStyle*)xself;	break;
    }
}
