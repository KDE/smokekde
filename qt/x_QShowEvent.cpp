//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qevent.h>

class x_QShowEvent : public QShowEvent {
public:
    static void x_0(xargs *x) {
	// QShowEvent()
	x_QShowEvent* xret = new x_QShowEvent();
	x[0].x_voidp = (void*)xret;
    }
    x_QShowEvent() : QShowEvent() {
    }
    ~x_QShowEvent() {}
};
void xcall_QShowEvent(xargs *x, void *s, int xi) {
    x_QShowEvent *xself = (x_QShowEvent*)s;
    switch(xi) {
	case 0: x_QShowEvent::x_0(x);	break;
    }
}
