//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qpoint.h>
#include <qcolor.h>
#include <qcursor.h>
#include <qfont.h>
#include <qstring.h>
#include <qsize.h>
#include <qsessionmanager.h>
#include <qvariant.h>
#include <qpalette.h>
#include <qfontmetrics.h>
#include <qstringlist.h>
#include <qapplication.h>
#include <qstyle.h>

class x_QApplication : public QApplication {
public:
    static void x_0(xargs *x) {
	x[0].x_long = (long)QApplication::Tty;
    }
    static void x_1(xargs *x) {
	x[0].x_long = (long)QApplication::GuiClient;
    }
    static void x_2(xargs *x) {
	x[0].x_long = (long)QApplication::GuiServer;
    }
    static void x_3(xargs *x) {
	x[0].x_long = (long)QApplication::NormalColors;
    }
    static void x_4(xargs *x) {
	x[0].x_long = (long)QApplication::CustomColors;
    }
    static void x_5(xargs *x) {
	x[0].x_long = (long)QApplication::NormalColor;
    }
    static void x_6(xargs *x) {
	x[0].x_long = (long)QApplication::CustomColor;
    }
    static void x_7(xargs *x) {
	x[0].x_long = (long)QApplication::ManyColor;
    }
    static void x_8(xargs *x) {
	x[0].x_long = (long)QApplication::DefaultCodec;
    }
    static void x_9(xargs *x) {
	x[0].x_long = (long)QApplication::UnicodeUTF8;
    }
    static void x_10(xargs *x) {
	// QApplication(int&, char**)
	x_QApplication* xret = new x_QApplication(*(int *)x[1].x_voidp,(char**)x[2].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QApplication(int& x1, char** x2) : QApplication(x1, x2) {
    }
    static void x_11(xargs *x) {
	// QApplication(int&, char**, bool)
	x_QApplication* xret = new x_QApplication(*(int *)x[1].x_voidp,(char**)x[2].x_voidp,(bool)x[3].x_bool);
	x[0].x_voidp = (void*)xret;
    }
    x_QApplication(int& x1, char** x2, bool x3) : QApplication(x1, x2, x3) {
    }
    static void x_12(xargs *x) {
	// QApplication(int&, char**, QApplication::Type)
	x_QApplication* xret = new x_QApplication(*(int *)x[1].x_voidp,(char**)x[2].x_voidp,(QApplication::Type)x[3].x_long);
	x[0].x_voidp = (void*)xret;
    }
    x_QApplication(int& x1, char** x2, QApplication::Type x3) : QApplication(x1, x2, x3) {
    }
    void x_13(xargs *x) const {
	// argc()
	int xret = this->QApplication::argc();
	x[0].x_int = (int)xret;
    }
    void x_14(xargs *x) const {
	// argv()
	char** xret = this->QApplication::argv();
	x[0].x_voidp = (void*)xret;
    }
    void x_15(xargs *x) const {
	// type()
	QApplication::Type xret = this->QApplication::type();
	x[0].x_long = (long)xret;
    }
    void x_16(xargs *x) const {
	// mainWidget()
	QWidget* xret = this->QApplication::mainWidget();
	x[0].x_voidp = (void*)xret;
    }
    void x_17(xargs *x) {
	// setMainWidget(QWidget*)
	this->QApplication::setMainWidget((QWidget*)x[1].x_voidp);
    }
    void x_18(xargs *x) {
	// polish(QWidget*)
	this->QApplication::polish((QWidget*)x[1].x_voidp);
    }
    void x_19(xargs *x) const {
	// focusWidget()
	QWidget* xret = this->QApplication::focusWidget();
	x[0].x_voidp = (void*)xret;
    }
    void x_20(xargs *x) const {
	// activeWindow()
	QWidget* xret = this->QApplication::activeWindow();
	x[0].x_voidp = (void*)xret;
    }
    void x_21(xargs *x) {
	// exec()
	int xret = this->QApplication::exec();
	x[0].x_int = (int)xret;
    }
    void x_22(xargs *x) {
	// processEvents()
	this->QApplication::processEvents();
    }
    void x_23(xargs *x) {
	// processEvents(int)
	this->QApplication::processEvents((int)x[1].x_int);
    }
    void x_24(xargs *x) {
	// processOneEvent()
	this->QApplication::processOneEvent();
    }
    void x_25(xargs *x) {
	// hasPendingEvents()
	bool xret = this->QApplication::hasPendingEvents();
	x[0].x_bool = (bool)xret;
    }
    void x_26(xargs *x) {
	// enter_loop()
	int xret = this->QApplication::enter_loop();
	x[0].x_int = (int)xret;
    }
    void x_27(xargs *x) {
	// exit_loop()
	this->QApplication::exit_loop();
    }
    void x_28(xargs *x) const {
	// loopLevel()
	int xret = this->QApplication::loopLevel();
	x[0].x_int = (int)xret;
    }
    void x_29(xargs *x) {
	// notify(QObject*, QEvent*)
	bool xret = this->QApplication::notify((QObject*)x[1].x_voidp,(QEvent*)x[2].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_30(xargs *x) {
	// setDefaultCodec(QTextCodec*)
	this->QApplication::setDefaultCodec((QTextCodec*)x[1].x_voidp);
    }
    void x_31(xargs *x) const {
	// defaultCodec()
	QTextCodec* xret = this->QApplication::defaultCodec();
	x[0].x_voidp = (void*)xret;
    }
    void x_32(xargs *x) {
	// installTranslator(QTranslator*)
	this->QApplication::installTranslator((QTranslator*)x[1].x_voidp);
    }
    void x_33(xargs *x) {
	// removeTranslator(QTranslator*)
	this->QApplication::removeTranslator((QTranslator*)x[1].x_voidp);
    }
    void x_34(xargs *x) const {
	// translate(const char*, const char*, const char*, QApplication::Encoding)
	QString xret = this->QApplication::translate((const char*)x[1].x_voidp,(const char*)x[2].x_voidp,(const char*)x[3].x_voidp,(QApplication::Encoding)x[4].x_long);
	x[0].x_voidp = (void*)new QString(xret);
    }
    void x_35(xargs *x) const {
	// translate(const char*, const char*, const char*)
	QString xret = this->QApplication::translate((const char*)x[1].x_voidp,(const char*)x[2].x_voidp,(const char*)x[3].x_voidp);
	x[0].x_voidp = (void*)new QString(xret);
    }
    void x_36(xargs *x) const {
	// translate(const char*, const char*)
	QString xret = this->QApplication::translate((const char*)x[1].x_voidp,(const char*)x[2].x_voidp);
	x[0].x_voidp = (void*)new QString(xret);
    }
    void x_37(xargs *x) const {
	// isSessionRestored()
	bool xret = this->QApplication::isSessionRestored();
	x[0].x_bool = (bool)xret;
    }
    void x_38(xargs *x) const {
	// sessionId()
	QString xret = this->QApplication::sessionId();
	x[0].x_voidp = (void*)new QString(xret);
    }
    void x_39(xargs *x) {
	// commitData(QSessionManager&)
	this->QApplication::commitData(*(QSessionManager *)x[1].x_voidp);
    }
    void x_40(xargs *x) {
	// saveState(QSessionManager&)
	this->QApplication::saveState(*(QSessionManager *)x[1].x_voidp);
    }
    void x_41(xargs *x) {
	// wakeUpGuiThread()
	this->QApplication::wakeUpGuiThread();
    }
    void x_42(xargs *x) {
	// quit()
	this->QApplication::quit();
    }
    void x_43(xargs *x) {
	// closeAllWindows()
	this->QApplication::closeAllWindows();
    }
    void x_44(xargs *x) {
	// lastWindowClosed()
	this->QApplication::lastWindowClosed();
    }
    void x_45(xargs *x) {
	// aboutToQuit()
	this->QApplication::aboutToQuit();
    }
    void x_46(xargs *x) {
	// guiThreadAwake()
	this->QApplication::guiThreadAwake();
    }
    static void x_47(xargs *x) {
	// style()
	QStyle& xret = QApplication::style();
	x[0].x_voidp = (void*)&xret;
    }
    static void x_48(xargs *x) {
	// setStyle(QStyle*)
	QApplication::setStyle((QStyle*)x[1].x_voidp);
    }
    static void x_49(xargs *x) {
	// setStyle(const QString&)
	QStyle* xret = QApplication::setStyle(*(const QString *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    static void x_50(xargs *x) {
	// colorMode()
	QApplication::ColorMode xret = QApplication::colorMode();
	x[0].x_long = (long)xret;
    }
    static void x_51(xargs *x) {
	// setColorMode(QApplication::ColorMode)
	QApplication::setColorMode((QApplication::ColorMode)x[1].x_long);
    }
    static void x_52(xargs *x) {
	// colorSpec()
	int xret = QApplication::colorSpec();
	x[0].x_int = (int)xret;
    }
    static void x_53(xargs *x) {
	// setColorSpec(int)
	QApplication::setColorSpec((int)x[1].x_int);
    }
    static void x_54(xargs *x) {
	// overrideCursor()
	QCursor* xret = QApplication::overrideCursor();
	x[0].x_voidp = (void*)xret;
    }
    static void x_55(xargs *x) {
	// setOverrideCursor(const QCursor&, bool)
	QApplication::setOverrideCursor(*(const QCursor *)x[1].x_voidp,(bool)x[2].x_bool);
    }
    static void x_56(xargs *x) {
	// setOverrideCursor(const QCursor&)
	QApplication::setOverrideCursor(*(const QCursor *)x[1].x_voidp);
    }
    static void x_57(xargs *x) {
	// restoreOverrideCursor()
	QApplication::restoreOverrideCursor();
    }
    static void x_58(xargs *x) {
	// hasGlobalMouseTracking()
	bool xret = QApplication::hasGlobalMouseTracking();
	x[0].x_bool = (bool)xret;
    }
    static void x_59(xargs *x) {
	// setGlobalMouseTracking(bool)
	QApplication::setGlobalMouseTracking((bool)x[1].x_bool);
    }
    static void x_60(xargs *x) {
	// palette(const QWidget*)
	QPalette xret = QApplication::palette((const QWidget*)x[1].x_voidp);
	x[0].x_voidp = (void*)new QPalette(xret);
    }
    static void x_61(xargs *x) {
	// palette()
	QPalette xret = QApplication::palette();
	x[0].x_voidp = (void*)new QPalette(xret);
    }
    static void x_62(xargs *x) {
	// setPalette(const QPalette&, bool, const char*)
	QApplication::setPalette(*(const QPalette *)x[1].x_voidp,(bool)x[2].x_bool,(const char*)x[3].x_voidp);
    }
    static void x_63(xargs *x) {
	// setPalette(const QPalette&, bool)
	QApplication::setPalette(*(const QPalette *)x[1].x_voidp,(bool)x[2].x_bool);
    }
    static void x_64(xargs *x) {
	// setPalette(const QPalette&)
	QApplication::setPalette(*(const QPalette *)x[1].x_voidp);
    }
    static void x_65(xargs *x) {
	// font(const QWidget*)
	QFont xret = QApplication::font((const QWidget*)x[1].x_voidp);
	x[0].x_voidp = (void*)new QFont(xret);
    }
    static void x_66(xargs *x) {
	// font()
	QFont xret = QApplication::font();
	x[0].x_voidp = (void*)new QFont(xret);
    }
    static void x_67(xargs *x) {
	// setFont(const QFont&, bool, const char*)
	QApplication::setFont(*(const QFont *)x[1].x_voidp,(bool)x[2].x_bool,(const char*)x[3].x_voidp);
    }
    static void x_68(xargs *x) {
	// setFont(const QFont&, bool)
	QApplication::setFont(*(const QFont *)x[1].x_voidp,(bool)x[2].x_bool);
    }
    static void x_69(xargs *x) {
	// setFont(const QFont&)
	QApplication::setFont(*(const QFont *)x[1].x_voidp);
    }
    static void x_70(xargs *x) {
	// fontMetrics()
	QFontMetrics xret = QApplication::fontMetrics();
	x[0].x_voidp = (void*)new QFontMetrics(xret);
    }
    static void x_71(xargs *x) {
	// allWidgets()
	QWidgetList* xret = QApplication::allWidgets();
	x[0].x_voidp = (void*)xret;
    }
    static void x_72(xargs *x) {
	// topLevelWidgets()
	QWidgetList* xret = QApplication::topLevelWidgets();
	x[0].x_voidp = (void*)xret;
    }
    static void x_73(xargs *x) {
	// desktop()
	QDesktopWidget* xret = QApplication::desktop();
	x[0].x_voidp = (void*)xret;
    }
    static void x_74(xargs *x) {
	// activePopupWidget()
	QWidget* xret = QApplication::activePopupWidget();
	x[0].x_voidp = (void*)xret;
    }
    static void x_75(xargs *x) {
	// activeModalWidget()
	QWidget* xret = QApplication::activeModalWidget();
	x[0].x_voidp = (void*)xret;
    }
    static void x_76(xargs *x) {
	// clipboard()
	QClipboard* xret = QApplication::clipboard();
	x[0].x_voidp = (void*)xret;
    }
    static void x_77(xargs *x) {
	// widgetAt(int, int, bool)
	QWidget* xret = QApplication::widgetAt((int)x[1].x_int,(int)x[2].x_int,(bool)x[3].x_bool);
	x[0].x_voidp = (void*)xret;
    }
    static void x_78(xargs *x) {
	// widgetAt(int, int)
	QWidget* xret = QApplication::widgetAt((int)x[1].x_int,(int)x[2].x_int);
	x[0].x_voidp = (void*)xret;
    }
    static void x_79(xargs *x) {
	// widgetAt(const QPoint&, bool)
	QWidget* xret = QApplication::widgetAt(*(const QPoint *)x[1].x_voidp,(bool)x[2].x_bool);
	x[0].x_voidp = (void*)xret;
    }
    static void x_80(xargs *x) {
	// widgetAt(const QPoint&)
	QWidget* xret = QApplication::widgetAt(*(const QPoint *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    static void x_81(xargs *x) {
	// exit(int)
	QApplication::exit((int)x[1].x_int);
    }
    static void x_82(xargs *x) {
	// exit()
	QApplication::exit();
    }
    static void x_83(xargs *x) {
	// sendEvent(QObject*, QEvent*)
	bool xret = QApplication::sendEvent((QObject*)x[1].x_voidp,(QEvent*)x[2].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    static void x_84(xargs *x) {
	// postEvent(QObject*, QEvent*)
	QApplication::postEvent((QObject*)x[1].x_voidp,(QEvent*)x[2].x_voidp);
    }
    static void x_85(xargs *x) {
	// sendPostedEvents(QObject*, int)
	QApplication::sendPostedEvents((QObject*)x[1].x_voidp,(int)x[2].x_int);
    }
    static void x_86(xargs *x) {
	// sendPostedEvents()
	QApplication::sendPostedEvents();
    }
    static void x_87(xargs *x) {
	// removePostedEvents(QObject*)
	QApplication::removePostedEvents((QObject*)x[1].x_voidp);
    }
    static void x_88(xargs *x) {
	// startingUp()
	bool xret = QApplication::startingUp();
	x[0].x_bool = (bool)xret;
    }
    static void x_89(xargs *x) {
	// closingDown()
	bool xret = QApplication::closingDown();
	x[0].x_bool = (bool)xret;
    }
    static void x_90(xargs *x) {
	// flushX()
	QApplication::flushX();
    }
    static void x_91(xargs *x) {
	// flush()
	QApplication::flush();
    }
    static void x_92(xargs *x) {
	// syncX()
	QApplication::syncX();
    }
    static void x_93(xargs *x) {
	// beep()
	QApplication::beep();
    }
    static void x_94(xargs *x) {
	// setWinStyleHighlightColor(const QColor&)
	QApplication::setWinStyleHighlightColor(*(const QColor *)x[1].x_voidp);
    }
    static void x_95(xargs *x) {
	// winStyleHighlightColor()
	const QColor& xret = QApplication::winStyleHighlightColor();
	x[0].x_voidp = (void*)&xret;
    }
    static void x_96(xargs *x) {
	// setDesktopSettingsAware(bool)
	QApplication::setDesktopSettingsAware((bool)x[1].x_bool);
    }
    static void x_97(xargs *x) {
	// desktopSettingsAware()
	bool xret = QApplication::desktopSettingsAware();
	x[0].x_bool = (bool)xret;
    }
    static void x_98(xargs *x) {
	// setCursorFlashTime(int)
	QApplication::setCursorFlashTime((int)x[1].x_int);
    }
    static void x_99(xargs *x) {
	// cursorFlashTime()
	int xret = QApplication::cursorFlashTime();
	x[0].x_int = (int)xret;
    }
    static void x_100(xargs *x) {
	// setDoubleClickInterval(int)
	QApplication::setDoubleClickInterval((int)x[1].x_int);
    }
    static void x_101(xargs *x) {
	// doubleClickInterval()
	int xret = QApplication::doubleClickInterval();
	x[0].x_int = (int)xret;
    }
    static void x_102(xargs *x) {
	// setWheelScrollLines(int)
	QApplication::setWheelScrollLines((int)x[1].x_int);
    }
    static void x_103(xargs *x) {
	// wheelScrollLines()
	int xret = QApplication::wheelScrollLines();
	x[0].x_int = (int)xret;
    }
    static void x_104(xargs *x) {
	// setGlobalStrut(const QSize&)
	QApplication::setGlobalStrut(*(const QSize *)x[1].x_voidp);
    }
    static void x_105(xargs *x) {
	// globalStrut()
	QSize xret = QApplication::globalStrut();
	x[0].x_voidp = (void*)new QSize(xret);
    }
    static void x_106(xargs *x) {
	// setLibraryPaths(const QStringList&)
	QApplication::setLibraryPaths(*(const QStringList *)x[1].x_voidp);
    }
    static void x_107(xargs *x) {
	// libraryPaths()
	QStringList xret = QApplication::libraryPaths();
	x[0].x_voidp = (void*)new QStringList(xret);
    }
    static void x_108(xargs *x) {
	// addLibraryPath(const QString&)
	QApplication::addLibraryPath(*(const QString *)x[1].x_voidp);
    }
    static void x_109(xargs *x) {
	// removeLibraryPath(const QString&)
	QApplication::removeLibraryPath(*(const QString *)x[1].x_voidp);
    }
    static void x_110(xargs *x) {
	// setStartDragTime(int)
	QApplication::setStartDragTime((int)x[1].x_int);
    }
    static void x_111(xargs *x) {
	// startDragTime()
	int xret = QApplication::startDragTime();
	x[0].x_int = (int)xret;
    }
    static void x_112(xargs *x) {
	// setStartDragDistance(int)
	QApplication::setStartDragDistance((int)x[1].x_int);
    }
    static void x_113(xargs *x) {
	// startDragDistance()
	int xret = QApplication::startDragDistance();
	x[0].x_int = (int)xret;
    }
    static void x_114(xargs *x) {
	// setReverseLayout(bool)
	QApplication::setReverseLayout((bool)x[1].x_bool);
    }
    static void x_115(xargs *x) {
	// reverseLayout()
	bool xret = QApplication::reverseLayout();
	x[0].x_bool = (bool)xret;
    }
    static void x_116(xargs *x) {
	// horizontalAlignment(int)
	int xret = QApplication::horizontalAlignment((int)x[1].x_int);
	x[0].x_int = (int)xret;
    }
    static void x_117(xargs *x) {
	// isEffectEnabled(Qt::UIEffect)
	bool xret = QApplication::isEffectEnabled((Qt::UIEffect)x[1].x_long);
	x[0].x_bool = (bool)xret;
    }
    static void x_118(xargs *x) {
	// setEffectEnabled(Qt::UIEffect, bool)
	QApplication::setEffectEnabled((Qt::UIEffect)x[1].x_long,(bool)x[2].x_bool);
    }
    static void x_119(xargs *x) {
	// setEffectEnabled(Qt::UIEffect)
	QApplication::setEffectEnabled((Qt::UIEffect)x[1].x_long);
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
    virtual void commitData(QSessionManager& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 130, x)) return;
	this->QApplication::commitData(x1);
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
	if(call_method((void*)this, 5411, x)) return (bool)x[0].x_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual void insertChild(QObject* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5433, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual bool notify(QObject* x1, QEvent* x2) {
	xargs x[3];
	x[1].x_voidp = (void*)x1;
	x[2].x_voidp = (void*)x2;
	if(call_method((void*)this, 120, x)) return (bool)x[0].x_bool;
	return this->QApplication::notify(x1, x2);
    }
    virtual void polish(QWidget* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 109, x)) return;
	this->QApplication::polish(x1);
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
    virtual void saveState(QSessionManager& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 131, x)) return;
	this->QApplication::saveState(x1);
    }
    virtual void setMainWidget(QWidget* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 108, x)) return;
	this->QApplication::setMainWidget(x1);
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
    virtual void timerEvent(QTimerEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5470, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QApplication() {}
};
void xcall_QApplication(xargs *x, void *s, int xi) {
    x_QApplication *xself = (x_QApplication*)s;
    switch(xi) {
	case 0: x_QApplication::x_0(x);	break;
	case 1: x_QApplication::x_1(x);	break;
	case 2: x_QApplication::x_2(x);	break;
	case 3: x_QApplication::x_3(x);	break;
	case 4: x_QApplication::x_4(x);	break;
	case 5: x_QApplication::x_5(x);	break;
	case 6: x_QApplication::x_6(x);	break;
	case 7: x_QApplication::x_7(x);	break;
	case 8: x_QApplication::x_8(x);	break;
	case 9: x_QApplication::x_9(x);	break;
	case 10: x_QApplication::x_10(x);	break;
	case 11: x_QApplication::x_11(x);	break;
	case 12: x_QApplication::x_12(x);	break;
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
	case 47: x_QApplication::x_47(x);	break;
	case 48: x_QApplication::x_48(x);	break;
	case 49: x_QApplication::x_49(x);	break;
	case 50: x_QApplication::x_50(x);	break;
	case 51: x_QApplication::x_51(x);	break;
	case 52: x_QApplication::x_52(x);	break;
	case 53: x_QApplication::x_53(x);	break;
	case 54: x_QApplication::x_54(x);	break;
	case 55: x_QApplication::x_55(x);	break;
	case 56: x_QApplication::x_56(x);	break;
	case 57: x_QApplication::x_57(x);	break;
	case 58: x_QApplication::x_58(x);	break;
	case 59: x_QApplication::x_59(x);	break;
	case 60: x_QApplication::x_60(x);	break;
	case 61: x_QApplication::x_61(x);	break;
	case 62: x_QApplication::x_62(x);	break;
	case 63: x_QApplication::x_63(x);	break;
	case 64: x_QApplication::x_64(x);	break;
	case 65: x_QApplication::x_65(x);	break;
	case 66: x_QApplication::x_66(x);	break;
	case 67: x_QApplication::x_67(x);	break;
	case 68: x_QApplication::x_68(x);	break;
	case 69: x_QApplication::x_69(x);	break;
	case 70: x_QApplication::x_70(x);	break;
	case 71: x_QApplication::x_71(x);	break;
	case 72: x_QApplication::x_72(x);	break;
	case 73: x_QApplication::x_73(x);	break;
	case 74: x_QApplication::x_74(x);	break;
	case 75: x_QApplication::x_75(x);	break;
	case 76: x_QApplication::x_76(x);	break;
	case 77: x_QApplication::x_77(x);	break;
	case 78: x_QApplication::x_78(x);	break;
	case 79: x_QApplication::x_79(x);	break;
	case 80: x_QApplication::x_80(x);	break;
	case 81: x_QApplication::x_81(x);	break;
	case 82: x_QApplication::x_82(x);	break;
	case 83: x_QApplication::x_83(x);	break;
	case 84: x_QApplication::x_84(x);	break;
	case 85: x_QApplication::x_85(x);	break;
	case 86: x_QApplication::x_86(x);	break;
	case 87: x_QApplication::x_87(x);	break;
	case 88: x_QApplication::x_88(x);	break;
	case 89: x_QApplication::x_89(x);	break;
	case 90: x_QApplication::x_90(x);	break;
	case 91: x_QApplication::x_91(x);	break;
	case 92: x_QApplication::x_92(x);	break;
	case 93: x_QApplication::x_93(x);	break;
	case 94: x_QApplication::x_94(x);	break;
	case 95: x_QApplication::x_95(x);	break;
	case 96: x_QApplication::x_96(x);	break;
	case 97: x_QApplication::x_97(x);	break;
	case 98: x_QApplication::x_98(x);	break;
	case 99: x_QApplication::x_99(x);	break;
	case 100: x_QApplication::x_100(x);	break;
	case 101: x_QApplication::x_101(x);	break;
	case 102: x_QApplication::x_102(x);	break;
	case 103: x_QApplication::x_103(x);	break;
	case 104: x_QApplication::x_104(x);	break;
	case 105: x_QApplication::x_105(x);	break;
	case 106: x_QApplication::x_106(x);	break;
	case 107: x_QApplication::x_107(x);	break;
	case 108: x_QApplication::x_108(x);	break;
	case 109: x_QApplication::x_109(x);	break;
	case 110: x_QApplication::x_110(x);	break;
	case 111: x_QApplication::x_111(x);	break;
	case 112: x_QApplication::x_112(x);	break;
	case 113: x_QApplication::x_113(x);	break;
	case 114: x_QApplication::x_114(x);	break;
	case 115: x_QApplication::x_115(x);	break;
	case 116: x_QApplication::x_116(x);	break;
	case 117: x_QApplication::x_117(x);	break;
	case 118: x_QApplication::x_118(x);	break;
	case 119: x_QApplication::x_119(x);	break;
	case 120: delete (QApplication*)xself;	break;
    }
}
