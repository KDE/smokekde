//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qkeysequence.h>
#include <qstring.h>

class x_QKeySequence : public QKeySequence {
public:
    static void x_0(xargs *x) {
	// QKeySequence()
	x_QKeySequence* xret = new x_QKeySequence();
	x[0].x_voidp = (void*)xret;
    }
    x_QKeySequence() : QKeySequence() {
    }
    static void x_1(xargs *x) {
	// QKeySequence(const QString&)
	x_QKeySequence* xret = new x_QKeySequence(*(const QString *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QKeySequence(const QString& x1) : QKeySequence(x1) {
    }
    static void x_2(xargs *x) {
	// QKeySequence(int)
	x_QKeySequence* xret = new x_QKeySequence((int)x[1].x_int);
	x[0].x_voidp = (void*)xret;
    }
    x_QKeySequence(int x1) : QKeySequence(x1) {
    }
    static void x_3(xargs *x) {
	// QKeySequence(const QKeySequence&)
	x_QKeySequence* xret = new x_QKeySequence(*(const QKeySequence *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QKeySequence(const QKeySequence& x1) : QKeySequence(x1) {
    }
    void x_4(xargs *x) {
	// operator=(const QKeySequence&)
	QKeySequence& xret = this->QKeySequence::operator=(*(const QKeySequence *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_5(xargs *x) const {
	// operator==(const QKeySequence&)
	bool xret = this->QKeySequence::operator==(*(const QKeySequence *)x[1].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_6(xargs *x) const {
	// operator!=(const QKeySequence&)
	bool xret = this->QKeySequence::operator!=(*(const QKeySequence *)x[1].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    ~x_QKeySequence() {}
};
void xcall_QKeySequence(xargs *x, void *s, int xi) {
    x_QKeySequence *xself = (x_QKeySequence*)s;
    switch(xi) {
	case 0: x_QKeySequence::x_0(x);	break;
	case 1: x_QKeySequence::x_1(x);	break;
	case 2: x_QKeySequence::x_2(x);	break;
	case 3: x_QKeySequence::x_3(x);	break;
	case 4: xself->x_4(x);	break;
	case 5: xself->x_5(x);	break;
	case 6: xself->x_6(x);	break;
	case 7: delete (QKeySequence*)xself;	break;
    }
}
