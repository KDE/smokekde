//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qdom.h>

class x_QDomNodeList : public QDomNodeList {
public:
    static void x_0(xargs *x) {
	// QDomNodeList()
	x_QDomNodeList* xret = new x_QDomNodeList();
	x[0].x_voidp = (void*)xret;
    }
    x_QDomNodeList() : QDomNodeList() {
    }
    static void x_1(xargs *x) {
	// QDomNodeList(const QDomNodeList&)
	x_QDomNodeList* xret = new x_QDomNodeList(*(const QDomNodeList *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QDomNodeList(const QDomNodeList& x1) : QDomNodeList(x1) {
    }
    void x_2(xargs *x) {
	// operator=(const QDomNodeList&)
	QDomNodeList& xret = this->QDomNodeList::operator=(*(const QDomNodeList *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_3(xargs *x) const {
	// operator==(const QDomNodeList&)
	bool xret = this->QDomNodeList::operator==(*(const QDomNodeList *)x[1].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_4(xargs *x) const {
	// operator!=(const QDomNodeList&)
	bool xret = this->QDomNodeList::operator!=(*(const QDomNodeList *)x[1].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_5(xargs *x) const {
	// item(int)
	QDomNode xret = this->QDomNodeList::item((int)x[1].x_int);
	x[0].x_voidp = (void*)new QDomNode(xret);
    }
    void x_6(xargs *x) const {
	// length()
	uint xret = this->QDomNodeList::length();
	x[0].x_uint = (uint)xret;
    }
    void x_7(xargs *x) const {
	// count()
	uint xret = this->QDomNodeList::count();
	x[0].x_uint = (uint)xret;
    }
    virtual QDomNode item(int x1) const {
	xargs x[2];
	x[1].x_int = (int)x1;
	if(call_method((void*)this, 2247, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].x_voidp;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNodeList::item(x1);
    }
    virtual uint length() const {
	xargs x[1];
	if(call_method((void*)this, 2248, x)) return (uint)x[0].x_uint;
	return this->QDomNodeList::length();
    }
    ~x_QDomNodeList() {}
};
void xcall_QDomNodeList(xargs *x, void *s, int xi) {
    x_QDomNodeList *xself = (x_QDomNodeList*)s;
    switch(xi) {
	case 0: x_QDomNodeList::x_0(x);	break;
	case 1: x_QDomNodeList::x_1(x);	break;
	case 2: xself->x_2(x);	break;
	case 3: xself->x_3(x);	break;
	case 4: xself->x_4(x);	break;
	case 5: xself->x_5(x);	break;
	case 6: xself->x_6(x);	break;
	case 7: xself->x_7(x);	break;
	case 8: delete (QDomNodeList*)xself;	break;
    }
}
