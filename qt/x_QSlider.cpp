//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qpoint.h>
#include <qvariant.h>
#include <qsizepolicy.h>
#include <qregion.h>
#include <qslider.h>
#include <qcursor.h>
#include <qcolor.h>
#include <qpalette.h>
#include <qstring.h>
#include <qnamespace.h>
#include <qfont.h>
#include <qbitmap.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qstyle.h>
#include <qsize.h>

class x_QSlider : public QSlider {
public:
    static void x_0(xargs *x) {
	x[0].x_long = (long)QSlider::NoMarks;
    }
    static void x_1(xargs *x) {
	x[0].x_long = (long)QSlider::Above;
    }
    static void x_2(xargs *x) {
	x[0].x_long = (long)QSlider::Left;
    }
    static void x_3(xargs *x) {
	x[0].x_long = (long)QSlider::Below;
    }
    static void x_4(xargs *x) {
	x[0].x_long = (long)QSlider::Right;
    }
    static void x_5(xargs *x) {
	x[0].x_long = (long)QSlider::Both;
    }
    static void x_6(xargs *x) {
	// QSlider(QWidget*, const char*)
	x_QSlider* xret = new x_QSlider((QWidget*)x[1].x_voidp,(const char*)x[2].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QSlider(QWidget* x1, const char* x2) : QSlider(x1, x2) {
    }
    static void x_7(xargs *x) {
	// QSlider(QWidget*)
	x_QSlider* xret = new x_QSlider((QWidget*)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QSlider(QWidget* x1) : QSlider(x1) {
    }
    static void x_8(xargs *x) {
	// QSlider(Qt::Orientation, QWidget*, const char*)
	x_QSlider* xret = new x_QSlider((Qt::Orientation)x[1].x_long,(QWidget*)x[2].x_voidp,(const char*)x[3].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QSlider(Qt::Orientation x1, QWidget* x2, const char* x3) : QSlider(x1, x2, x3) {
    }
    static void x_9(xargs *x) {
	// QSlider(Qt::Orientation, QWidget*)
	x_QSlider* xret = new x_QSlider((Qt::Orientation)x[1].x_long,(QWidget*)x[2].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QSlider(Qt::Orientation x1, QWidget* x2) : QSlider(x1, x2) {
    }
    static void x_10(xargs *x) {
	// QSlider(int, int, int, int, Qt::Orientation, QWidget*, const char*)
	x_QSlider* xret = new x_QSlider((int)x[1].x_int,(int)x[2].x_int,(int)x[3].x_int,(int)x[4].x_int,(Qt::Orientation)x[5].x_long,(QWidget*)x[6].x_voidp,(const char*)x[7].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QSlider(int x1, int x2, int x3, int x4, Qt::Orientation x5, QWidget* x6, const char* x7) : QSlider(x1, x2, x3, x4, x5, x6, x7) {
    }
    static void x_11(xargs *x) {
	// QSlider(int, int, int, int, Qt::Orientation, QWidget*)
	x_QSlider* xret = new x_QSlider((int)x[1].x_int,(int)x[2].x_int,(int)x[3].x_int,(int)x[4].x_int,(Qt::Orientation)x[5].x_long,(QWidget*)x[6].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QSlider(int x1, int x2, int x3, int x4, Qt::Orientation x5, QWidget* x6) : QSlider(x1, x2, x3, x4, x5, x6) {
    }
    void x_12(xargs *x) {
	// setOrientation(Qt::Orientation)
	this->QSlider::setOrientation((Qt::Orientation)x[1].x_long);
    }
    void x_13(xargs *x) const {
	// orientation()
	Qt::Orientation xret = this->QSlider::orientation();
	x[0].x_long = (long)xret;
    }
    void x_14(xargs *x) {
	// setTracking(bool)
	this->QSlider::setTracking((bool)x[1].x_bool);
    }
    void x_15(xargs *x) const {
	// tracking()
	bool xret = this->QSlider::tracking();
	x[0].x_bool = (bool)xret;
    }
    void x_16(xargs *x) {
	// setPalette(const QPalette&)
	this->QSlider::setPalette(*(const QPalette *)x[1].x_voidp);
    }
    void x_17(xargs *x) const {
	// sliderStart()
	int xret = this->QSlider::sliderStart();
	x[0].x_int = (int)xret;
    }
    void x_18(xargs *x) const {
	// sliderRect()
	QRect xret = this->QSlider::sliderRect();
	x[0].x_voidp = (void*)new QRect(xret);
    }
    void x_19(xargs *x) const {
	// sizeHint()
	QSize xret = this->QSlider::sizeHint();
	x[0].x_voidp = (void*)new QSize(xret);
    }
    void x_20(xargs *x) const {
	// sizePolicy()
	QSizePolicy xret = this->QSlider::sizePolicy();
	x[0].x_voidp = (void*)new QSizePolicy(xret);
    }
    void x_21(xargs *x) const {
	// minimumSizeHint()
	QSize xret = this->QSlider::minimumSizeHint();
	x[0].x_voidp = (void*)new QSize(xret);
    }
    void x_22(xargs *x) {
	// setTickmarks(QSlider::TickSetting)
	this->QSlider::setTickmarks((QSlider::TickSetting)x[1].x_long);
    }
    void x_23(xargs *x) const {
	// tickmarks()
	QSlider::TickSetting xret = this->QSlider::tickmarks();
	x[0].x_long = (long)xret;
    }
    void x_24(xargs *x) {
	// setTickInterval(int)
	this->QSlider::setTickInterval((int)x[1].x_int);
    }
    void x_25(xargs *x) const {
	// tickInterval()
	int xret = this->QSlider::tickInterval();
	x[0].x_int = (int)xret;
    }
    void x_26(xargs *x) const {
	// minValue()
	int xret = this->QSlider::minValue();
	x[0].x_int = (int)xret;
    }
    void x_27(xargs *x) const {
	// maxValue()
	int xret = this->QSlider::maxValue();
	x[0].x_int = (int)xret;
    }
    void x_28(xargs *x) {
	// setMinValue(int)
	this->QSlider::setMinValue((int)x[1].x_int);
    }
    void x_29(xargs *x) {
	// setMaxValue(int)
	this->QSlider::setMaxValue((int)x[1].x_int);
    }
    void x_30(xargs *x) const {
	// lineStep()
	int xret = this->QSlider::lineStep();
	x[0].x_int = (int)xret;
    }
    void x_31(xargs *x) const {
	// pageStep()
	int xret = this->QSlider::pageStep();
	x[0].x_int = (int)xret;
    }
    void x_32(xargs *x) {
	// setLineStep(int)
	this->QSlider::setLineStep((int)x[1].x_int);
    }
    void x_33(xargs *x) {
	// setPageStep(int)
	this->QSlider::setPageStep((int)x[1].x_int);
    }
    void x_34(xargs *x) const {
	// value()
	int xret = this->QSlider::value();
	x[0].x_int = (int)xret;
    }
    void x_35(xargs *x) {
	// setValue(int)
	this->QSlider::setValue((int)x[1].x_int);
    }
    void x_36(xargs *x) {
	// addStep()
	this->QSlider::addStep();
    }
    void x_37(xargs *x) {
	// subtractStep()
	this->QSlider::subtractStep();
    }
    void x_38(xargs *x) {
	// valueChanged(int)
	this->QSlider::valueChanged((int)x[1].x_int);
    }
    void x_39(xargs *x) {
	// sliderPressed()
	this->QSlider::sliderPressed();
    }
    void x_40(xargs *x) {
	// sliderMoved(int)
	this->QSlider::sliderMoved((int)x[1].x_int);
    }
    void x_41(xargs *x) {
	// sliderReleased()
	this->QSlider::sliderReleased();
    }
    void x_42(xargs *x) {
	// resizeEvent(QResizeEvent*)
	this->QSlider::resizeEvent((QResizeEvent*)x[1].x_voidp);
    }
    void x_43(xargs *x) {
	// paintEvent(QPaintEvent*)
	this->QSlider::paintEvent((QPaintEvent*)x[1].x_voidp);
    }
    void x_44(xargs *x) {
	// keyPressEvent(QKeyEvent*)
	this->QSlider::keyPressEvent((QKeyEvent*)x[1].x_voidp);
    }
    void x_45(xargs *x) {
	// mousePressEvent(QMouseEvent*)
	this->QSlider::mousePressEvent((QMouseEvent*)x[1].x_voidp);
    }
    void x_46(xargs *x) {
	// mouseReleaseEvent(QMouseEvent*)
	this->QSlider::mouseReleaseEvent((QMouseEvent*)x[1].x_voidp);
    }
    void x_47(xargs *x) {
	// mouseMoveEvent(QMouseEvent*)
	this->QSlider::mouseMoveEvent((QMouseEvent*)x[1].x_voidp);
    }
    void x_48(xargs *x) {
	// wheelEvent(QWheelEvent*)
	this->QSlider::wheelEvent((QWheelEvent*)x[1].x_voidp);
    }
    void x_49(xargs *x) {
	// focusInEvent(QFocusEvent*)
	this->QSlider::focusInEvent((QFocusEvent*)x[1].x_voidp);
    }
    void x_50(xargs *x) {
	// focusOutEvent(QFocusEvent*)
	this->QSlider::focusOutEvent((QFocusEvent*)x[1].x_voidp);
    }
    void x_51(xargs *x) {
	// styleChange(QStyle&)
	this->QSlider::styleChange(*(QStyle *)x[1].x_voidp);
    }
    void x_52(xargs *x) {
	// valueChange()
	this->QSlider::valueChange();
    }
    void x_53(xargs *x) {
	// rangeChange()
	this->QSlider::rangeChange();
    }
    virtual void adjustSize() {
	xargs x[1];
	if(call_method((void*)this, 9618, x)) return;
	this->QWidget::adjustSize();
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
    virtual bool close(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 9605, x)) return (bool)x[0].x_bool;
	return this->QWidget::close(x1);
    }
    virtual void closeEvent(QCloseEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 9713, x)) return;
	this->QWidget::closeEvent(x1);
    }
    virtual bool cmd(int x1, QPainter* x2, QPDevCmdParam* x3) {
	xargs x[4];
	x[1].x_int = (int)x1;
	x[2].x_voidp = (void*)x2;
	x[3].x_voidp = (void*)x3;
	if(call_method((void*)this, 5558, x)) return (bool)x[0].x_bool;
	return this->QPaintDevice::cmd(x1, x2, x3);
    }
    virtual void connectNotify(const char* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5473, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void contextMenuEvent(QContextMenuEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 9714, x)) return;
	this->QWidget::contextMenuEvent(x1);
    }
    virtual void create(WId x1, bool x2, bool x3) {
	xargs x[4];
	x[1].x_voidp = (void*)&x1;
	x[2].x_bool = (bool)x2;
	x[3].x_bool = (bool)x3;
	if(call_method((void*)this, 9733, x)) return;
	this->QWidget::create(x1, x2, x3);
    }
    virtual void customEvent(QCustomEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5472, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual bool customWhatsThis() const {
	xargs x[1];
	if(call_method((void*)this, 9643, x)) return (bool)x[0].x_bool;
	return this->QWidget::customWhatsThis();
    }
    virtual void destroy(bool x1, bool x2) {
	xargs x[3];
	x[1].x_bool = (bool)x1;
	x[2].x_bool = (bool)x2;
	if(call_method((void*)this, 9737, x)) return;
	this->QWidget::destroy(x1, x2);
    }
    virtual void disconnectNotify(const char* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5474, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual void dragEnterEvent(QDragEnterEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 9719, x)) return;
	this->QWidget::dragEnterEvent(x1);
    }
    virtual void dragLeaveEvent(QDragLeaveEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 9721, x)) return;
	this->QWidget::dragLeaveEvent(x1);
    }
    virtual void dragMoveEvent(QDragMoveEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 9720, x)) return;
	this->QWidget::dragMoveEvent(x1);
    }
    virtual void dropEvent(QDropEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 9722, x)) return;
	this->QWidget::dropEvent(x1);
    }
    virtual void enabledChange(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 9727, x)) return;
	this->QWidget::enabledChange(x1);
    }
    virtual void enterEvent(QEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 9708, x)) return;
	this->QWidget::enterEvent(x1);
    }
    virtual bool event(QEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 9698, x)) return (bool)x[0].x_bool;
	return this->QWidget::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	xargs x[3];
	x[1].x_voidp = (void*)x1;
	x[2].x_voidp = (void*)x2;
	if(call_method((void*)this, 5411, x)) return (bool)x[0].x_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual void focusInEvent(QFocusEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 6950, x)) return;
	this->QSlider::focusInEvent(x1);
    }
    virtual bool focusNextPrevChild(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 9746, x)) return (bool)x[0].x_bool;
	return this->QWidget::focusNextPrevChild(x1);
    }
    virtual void focusOutEvent(QFocusEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 6951, x)) return;
	this->QSlider::focusOutEvent(x1);
    }
    virtual void fontChange(const QFont& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9729, x)) return;
	this->QWidget::fontChange(x1);
    }
    virtual int fontInf(QFont* x1, int x2) const {
	xargs x[3];
	x[1].x_voidp = (void*)x1;
	x[2].x_int = (int)x2;
	if(call_method((void*)this, 5563, x)) return (int)x[0].x_int;
	return this->QPaintDevice::fontInf(x1, x2);
    }
    virtual int fontMet(QFont* x1, int x2, const char* x3, int x4) const {
	xargs x[5];
	x[1].x_voidp = (void*)x1;
	x[2].x_int = (int)x2;
	x[3].x_voidp = (void*)x3;
	x[4].x_int = (int)x4;
	if(call_method((void*)this, 5560, x)) return (int)x[0].x_int;
	return this->QPaintDevice::fontMet(x1, x2, x3, x4);
    }
    virtual int heightForWidth(int x1) const {
	xargs x[2];
	x[1].x_int = (int)x1;
	if(call_method((void*)this, 9617, x)) return (int)x[0].x_int;
	return this->QWidget::heightForWidth(x1);
    }
    virtual void hide() {
	xargs x[1];
	if(call_method((void*)this, 9675, x)) return;
	this->QWidget::hide();
    }
    virtual void hideEvent(QHideEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 9724, x)) return;
	this->QWidget::hideEvent(x1);
    }
    virtual void imComposeEvent(QIMEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 9716, x)) return;
	this->QWidget::imComposeEvent(x1);
    }
    virtual void imEndEvent(QIMEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 9717, x)) return;
	this->QWidget::imEndEvent(x1);
    }
    virtual void imStartEvent(QIMEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 9715, x)) return;
	this->QWidget::imStartEvent(x1);
    }
    virtual void insertChild(QObject* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5433, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual void keyPressEvent(QKeyEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 6945, x)) return;
	this->QSlider::keyPressEvent(x1);
    }
    virtual void keyReleaseEvent(QKeyEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 9705, x)) return;
	this->QWidget::keyReleaseEvent(x1);
    }
    virtual void leaveEvent(QEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 9709, x)) return;
	this->QWidget::leaveEvent(x1);
    }
    virtual int metric(int x1) const {
	xargs x[2];
	x[1].x_int = (int)x1;
	if(call_method((void*)this, 9731, x)) return (int)x[0].x_int;
	return this->QWidget::metric(x1);
    }
    virtual QSize minimumSizeHint() const {
	xargs x[1];
	if(call_method((void*)this, 6922, x)) {
	    QSize *xptr = (QSize *)x[0].x_voidp;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSlider::minimumSizeHint();
    }
    virtual void mouseDoubleClickEvent(QMouseEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 9701, x)) return;
	this->QWidget::mouseDoubleClickEvent(x1);
    }
    virtual void mouseMoveEvent(QMouseEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 6948, x)) return;
	this->QSlider::mouseMoveEvent(x1);
    }
    virtual void mousePressEvent(QMouseEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 6946, x)) return;
	this->QSlider::mousePressEvent(x1);
    }
    virtual void mouseReleaseEvent(QMouseEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 6947, x)) return;
	this->QSlider::mouseReleaseEvent(x1);
    }
    virtual void move(int x1, int x2) {
	xargs x[3];
	x[1].x_int = (int)x1;
	x[2].x_int = (int)x2;
	if(call_method((void*)this, 9687, x)) return;
	this->QWidget::move(x1, x2);
    }
    virtual void moveEvent(QMoveEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 9711, x)) return;
	this->QWidget::moveEvent(x1);
    }
    virtual void paintEvent(QPaintEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 6944, x)) return;
	this->QSlider::paintEvent(x1);
    }
    virtual void paletteChange(const QPalette& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9728, x)) return;
	this->QWidget::paletteChange(x1);
    }
    virtual void polish() {
	xargs x[1];
	if(call_method((void*)this, 9681, x)) return;
	this->QWidget::polish();
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
    virtual void rangeChange() {
	xargs x[1];
	if(call_method((void*)this, 6954, x)) return;
	this->QSlider::rangeChange();
    }
    virtual void removeChild(QObject* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5434, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void reparent(QWidget* x1, Qt::WFlags x2, const QPoint& x3, bool x4) {
	xargs x[5];
	x[1].x_voidp = (void*)x1;
	x[2].x_voidp = (void*)&x2;
	x[3].x_voidp = (void*)&x3;
	x[4].x_bool = (bool)x4;
	if(call_method((void*)this, 9621, x)) return;
	this->QWidget::reparent(x1, x2, x3, x4);
    }
    virtual void resize(int x1, int x2) {
	xargs x[3];
	x[1].x_int = (int)x1;
	x[2].x_int = (int)x2;
	if(call_method((void*)this, 9689, x)) return;
	this->QWidget::resize(x1, x2);
    }
    virtual void resizeEvent(QResizeEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 6943, x)) return;
	this->QSlider::resizeEvent(x1);
    }
    virtual int resolution() const {
	xargs x[1];
	if(call_method((void*)this, 5556, x)) return (int)x[0].x_int;
	return this->QPaintDevice::resolution();
    }
    virtual void setAcceptDrops(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 9638, x)) return;
	this->QWidget::setAcceptDrops(x1);
    }
    virtual void setActiveWindow() {
	xargs x[1];
	if(call_method((void*)this, 9592, x)) return;
	this->QWidget::setActiveWindow();
    }
    virtual void setAutoMask(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 9639, x)) return;
	this->QWidget::setAutoMask(x1);
    }
    virtual void setBackgroundColor(const QColor& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9588, x)) return;
	this->QWidget::setBackgroundColor(x1);
    }
    virtual void setBackgroundMode(Qt::BackgroundMode x1) {
	xargs x[2];
	x[1].x_long = (long)x1;
	if(call_method((void*)this, 9550, x)) return;
	this->QWidget::setBackgroundMode(x1);
    }
    virtual void setBackgroundOrigin(QWidget::BackgroundOrigin x1) {
	xargs x[2];
	x[1].x_long = (long)x1;
	if(call_method((void*)this, 9641, x)) return;
	this->QWidget::setBackgroundOrigin(x1);
    }
    virtual void setBackgroundPixmap(const QPixmap& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9590, x)) return;
	this->QWidget::setBackgroundPixmap(x1);
    }
    virtual void setCaption(const QString& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9656, x)) return;
	this->QWidget::setCaption(x1);
    }
    virtual void setCursor(const QCursor& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9577, x)) return;
	this->QWidget::setCursor(x1);
    }
    virtual void setEnabled(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 9654, x)) return;
	this->QWidget::setEnabled(x1);
    }
    virtual void setEraseColor(const QColor& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9554, x)) return;
	this->QWidget::setEraseColor(x1);
    }
    virtual void setErasePixmap(const QPixmap& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9556, x)) return;
	this->QWidget::setErasePixmap(x1);
    }
    virtual void setFocus() {
	xargs x[1];
	if(call_method((void*)this, 9660, x)) return;
	this->QWidget::setFocus();
    }
    virtual void setFocusPolicy(QWidget::FocusPolicy x1) {
	xargs x[2];
	x[1].x_long = (long)x1;
	if(call_method((void*)this, 9595, x)) return;
	this->QWidget::setFocusPolicy(x1);
    }
    virtual void setFocusProxy(QWidget* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 9597, x)) return;
	this->QWidget::setFocusProxy(x1);
    }
    virtual void setFont(const QFont& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9571, x)) return;
	this->QWidget::setFont(x1);
    }
    virtual void setGeometry(const QRect& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9692, x)) return;
	this->QWidget::setGeometry(x1);
    }
    virtual void setGeometry(int x1, int x2, int x3, int x4) {
	xargs x[5];
	x[1].x_int = (int)x1;
	x[2].x_int = (int)x2;
	x[3].x_int = (int)x3;
	x[4].x_int = (int)x4;
	if(call_method((void*)this, 9691, x)) return;
	this->QWidget::setGeometry(x1, x2, x3, x4);
    }
    virtual void setIcon(const QPixmap& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9657, x)) return;
	this->QWidget::setIcon(x1);
    }
    virtual void setIconText(const QString& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9658, x)) return;
	this->QWidget::setIconText(x1);
    }
    virtual void setKeyCompression(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 9750, x)) return;
	this->QWidget::setKeyCompression(x1);
    }
    virtual void setMask(const QBitmap& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9584, x)) return;
	this->QWidget::setMask(x1);
    }
    virtual void setMask(const QRegion& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9585, x)) return;
	this->QWidget::setMask(x1);
    }
    virtual void setMaximumSize(int x1, int x2) {
	xargs x[3];
	x[1].x_int = (int)x1;
	x[2].x_int = (int)x2;
	if(call_method((void*)this, 9527, x)) return;
	this->QWidget::setMaximumSize(x1, x2);
    }
    virtual void setMicroFocusHint(int x1, int x2, int x3, int x4, bool x5, QFont* x6) {
	xargs x[7];
	x[1].x_int = (int)x1;
	x[2].x_int = (int)x2;
	x[3].x_int = (int)x3;
	x[4].x_int = (int)x4;
	x[5].x_bool = (bool)x5;
	x[6].x_voidp = (void*)x6;
	if(call_method((void*)this, 9751, x)) return;
	this->QWidget::setMicroFocusHint(x1, x2, x3, x4, x5, x6);
    }
    virtual void setMinimumSize(int x1, int x2) {
	xargs x[3];
	x[1].x_int = (int)x1;
	x[2].x_int = (int)x2;
	if(call_method((void*)this, 9525, x)) return;
	this->QWidget::setMinimumSize(x1, x2);
    }
    virtual void setMouseTracking(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 9659, x)) return;
	this->QWidget::setMouseTracking(x1);
    }
    virtual void setName(const char* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 9494, x)) return;
	this->QWidget::setName(x1);
    }
    virtual void setOrientation(Qt::Orientation x1) {
	xargs x[2];
	x[1].x_long = (long)x1;
	if(call_method((void*)this, 6913, x)) return;
	this->QSlider::setOrientation(x1);
    }
    virtual void setPalette(const QPalette& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 6917, x)) return;
	this->QSlider::setPalette(x1);
    }
    virtual void setPaletteBackgroundColor(const QColor& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9565, x)) return;
	this->QWidget::setPaletteBackgroundColor(x1);
    }
    virtual void setPaletteBackgroundPixmap(const QPixmap& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9567, x)) return;
	this->QWidget::setPaletteBackgroundPixmap(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	xargs x[3];
	x[1].x_voidp = (void*)x1;
	x[2].x_voidp = (void*)&x2;
	if(call_method((void*)this, 5446, x)) return (bool)x[0].x_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setResolution(int x1) {
	xargs x[2];
	x[1].x_int = (int)x1;
	if(call_method((void*)this, 5555, x)) return;
	this->QPaintDevice::setResolution(x1);
    }
    virtual void setSizeIncrement(int x1, int x2) {
	xargs x[3];
	x[1].x_int = (int)x1;
	x[2].x_int = (int)x2;
	if(call_method((void*)this, 9534, x)) return;
	this->QWidget::setSizeIncrement(x1, x2);
    }
    virtual void setSizePolicy(QSizePolicy x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9616, x)) return;
	this->QWidget::setSizePolicy(x1);
    }
    virtual void setTickInterval(int x1) {
	xargs x[2];
	x[1].x_int = (int)x1;
	if(call_method((void*)this, 6925, x)) return;
	this->QSlider::setTickInterval(x1);
    }
    virtual void setTickmarks(QSlider::TickSetting x1) {
	xargs x[2];
	x[1].x_long = (long)x1;
	if(call_method((void*)this, 6923, x)) return;
	this->QSlider::setTickmarks(x1);
    }
    virtual void setTracking(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 6915, x)) return;
	this->QSlider::setTracking(x1);
    }
    virtual void setUpdatesEnabled(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 9662, x)) return;
	this->QWidget::setUpdatesEnabled(x1);
    }
    virtual void setValue(int x1) {
	xargs x[2];
	x[1].x_int = (int)x1;
	if(call_method((void*)this, 6936, x)) return;
	this->QSlider::setValue(x1);
    }
    virtual void setWFlags(Qt::WFlags x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9744, x)) return;
	this->QWidget::setWFlags(x1);
    }
    virtual void setWState(uint x1) {
	xargs x[2];
	x[1].x_uint = (uint)x1;
	if(call_method((void*)this, 9741, x)) return;
	this->QWidget::setWState(x1);
    }
    virtual void show() {
	xargs x[1];
	if(call_method((void*)this, 9674, x)) return;
	this->QWidget::show();
    }
    virtual void showEvent(QShowEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 9723, x)) return;
	this->QWidget::showEvent(x1);
    }
    virtual void showMaximized() {
	xargs x[1];
	if(call_method((void*)this, 9678, x)) return;
	this->QWidget::showMaximized();
    }
    virtual void showMinimized() {
	xargs x[1];
	if(call_method((void*)this, 9677, x)) return;
	this->QWidget::showMinimized();
    }
    virtual void showNormal() {
	xargs x[1];
	if(call_method((void*)this, 9680, x)) return;
	this->QWidget::showNormal();
    }
    virtual QSize sizeHint() const {
	xargs x[1];
	if(call_method((void*)this, 6920, x)) {
	    QSize *xptr = (QSize *)x[0].x_voidp;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSlider::sizeHint();
    }
    virtual QSizePolicy sizePolicy() const {
	xargs x[1];
	if(call_method((void*)this, 6921, x)) {
	    QSizePolicy *xptr = (QSizePolicy *)x[0].x_voidp;
	    QSizePolicy xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSlider::sizePolicy();
    }
    virtual void stepChange() {
	xargs x[1];
	if(call_method((void*)this, 6360, x)) return;
	this->QRangeControl::stepChange();
    }
    virtual void styleChange(QStyle& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 6952, x)) return;
	this->QSlider::styleChange(x1);
    }
    virtual void tabletEvent(QTabletEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 9718, x)) return;
	this->QWidget::tabletEvent(x1);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5470, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual void unsetCursor() {
	xargs x[1];
	if(call_method((void*)this, 9578, x)) return;
	this->QWidget::unsetCursor();
    }
    virtual void updateMask() {
	xargs x[1];
	if(call_method((void*)this, 9725, x)) return;
	this->QWidget::updateMask();
    }
    virtual void valueChange() {
	xargs x[1];
	if(call_method((void*)this, 6953, x)) return;
	this->QSlider::valueChange();
    }
    virtual void wheelEvent(QWheelEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 6949, x)) return;
	this->QSlider::wheelEvent(x1);
    }
    virtual void windowActivationChange(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 9730, x)) return;
	this->QWidget::windowActivationChange(x1);
    }
    ~x_QSlider() {}
};
void xcall_QSlider(xargs *x, void *s, int xi) {
    x_QSlider *xself = (x_QSlider*)s;
    switch(xi) {
	case 0: x_QSlider::x_0(x);	break;
	case 1: x_QSlider::x_1(x);	break;
	case 2: x_QSlider::x_2(x);	break;
	case 3: x_QSlider::x_3(x);	break;
	case 4: x_QSlider::x_4(x);	break;
	case 5: x_QSlider::x_5(x);	break;
	case 6: x_QSlider::x_6(x);	break;
	case 7: x_QSlider::x_7(x);	break;
	case 8: x_QSlider::x_8(x);	break;
	case 9: x_QSlider::x_9(x);	break;
	case 10: x_QSlider::x_10(x);	break;
	case 11: x_QSlider::x_11(x);	break;
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
    }
}
