//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qstring.h>
#include <qxml.h>

class x_QXmlDeclHandler {
private:
    QXmlDeclHandler *xthis;
public:
    x_QXmlDeclHandler(void *x) : xthis((QXmlDeclHandler*)x) {}
    void x_0(xargs *x) {
	// attributeDecl(const QString&, const QString&, const QString&, const QString&, const QString&)
	bool xret = xthis->QXmlDeclHandler::attributeDecl(*(const QString *)x[1].x_voidp,*(const QString *)x[2].x_voidp,*(const QString *)x[3].x_voidp,*(const QString *)x[4].x_voidp,*(const QString *)x[5].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_1(xargs *x) {
	// internalEntityDecl(const QString&, const QString&)
	bool xret = xthis->QXmlDeclHandler::internalEntityDecl(*(const QString *)x[1].x_voidp,*(const QString *)x[2].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_2(xargs *x) {
	// externalEntityDecl(const QString&, const QString&, const QString&)
	bool xret = xthis->QXmlDeclHandler::externalEntityDecl(*(const QString *)x[1].x_voidp,*(const QString *)x[2].x_voidp,*(const QString *)x[3].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_3(xargs *x) {
	// errorString()
	QString xret = xthis->QXmlDeclHandler::errorString();
	x[0].x_voidp = (void*)new QString(xret);
    }
    ~x_QXmlDeclHandler() {}
};
void xcall_QXmlDeclHandler(xargs *x, void *s, int xi) {
    x_QXmlDeclHandler xtmp(s), *xself = &xtmp;
    switch(xi) {
	case 0: xself->x_0(x);	break;
	case 1: xself->x_1(x);	break;
	case 2: xself->x_2(x);	break;
	case 3: xself->x_3(x);	break;
    }
}
