//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qevent.h>
#include <qsize.h>

class x_QResizeEvent : public QResizeEvent {
public:
    static void x_0(xargs *x) {
	// QResizeEvent(const QSize&, const QSize&)
	x_QResizeEvent* xret = new x_QResizeEvent(*(const QSize *)x[1].x_voidp,*(const QSize *)x[2].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QResizeEvent(const QSize& x1, const QSize& x2) : QResizeEvent(x1, x2) {
    }
    void x_1(xargs *x) const {
	// size()
	const QSize& xret = this->QResizeEvent::size();
	x[0].x_voidp = (void*)&xret;
    }
    void x_2(xargs *x) const {
	// oldSize()
	const QSize& xret = this->QResizeEvent::oldSize();
	x[0].x_voidp = (void*)&xret;
    }
    ~x_QResizeEvent() {}
};
void xcall_QResizeEvent(xargs *x, void *s, int xi) {
    x_QResizeEvent *xself = (x_QResizeEvent*)s;
    switch(xi) {
	case 0: x_QResizeEvent::x_0(x);	break;
	case 1: xself->x_1(x);	break;
	case 2: xself->x_2(x);	break;
    }
}
