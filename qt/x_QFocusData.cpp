//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qfocusdata.h>

class x_QFocusData {
private:
    QFocusData *xthis;
public:
    x_QFocusData(void *x) : xthis((QFocusData*)x) {}
    void x_0(xargs *x) const {
	// focusWidget()
	QWidget* xret = xthis->QFocusData::focusWidget();
	x[0].x_voidp = (void*)xret;
    }
    void x_1(xargs *x) {
	// home()
	QWidget* xret = xthis->QFocusData::home();
	x[0].x_voidp = (void*)xret;
    }
    void x_2(xargs *x) {
	// next()
	QWidget* xret = xthis->QFocusData::next();
	x[0].x_voidp = (void*)xret;
    }
    void x_3(xargs *x) {
	// prev()
	QWidget* xret = xthis->QFocusData::prev();
	x[0].x_voidp = (void*)xret;
    }
    void x_4(xargs *x) const {
	// count()
	int xret = xthis->QFocusData::count();
	x[0].x_int = (int)xret;
    }
    ~x_QFocusData() {}
};
void xcall_QFocusData(xargs *x, void *s, int xi) {
    x_QFocusData xtmp(s), *xself = &xtmp;
    switch(xi) {
	case 0: xself->x_0(x);	break;
	case 1: xself->x_1(x);	break;
	case 2: xself->x_2(x);	break;
	case 3: xself->x_3(x);	break;
	case 4: xself->x_4(x);	break;
    }
}
