//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qpoint.h>
#include <qvariant.h>
#include <qsgistyle.h>
#include <qpalette.h>
#include <qstring.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qstyle.h>
#include <qsize.h>

class x_QSGIStyle : public QSGIStyle {
public:
    static void x_0(xargs *x) {
	// QSGIStyle(bool)
	x_QSGIStyle* xret = new x_QSGIStyle((bool)x[1].x_bool);
	x[0].x_voidp = (void*)xret;
    }
    x_QSGIStyle(bool x1) : QSGIStyle(x1) {
    }
    static void x_1(xargs *x) {
	// QSGIStyle()
	x_QSGIStyle* xret = new x_QSGIStyle();
	x[0].x_voidp = (void*)xret;
    }
    x_QSGIStyle() : QSGIStyle() {
    }
    void x_2(xargs *x) {
	// polish(QWidget*)
	this->QSGIStyle::polish((QWidget*)x[1].x_voidp);
    }
    void x_3(xargs *x) {
	// unPolish(QWidget*)
	this->QSGIStyle::unPolish((QWidget*)x[1].x_voidp);
    }
    void x_4(xargs *x) {
	// polish(QApplication*)
	this->QSGIStyle::polish((QApplication*)x[1].x_voidp);
    }
    void x_5(xargs *x) {
	// unPolish(QApplication*)
	this->QSGIStyle::unPolish((QApplication*)x[1].x_voidp);
    }
    void x_6(xargs *x) const {
	// drawPrimitive(QStyle::PrimitiveElement, QPainter*, const QRect&, const QColorGroup&, QStyle::SFlags, const QStyleOption&)
	this->QSGIStyle::drawPrimitive((QStyle::PrimitiveElement)x[1].x_long,(QPainter*)x[2].x_voidp,*(const QRect *)x[3].x_voidp,*(const QColorGroup *)x[4].x_voidp,*(QStyle::SFlags *)x[5].x_voidp,*(const QStyleOption *)x[6].x_voidp);
    }
    void x_7(xargs *x) const {
	// drawPrimitive(QStyle::PrimitiveElement, QPainter*, const QRect&, const QColorGroup&, QStyle::SFlags)
	this->QSGIStyle::drawPrimitive((QStyle::PrimitiveElement)x[1].x_long,(QPainter*)x[2].x_voidp,*(const QRect *)x[3].x_voidp,*(const QColorGroup *)x[4].x_voidp,*(QStyle::SFlags *)x[5].x_voidp);
    }
    void x_8(xargs *x) const {
	// drawPrimitive(QStyle::PrimitiveElement, QPainter*, const QRect&, const QColorGroup&)
	this->QSGIStyle::drawPrimitive((QStyle::PrimitiveElement)x[1].x_long,(QPainter*)x[2].x_voidp,*(const QRect *)x[3].x_voidp,*(const QColorGroup *)x[4].x_voidp);
    }
    void x_9(xargs *x) const {
	// drawControl(QStyle::ControlElement, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags, const QStyleOption&)
	this->QSGIStyle::drawControl((QStyle::ControlElement)x[1].x_long,(QPainter*)x[2].x_voidp,(const QWidget*)x[3].x_voidp,*(const QRect *)x[4].x_voidp,*(const QColorGroup *)x[5].x_voidp,*(QStyle::SFlags *)x[6].x_voidp,*(const QStyleOption *)x[7].x_voidp);
    }
    void x_10(xargs *x) const {
	// drawControl(QStyle::ControlElement, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags)
	this->QSGIStyle::drawControl((QStyle::ControlElement)x[1].x_long,(QPainter*)x[2].x_voidp,(const QWidget*)x[3].x_voidp,*(const QRect *)x[4].x_voidp,*(const QColorGroup *)x[5].x_voidp,*(QStyle::SFlags *)x[6].x_voidp);
    }
    void x_11(xargs *x) const {
	// drawControl(QStyle::ControlElement, QPainter*, const QWidget*, const QRect&, const QColorGroup&)
	this->QSGIStyle::drawControl((QStyle::ControlElement)x[1].x_long,(QPainter*)x[2].x_voidp,(const QWidget*)x[3].x_voidp,*(const QRect *)x[4].x_voidp,*(const QColorGroup *)x[5].x_voidp);
    }
    void x_12(xargs *x) const {
	// drawComplexControl(QStyle::ComplexControl, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags, QStyle::SCFlags, QStyle::SCFlags, const QStyleOption&)
	this->QSGIStyle::drawComplexControl((QStyle::ComplexControl)x[1].x_long,(QPainter*)x[2].x_voidp,(const QWidget*)x[3].x_voidp,*(const QRect *)x[4].x_voidp,*(const QColorGroup *)x[5].x_voidp,*(QStyle::SFlags *)x[6].x_voidp,*(QStyle::SCFlags *)x[7].x_voidp,*(QStyle::SCFlags *)x[8].x_voidp,*(const QStyleOption *)x[9].x_voidp);
    }
    void x_13(xargs *x) const {
	// drawComplexControl(QStyle::ComplexControl, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags, QStyle::SCFlags, QStyle::SCFlags)
	this->QSGIStyle::drawComplexControl((QStyle::ComplexControl)x[1].x_long,(QPainter*)x[2].x_voidp,(const QWidget*)x[3].x_voidp,*(const QRect *)x[4].x_voidp,*(const QColorGroup *)x[5].x_voidp,*(QStyle::SFlags *)x[6].x_voidp,*(QStyle::SCFlags *)x[7].x_voidp,*(QStyle::SCFlags *)x[8].x_voidp);
    }
    void x_14(xargs *x) const {
	// drawComplexControl(QStyle::ComplexControl, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags, QStyle::SCFlags)
	this->QSGIStyle::drawComplexControl((QStyle::ComplexControl)x[1].x_long,(QPainter*)x[2].x_voidp,(const QWidget*)x[3].x_voidp,*(const QRect *)x[4].x_voidp,*(const QColorGroup *)x[5].x_voidp,*(QStyle::SFlags *)x[6].x_voidp,*(QStyle::SCFlags *)x[7].x_voidp);
    }
    void x_15(xargs *x) const {
	// drawComplexControl(QStyle::ComplexControl, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags)
	this->QSGIStyle::drawComplexControl((QStyle::ComplexControl)x[1].x_long,(QPainter*)x[2].x_voidp,(const QWidget*)x[3].x_voidp,*(const QRect *)x[4].x_voidp,*(const QColorGroup *)x[5].x_voidp,*(QStyle::SFlags *)x[6].x_voidp);
    }
    void x_16(xargs *x) const {
	// drawComplexControl(QStyle::ComplexControl, QPainter*, const QWidget*, const QRect&, const QColorGroup&)
	this->QSGIStyle::drawComplexControl((QStyle::ComplexControl)x[1].x_long,(QPainter*)x[2].x_voidp,(const QWidget*)x[3].x_voidp,*(const QRect *)x[4].x_voidp,*(const QColorGroup *)x[5].x_voidp);
    }
    void x_17(xargs *x) const {
	// pixelMetric(QStyle::PixelMetric, const QWidget*)
	int xret = this->QSGIStyle::pixelMetric((QStyle::PixelMetric)x[1].x_long,(const QWidget*)x[2].x_voidp);
	x[0].x_int = (int)xret;
    }
    void x_18(xargs *x) const {
	// pixelMetric(QStyle::PixelMetric)
	int xret = this->QSGIStyle::pixelMetric((QStyle::PixelMetric)x[1].x_long);
	x[0].x_int = (int)xret;
    }
    void x_19(xargs *x) const {
	// sizeFromContents(QStyle::ContentsType, const QWidget*, const QSize&, const QStyleOption&)
	QSize xret = this->QSGIStyle::sizeFromContents((QStyle::ContentsType)x[1].x_long,(const QWidget*)x[2].x_voidp,*(const QSize *)x[3].x_voidp,*(const QStyleOption *)x[4].x_voidp);
	x[0].x_voidp = (void*)new QSize(xret);
    }
    void x_20(xargs *x) const {
	// sizeFromContents(QStyle::ContentsType, const QWidget*, const QSize&)
	QSize xret = this->QSGIStyle::sizeFromContents((QStyle::ContentsType)x[1].x_long,(const QWidget*)x[2].x_voidp,*(const QSize *)x[3].x_voidp);
	x[0].x_voidp = (void*)new QSize(xret);
    }
    void x_21(xargs *x) const {
	// subRect(QStyle::SubRect, const QWidget*)
	QRect xret = this->QSGIStyle::subRect((QStyle::SubRect)x[1].x_long,(const QWidget*)x[2].x_voidp);
	x[0].x_voidp = (void*)new QRect(xret);
    }
    void x_22(xargs *x) const {
	// querySubControlMetrics(QStyle::ComplexControl, const QWidget*, QStyle::SubControl, const QStyleOption&)
	QRect xret = this->QSGIStyle::querySubControlMetrics((QStyle::ComplexControl)x[1].x_long,(const QWidget*)x[2].x_voidp,(QStyle::SubControl)x[3].x_long,*(const QStyleOption *)x[4].x_voidp);
	x[0].x_voidp = (void*)new QRect(xret);
    }
    void x_23(xargs *x) const {
	// querySubControlMetrics(QStyle::ComplexControl, const QWidget*, QStyle::SubControl)
	QRect xret = this->QSGIStyle::querySubControlMetrics((QStyle::ComplexControl)x[1].x_long,(const QWidget*)x[2].x_voidp,(QStyle::SubControl)x[3].x_long);
	x[0].x_voidp = (void*)new QRect(xret);
    }
    void x_24(xargs *x) {
	// eventFilter(QObject*, QEvent*)
	bool xret = this->QSGIStyle::eventFilter((QObject*)x[1].x_voidp,(QEvent*)x[2].x_voidp);
	x[0].x_bool = (bool)xret;
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
	if(call_method((void*)this, 6515, x)) return;
	this->QSGIStyle::drawComplexControl(x1, x2, x3, x4, x5, x6, x7, x8, x9);
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
	if(call_method((void*)this, 6512, x)) return;
	this->QSGIStyle::drawControl(x1, x2, x3, x4, x5, x6, x7);
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
	if(call_method((void*)this, 6509, x)) return;
	this->QSGIStyle::drawPrimitive(x1, x2, x3, x4, x5, x6);
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
	if(call_method((void*)this, 6527, x)) return (bool)x[0].x_bool;
	return this->QSGIStyle::eventFilter(x1, x2);
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
	if(call_method((void*)this, 6520, x)) return (int)x[0].x_int;
	return this->QSGIStyle::pixelMetric(x1, x2);
    }
    virtual void polish(QApplication* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 6507, x)) return;
	this->QSGIStyle::polish(x1);
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
	if(call_method((void*)this, 6505, x)) return;
	this->QSGIStyle::polish(x1);
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
	if(call_method((void*)this, 6525, x)) {
	    QRect *xptr = (QRect *)x[0].x_voidp;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSGIStyle::querySubControlMetrics(x1, x2, x3, x4);
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
	if(call_method((void*)this, 6522, x)) {
	    QSize *xptr = (QSize *)x[0].x_voidp;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSGIStyle::sizeFromContents(x1, x2, x3, x4);
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
	if(call_method((void*)this, 6524, x)) {
	    QRect *xptr = (QRect *)x[0].x_voidp;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSGIStyle::subRect(x1, x2);
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
	if(call_method((void*)this, 6508, x)) return;
	this->QSGIStyle::unPolish(x1);
    }
    virtual void unPolish(QWidget* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 6506, x)) return;
	this->QSGIStyle::unPolish(x1);
    }
    ~x_QSGIStyle() {}
};
void xcall_QSGIStyle(xargs *x, void *s, int xi) {
    x_QSGIStyle *xself = (x_QSGIStyle*)s;
    switch(xi) {
	case 0: x_QSGIStyle::x_0(x);	break;
	case 1: x_QSGIStyle::x_1(x);	break;
	case 2: xself->x_2(x);	break;
	case 3: xself->x_3(x);	break;
	case 4: xself->x_4(x);	break;
	case 5: xself->x_5(x);	break;
	case 6: xself->x_6(x);	break;
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
	case 24: xself->x_24(x);	break;
	case 25: delete (QSGIStyle*)xself;	break;
    }
}
