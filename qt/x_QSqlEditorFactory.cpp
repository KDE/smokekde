//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qvariant.h>
#include <qsqleditorfactory.h>

class x_QSqlEditorFactory : public QSqlEditorFactory {
public:
    static void x_0(xargs *x) {
	// QSqlEditorFactory(QObject*, const char*)
	x_QSqlEditorFactory* xret = new x_QSqlEditorFactory((QObject*)x[1].x_voidp,(const char*)x[2].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QSqlEditorFactory(QObject* x1, const char* x2) : QSqlEditorFactory(x1, x2) {
    }
    static void x_1(xargs *x) {
	// QSqlEditorFactory(QObject*)
	x_QSqlEditorFactory* xret = new x_QSqlEditorFactory((QObject*)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QSqlEditorFactory(QObject* x1) : QSqlEditorFactory(x1) {
    }
    static void x_2(xargs *x) {
	// QSqlEditorFactory()
	x_QSqlEditorFactory* xret = new x_QSqlEditorFactory();
	x[0].x_voidp = (void*)xret;
    }
    x_QSqlEditorFactory() : QSqlEditorFactory() {
    }
    void x_3(xargs *x) {
	// createEditor(QWidget*, const QVariant&)
	QWidget* xret = this->QSqlEditorFactory::createEditor((QWidget*)x[1].x_voidp,*(const QVariant *)x[2].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    void x_4(xargs *x) {
	// createEditor(QWidget*, const QSqlField*)
	QWidget* xret = this->QSqlEditorFactory::createEditor((QWidget*)x[1].x_voidp,(const QSqlField*)x[2].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    static void x_5(xargs *x) {
	// defaultFactory()
	QSqlEditorFactory* xret = QSqlEditorFactory::defaultFactory();
	x[0].x_voidp = (void*)xret;
    }
    static void x_6(xargs *x) {
	// installDefaultFactory(QSqlEditorFactory*)
	QSqlEditorFactory::installDefaultFactory((QSqlEditorFactory*)x[1].x_voidp);
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
    virtual QWidget* createEditor(QWidget* x1, const QSqlField* x2) {
	xargs x[3];
	x[1].x_voidp = (void*)x1;
	x[2].x_voidp = (void*)x2;
	if(call_method((void*)this, 7389, x)) 	return (QWidget*)x[0].x_voidp;
	return this->QSqlEditorFactory::createEditor(x1, x2);
    }
    virtual QWidget* createEditor(QWidget* x1, const QVariant& x2) {
	xargs x[3];
	x[1].x_voidp = (void*)x1;
	x[2].x_voidp = (void*)&x2;
	if(call_method((void*)this, 7388, x)) 	return (QWidget*)x[0].x_voidp;
	return this->QSqlEditorFactory::createEditor(x1, x2);
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
    ~x_QSqlEditorFactory() {}
};
void xcall_QSqlEditorFactory(xargs *x, void *s, int xi) {
    x_QSqlEditorFactory *xself = (x_QSqlEditorFactory*)s;
    switch(xi) {
	case 0: x_QSqlEditorFactory::x_0(x);	break;
	case 1: x_QSqlEditorFactory::x_1(x);	break;
	case 2: x_QSqlEditorFactory::x_2(x);	break;
	case 3: xself->x_3(x);	break;
	case 4: xself->x_4(x);	break;
	case 5: x_QSqlEditorFactory::x_5(x);	break;
	case 6: x_QSqlEditorFactory::x_6(x);	break;
	case 7: delete (QSqlEditorFactory*)xself;	break;
    }
}
