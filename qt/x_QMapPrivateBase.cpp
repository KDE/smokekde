//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qmap.h>

class x_QMapPrivateBase : public QMapPrivateBase {
public:
    static void x_0(xargs *x) {
	// QMapPrivateBase()
	x_QMapPrivateBase* xret = new x_QMapPrivateBase();
	x[0].x_voidp = (void*)xret;
    }
    x_QMapPrivateBase() : QMapPrivateBase() {
    }
    static void x_1(xargs *x) {
	// QMapPrivateBase(const QMapPrivateBase*)
	x_QMapPrivateBase* xret = new x_QMapPrivateBase((const QMapPrivateBase*)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QMapPrivateBase(const QMapPrivateBase* x1) : QMapPrivateBase(x1) {
    }
    void x_2(xargs *x) {
	// rotateLeft(QMapNodeBase*, QMapNodeBase*&)
	this->QMapPrivateBase::rotateLeft((QMapNodeBase*)x[1].x_voidp,*(QMapNodeBase* *)x[2].x_voidp);
    }
    void x_3(xargs *x) {
	// rotateRight(QMapNodeBase*, QMapNodeBase*&)
	this->QMapPrivateBase::rotateRight((QMapNodeBase*)x[1].x_voidp,*(QMapNodeBase* *)x[2].x_voidp);
    }
    void x_4(xargs *x) {
	// rebalance(QMapNodeBase*, QMapNodeBase*&)
	this->QMapPrivateBase::rebalance((QMapNodeBase*)x[1].x_voidp,*(QMapNodeBase* *)x[2].x_voidp);
    }
    void x_5(xargs *x) {
	// removeAndRebalance(QMapNodeBase*, QMapNodeBase*&, QMapNodeBase*&, QMapNodeBase*&)
	QMapNodeBase* xret = this->QMapPrivateBase::removeAndRebalance((QMapNodeBase*)x[1].x_voidp,*(QMapNodeBase* *)x[2].x_voidp,*(QMapNodeBase* *)x[3].x_voidp,*(QMapNodeBase* *)x[4].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    ~x_QMapPrivateBase() {}
};
void xcall_QMapPrivateBase(xargs *x, void *s, int xi) {
    x_QMapPrivateBase *xself = (x_QMapPrivateBase*)s;
    switch(xi) {
	case 0: x_QMapPrivateBase::x_0(x);	break;
	case 1: x_QMapPrivateBase::x_1(x);	break;
	case 2: xself->x_2(x);	break;
	case 3: xself->x_3(x);	break;
	case 4: xself->x_4(x);	break;
	case 5: xself->x_5(x);	break;
    }
}
