//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qcursor.h>
#include <qcolor.h>
#include <qstring.h>
#include <qcombobox.h>
#include <qsize.h>
#include <qvariant.h>
#include <qregion.h>
#include <qstringlist.h>
#include <qpoint.h>
#include <qfont.h>
#include <qstrlist.h>
#include <qbitmap.h>
#include <qsizepolicy.h>
#include <qpalette.h>
#include <qnamespace.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qstyle.h>

class x_QComboBox : public QComboBox {
public:
    static void x_0(xargs *x) {
	x[0].x_long = (long)QComboBox::NoInsertion;
    }
    static void x_1(xargs *x) {
	x[0].x_long = (long)QComboBox::AtTop;
    }
    static void x_2(xargs *x) {
	x[0].x_long = (long)QComboBox::AtCurrent;
    }
    static void x_3(xargs *x) {
	x[0].x_long = (long)QComboBox::AtBottom;
    }
    static void x_4(xargs *x) {
	x[0].x_long = (long)QComboBox::AfterCurrent;
    }
    static void x_5(xargs *x) {
	x[0].x_long = (long)QComboBox::BeforeCurrent;
    }
    static void x_6(xargs *x) {
	// QComboBox(QWidget*, const char*)
	x_QComboBox* xret = new x_QComboBox((QWidget*)x[1].x_voidp,(const char*)x[2].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QComboBox(QWidget* x1, const char* x2) : QComboBox(x1, x2) {
    }
    static void x_7(xargs *x) {
	// QComboBox(QWidget*)
	x_QComboBox* xret = new x_QComboBox((QWidget*)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QComboBox(QWidget* x1) : QComboBox(x1) {
    }
    static void x_8(xargs *x) {
	// QComboBox()
	x_QComboBox* xret = new x_QComboBox();
	x[0].x_voidp = (void*)xret;
    }
    x_QComboBox() : QComboBox() {
    }
    static void x_9(xargs *x) {
	// QComboBox(bool, QWidget*, const char*)
	x_QComboBox* xret = new x_QComboBox((bool)x[1].x_bool,(QWidget*)x[2].x_voidp,(const char*)x[3].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QComboBox(bool x1, QWidget* x2, const char* x3) : QComboBox(x1, x2, x3) {
    }
    static void x_10(xargs *x) {
	// QComboBox(bool, QWidget*)
	x_QComboBox* xret = new x_QComboBox((bool)x[1].x_bool,(QWidget*)x[2].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QComboBox(bool x1, QWidget* x2) : QComboBox(x1, x2) {
    }
    static void x_11(xargs *x) {
	// QComboBox(bool)
	x_QComboBox* xret = new x_QComboBox((bool)x[1].x_bool);
	x[0].x_voidp = (void*)xret;
    }
    x_QComboBox(bool x1) : QComboBox(x1) {
    }
    void x_12(xargs *x) const {
	// count()
	int xret = this->QComboBox::count();
	x[0].x_int = (int)xret;
    }
    void x_13(xargs *x) {
	// insertStringList(const QStringList&, int)
	this->QComboBox::insertStringList(*(const QStringList *)x[1].x_voidp,(int)x[2].x_int);
    }
    void x_14(xargs *x) {
	// insertStringList(const QStringList&)
	this->QComboBox::insertStringList(*(const QStringList *)x[1].x_voidp);
    }
    void x_15(xargs *x) {
	// insertStrList(const QStrList&, int)
	this->QComboBox::insertStrList(*(const QStrList *)x[1].x_voidp,(int)x[2].x_int);
    }
    void x_16(xargs *x) {
	// insertStrList(const QStrList&)
	this->QComboBox::insertStrList(*(const QStrList *)x[1].x_voidp);
    }
    void x_17(xargs *x) {
	// insertStrList(const QStrList*, int)
	this->QComboBox::insertStrList((const QStrList*)x[1].x_voidp,(int)x[2].x_int);
    }
    void x_18(xargs *x) {
	// insertStrList(const QStrList*)
	this->QComboBox::insertStrList((const QStrList*)x[1].x_voidp);
    }
    void x_19(xargs *x) {
	// insertStrList(const char**, int, int)
	this->QComboBox::insertStrList((const char**)x[1].x_voidp,(int)x[2].x_int,(int)x[3].x_int);
    }
    void x_20(xargs *x) {
	// insertStrList(const char**, int)
	this->QComboBox::insertStrList((const char**)x[1].x_voidp,(int)x[2].x_int);
    }
    void x_21(xargs *x) {
	// insertStrList(const char**)
	this->QComboBox::insertStrList((const char**)x[1].x_voidp);
    }
    void x_22(xargs *x) {
	// insertItem(const QString&, int)
	this->QComboBox::insertItem(*(const QString *)x[1].x_voidp,(int)x[2].x_int);
    }
    void x_23(xargs *x) {
	// insertItem(const QString&)
	this->QComboBox::insertItem(*(const QString *)x[1].x_voidp);
    }
    void x_24(xargs *x) {
	// insertItem(const QPixmap&, int)
	this->QComboBox::insertItem(*(const QPixmap *)x[1].x_voidp,(int)x[2].x_int);
    }
    void x_25(xargs *x) {
	// insertItem(const QPixmap&)
	this->QComboBox::insertItem(*(const QPixmap *)x[1].x_voidp);
    }
    void x_26(xargs *x) {
	// insertItem(const QPixmap&, const QString&, int)
	this->QComboBox::insertItem(*(const QPixmap *)x[1].x_voidp,*(const QString *)x[2].x_voidp,(int)x[3].x_int);
    }
    void x_27(xargs *x) {
	// insertItem(const QPixmap&, const QString&)
	this->QComboBox::insertItem(*(const QPixmap *)x[1].x_voidp,*(const QString *)x[2].x_voidp);
    }
    void x_28(xargs *x) {
	// removeItem(int)
	this->QComboBox::removeItem((int)x[1].x_int);
    }
    void x_29(xargs *x) const {
	// currentItem()
	int xret = this->QComboBox::currentItem();
	x[0].x_int = (int)xret;
    }
    void x_30(xargs *x) {
	// setCurrentItem(int)
	this->QComboBox::setCurrentItem((int)x[1].x_int);
    }
    void x_31(xargs *x) const {
	// currentText()
	QString xret = this->QComboBox::currentText();
	x[0].x_voidp = (void*)new QString(xret);
    }
    void x_32(xargs *x) {
	// setCurrentText(const QString&)
	this->QComboBox::setCurrentText(*(const QString *)x[1].x_voidp);
    }
    void x_33(xargs *x) const {
	// text(int)
	QString xret = this->QComboBox::text((int)x[1].x_int);
	x[0].x_voidp = (void*)new QString(xret);
    }
    void x_34(xargs *x) const {
	// pixmap(int)
	const QPixmap* xret = this->QComboBox::pixmap((int)x[1].x_int);
	x[0].x_voidp = (void*)xret;
    }
    void x_35(xargs *x) {
	// changeItem(const QString&, int)
	this->QComboBox::changeItem(*(const QString *)x[1].x_voidp,(int)x[2].x_int);
    }
    void x_36(xargs *x) {
	// changeItem(const QPixmap&, int)
	this->QComboBox::changeItem(*(const QPixmap *)x[1].x_voidp,(int)x[2].x_int);
    }
    void x_37(xargs *x) {
	// changeItem(const QPixmap&, const QString&, int)
	this->QComboBox::changeItem(*(const QPixmap *)x[1].x_voidp,*(const QString *)x[2].x_voidp,(int)x[3].x_int);
    }
    void x_38(xargs *x) const {
	// autoResize()
	bool xret = this->QComboBox::autoResize();
	x[0].x_bool = (bool)xret;
    }
    void x_39(xargs *x) {
	// setAutoResize(bool)
	this->QComboBox::setAutoResize((bool)x[1].x_bool);
    }
    void x_40(xargs *x) const {
	// sizeHint()
	QSize xret = this->QComboBox::sizeHint();
	x[0].x_voidp = (void*)new QSize(xret);
    }
    void x_41(xargs *x) {
	// setPalette(const QPalette&)
	this->QComboBox::setPalette(*(const QPalette *)x[1].x_voidp);
    }
    void x_42(xargs *x) {
	// setFont(const QFont&)
	this->QComboBox::setFont(*(const QFont *)x[1].x_voidp);
    }
    void x_43(xargs *x) {
	// setEnabled(bool)
	this->QComboBox::setEnabled((bool)x[1].x_bool);
    }
    void x_44(xargs *x) {
	// setSizeLimit(int)
	this->QComboBox::setSizeLimit((int)x[1].x_int);
    }
    void x_45(xargs *x) const {
	// sizeLimit()
	int xret = this->QComboBox::sizeLimit();
	x[0].x_int = (int)xret;
    }
    void x_46(xargs *x) {
	// setMaxCount(int)
	this->QComboBox::setMaxCount((int)x[1].x_int);
    }
    void x_47(xargs *x) const {
	// maxCount()
	int xret = this->QComboBox::maxCount();
	x[0].x_int = (int)xret;
    }
    void x_48(xargs *x) {
	// setInsertionPolicy(QComboBox::Policy)
	this->QComboBox::setInsertionPolicy((QComboBox::Policy)x[1].x_long);
    }
    void x_49(xargs *x) const {
	// insertionPolicy()
	QComboBox::Policy xret = this->QComboBox::insertionPolicy();
	x[0].x_long = (long)xret;
    }
    void x_50(xargs *x) {
	// setValidator(const QValidator*)
	this->QComboBox::setValidator((const QValidator*)x[1].x_voidp);
    }
    void x_51(xargs *x) const {
	// validator()
	const QValidator* xret = this->QComboBox::validator();
	x[0].x_voidp = (void*)xret;
    }
    void x_52(xargs *x) {
	// setListBox(QListBox*)
	this->QComboBox::setListBox((QListBox*)x[1].x_voidp);
    }
    void x_53(xargs *x) const {
	// listBox()
	QListBox* xret = this->QComboBox::listBox();
	x[0].x_voidp = (void*)xret;
    }
    void x_54(xargs *x) {
	// setLineEdit(QLineEdit*)
	this->QComboBox::setLineEdit((QLineEdit*)x[1].x_voidp);
    }
    void x_55(xargs *x) const {
	// lineEdit()
	QLineEdit* xret = this->QComboBox::lineEdit();
	x[0].x_voidp = (void*)xret;
    }
    void x_56(xargs *x) {
	// setAutoCompletion(bool)
	this->QComboBox::setAutoCompletion((bool)x[1].x_bool);
    }
    void x_57(xargs *x) const {
	// autoCompletion()
	bool xret = this->QComboBox::autoCompletion();
	x[0].x_bool = (bool)xret;
    }
    void x_58(xargs *x) {
	// eventFilter(QObject*, QEvent*)
	bool xret = this->QComboBox::eventFilter((QObject*)x[1].x_voidp,(QEvent*)x[2].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_59(xargs *x) {
	// setDuplicatesEnabled(bool)
	this->QComboBox::setDuplicatesEnabled((bool)x[1].x_bool);
    }
    void x_60(xargs *x) const {
	// duplicatesEnabled()
	bool xret = this->QComboBox::duplicatesEnabled();
	x[0].x_bool = (bool)xret;
    }
    void x_61(xargs *x) const {
	// editable()
	bool xret = this->QComboBox::editable();
	x[0].x_bool = (bool)xret;
    }
    void x_62(xargs *x) {
	// setEditable(bool)
	this->QComboBox::setEditable((bool)x[1].x_bool);
    }
    void x_63(xargs *x) {
	// popup()
	this->QComboBox::popup();
    }
    void x_64(xargs *x) {
	// clear()
	this->QComboBox::clear();
    }
    void x_65(xargs *x) {
	// clearValidator()
	this->QComboBox::clearValidator();
    }
    void x_66(xargs *x) {
	// clearEdit()
	this->QComboBox::clearEdit();
    }
    void x_67(xargs *x) {
	// setEditText(const QString&)
	this->QComboBox::setEditText(*(const QString *)x[1].x_voidp);
    }
    void x_68(xargs *x) {
	// activated(int)
	this->QComboBox::activated((int)x[1].x_int);
    }
    void x_69(xargs *x) {
	// highlighted(int)
	this->QComboBox::highlighted((int)x[1].x_int);
    }
    void x_70(xargs *x) {
	// activated(const QString&)
	this->QComboBox::activated(*(const QString *)x[1].x_voidp);
    }
    void x_71(xargs *x) {
	// highlighted(const QString&)
	this->QComboBox::highlighted(*(const QString *)x[1].x_voidp);
    }
    void x_72(xargs *x) {
	// textChanged(const QString&)
	this->QComboBox::textChanged(*(const QString *)x[1].x_voidp);
    }
    void x_73(xargs *x) {
	// paintEvent(QPaintEvent*)
	this->QComboBox::paintEvent((QPaintEvent*)x[1].x_voidp);
    }
    void x_74(xargs *x) {
	// resizeEvent(QResizeEvent*)
	this->QComboBox::resizeEvent((QResizeEvent*)x[1].x_voidp);
    }
    void x_75(xargs *x) {
	// mousePressEvent(QMouseEvent*)
	this->QComboBox::mousePressEvent((QMouseEvent*)x[1].x_voidp);
    }
    void x_76(xargs *x) {
	// mouseMoveEvent(QMouseEvent*)
	this->QComboBox::mouseMoveEvent((QMouseEvent*)x[1].x_voidp);
    }
    void x_77(xargs *x) {
	// mouseReleaseEvent(QMouseEvent*)
	this->QComboBox::mouseReleaseEvent((QMouseEvent*)x[1].x_voidp);
    }
    void x_78(xargs *x) {
	// mouseDoubleClickEvent(QMouseEvent*)
	this->QComboBox::mouseDoubleClickEvent((QMouseEvent*)x[1].x_voidp);
    }
    void x_79(xargs *x) {
	// keyPressEvent(QKeyEvent*)
	this->QComboBox::keyPressEvent((QKeyEvent*)x[1].x_voidp);
    }
    void x_80(xargs *x) {
	// focusInEvent(QFocusEvent*)
	this->QComboBox::focusInEvent((QFocusEvent*)x[1].x_voidp);
    }
    void x_81(xargs *x) {
	// styleChange(QStyle&)
	this->QComboBox::styleChange(*(QStyle *)x[1].x_voidp);
    }
    void x_82(xargs *x) {
	// updateMask()
	this->QComboBox::updateMask();
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
	if(call_method((void*)this, 1113, x)) return (bool)x[0].x_bool;
	return this->QComboBox::eventFilter(x1, x2);
    }
    virtual void focusInEvent(QFocusEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 1135, x)) return;
	this->QComboBox::focusInEvent(x1);
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
	if(call_method((void*)this, 9707, x)) return;
	this->QWidget::focusOutEvent(x1);
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
	if(call_method((void*)this, 1134, x)) return;
	this->QComboBox::keyPressEvent(x1);
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
	if(call_method((void*)this, 9614, x)) {
	    QSize *xptr = (QSize *)x[0].x_voidp;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidget::minimumSizeHint();
    }
    virtual void mouseDoubleClickEvent(QMouseEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 1133, x)) return;
	this->QComboBox::mouseDoubleClickEvent(x1);
    }
    virtual void mouseMoveEvent(QMouseEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 1131, x)) return;
	this->QComboBox::mouseMoveEvent(x1);
    }
    virtual void mousePressEvent(QMouseEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 1130, x)) return;
	this->QComboBox::mousePressEvent(x1);
    }
    virtual void mouseReleaseEvent(QMouseEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 1132, x)) return;
	this->QComboBox::mouseReleaseEvent(x1);
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
	if(call_method((void*)this, 1128, x)) return;
	this->QComboBox::paintEvent(x1);
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
    virtual void popup() {
	xargs x[1];
	if(call_method((void*)this, 1118, x)) return;
	this->QComboBox::popup();
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
	if(call_method((void*)this, 1129, x)) return;
	this->QComboBox::resizeEvent(x1);
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
    virtual void setAutoCompletion(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 1111, x)) return;
	this->QComboBox::setAutoCompletion(x1);
    }
    virtual void setAutoMask(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 9639, x)) return;
	this->QWidget::setAutoMask(x1);
    }
    virtual void setAutoResize(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 1094, x)) return;
	this->QComboBox::setAutoResize(x1);
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
    virtual void setCurrentItem(int x1) {
	xargs x[2];
	x[1].x_int = (int)x1;
	if(call_method((void*)this, 1085, x)) return;
	this->QComboBox::setCurrentItem(x1);
    }
    virtual void setCurrentText(const QString& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 1087, x)) return;
	this->QComboBox::setCurrentText(x1);
    }
    virtual void setCursor(const QCursor& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9577, x)) return;
	this->QWidget::setCursor(x1);
    }
    virtual void setEditText(const QString& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 1122, x)) return;
	this->QComboBox::setEditText(x1);
    }
    virtual void setEnabled(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 1098, x)) return;
	this->QComboBox::setEnabled(x1);
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
	if(call_method((void*)this, 1097, x)) return;
	this->QComboBox::setFont(x1);
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
    virtual void setInsertionPolicy(QComboBox::Policy x1) {
	xargs x[2];
	x[1].x_long = (long)x1;
	if(call_method((void*)this, 1103, x)) return;
	this->QComboBox::setInsertionPolicy(x1);
    }
    virtual void setKeyCompression(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 9750, x)) return;
	this->QWidget::setKeyCompression(x1);
    }
    virtual void setLineEdit(QLineEdit* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 1109, x)) return;
	this->QComboBox::setLineEdit(x1);
    }
    virtual void setListBox(QListBox* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 1107, x)) return;
	this->QComboBox::setListBox(x1);
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
    virtual void setMaxCount(int x1) {
	xargs x[2];
	x[1].x_int = (int)x1;
	if(call_method((void*)this, 1101, x)) return;
	this->QComboBox::setMaxCount(x1);
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
    virtual void setPalette(const QPalette& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 1096, x)) return;
	this->QComboBox::setPalette(x1);
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
    virtual void setSizeLimit(int x1) {
	xargs x[2];
	x[1].x_int = (int)x1;
	if(call_method((void*)this, 1099, x)) return;
	this->QComboBox::setSizeLimit(x1);
    }
    virtual void setSizePolicy(QSizePolicy x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9616, x)) return;
	this->QWidget::setSizePolicy(x1);
    }
    virtual void setUpdatesEnabled(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 9662, x)) return;
	this->QWidget::setUpdatesEnabled(x1);
    }
    virtual void setValidator(const QValidator* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 1105, x)) return;
	this->QComboBox::setValidator(x1);
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
	if(call_method((void*)this, 1095, x)) {
	    QSize *xptr = (QSize *)x[0].x_voidp;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QComboBox::sizeHint();
    }
    virtual QSizePolicy sizePolicy() const {
	xargs x[1];
	if(call_method((void*)this, 9615, x)) {
	    QSizePolicy *xptr = (QSizePolicy *)x[0].x_voidp;
	    QSizePolicy xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidget::sizePolicy();
    }
    virtual void styleChange(QStyle& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 1136, x)) return;
	this->QComboBox::styleChange(x1);
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
	if(call_method((void*)this, 1137, x)) return;
	this->QComboBox::updateMask();
    }
    virtual void wheelEvent(QWheelEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 9703, x)) return;
	this->QWidget::wheelEvent(x1);
    }
    virtual void windowActivationChange(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 9730, x)) return;
	this->QWidget::windowActivationChange(x1);
    }
    ~x_QComboBox() {}
};
void xcall_QComboBox(xargs *x, void *s, int xi) {
    x_QComboBox *xself = (x_QComboBox*)s;
    switch(xi) {
	case 0: x_QComboBox::x_0(x);	break;
	case 1: x_QComboBox::x_1(x);	break;
	case 2: x_QComboBox::x_2(x);	break;
	case 3: x_QComboBox::x_3(x);	break;
	case 4: x_QComboBox::x_4(x);	break;
	case 5: x_QComboBox::x_5(x);	break;
	case 6: x_QComboBox::x_6(x);	break;
	case 7: x_QComboBox::x_7(x);	break;
	case 8: x_QComboBox::x_8(x);	break;
	case 9: x_QComboBox::x_9(x);	break;
	case 10: x_QComboBox::x_10(x);	break;
	case 11: x_QComboBox::x_11(x);	break;
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
	case 54: xself->x_54(x);	break;
	case 55: xself->x_55(x);	break;
	case 56: xself->x_56(x);	break;
	case 57: xself->x_57(x);	break;
	case 58: xself->x_58(x);	break;
	case 59: xself->x_59(x);	break;
	case 60: xself->x_60(x);	break;
	case 61: xself->x_61(x);	break;
	case 62: xself->x_62(x);	break;
	case 63: xself->x_63(x);	break;
	case 64: xself->x_64(x);	break;
	case 65: xself->x_65(x);	break;
	case 66: xself->x_66(x);	break;
	case 67: xself->x_67(x);	break;
	case 68: xself->x_68(x);	break;
	case 69: xself->x_69(x);	break;
	case 70: xself->x_70(x);	break;
	case 71: xself->x_71(x);	break;
	case 72: xself->x_72(x);	break;
	case 73: xself->x_73(x);	break;
	case 74: xself->x_74(x);	break;
	case 75: xself->x_75(x);	break;
	case 76: xself->x_76(x);	break;
	case 77: xself->x_77(x);	break;
	case 78: xself->x_78(x);	break;
	case 79: xself->x_79(x);	break;
	case 80: xself->x_80(x);	break;
	case 81: xself->x_81(x);	break;
	case 82: xself->x_82(x);	break;
	case 83: delete (QComboBox*)xself;	break;
    }
}
