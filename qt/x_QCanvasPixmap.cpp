//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qpoint.h>
#include <qimage.h>
#include <qstring.h>
#include <qpixmap.h>
#include <qcanvas.h>

class x_QCanvasPixmap : public QCanvasPixmap {
public:
    static void x_0(xargs *x) {
	// QCanvasPixmap(const QString&)
	x_QCanvasPixmap* xret = new x_QCanvasPixmap(*(const QString *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QCanvasPixmap(const QString& x1) : QCanvasPixmap(x1) {
    }
    static void x_1(xargs *x) {
	// QCanvasPixmap(const QImage&)
	x_QCanvasPixmap* xret = new x_QCanvasPixmap(*(const QImage *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QCanvasPixmap(const QImage& x1) : QCanvasPixmap(x1) {
    }
    static void x_2(xargs *x) {
	// QCanvasPixmap(const QPixmap&, const QPoint&)
	x_QCanvasPixmap* xret = new x_QCanvasPixmap(*(const QPixmap *)x[1].x_voidp,*(const QPoint *)x[2].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QCanvasPixmap(const QPixmap& x1, const QPoint& x2) : QCanvasPixmap(x1, x2) {
    }
    void x_3(xargs *x) const {
	// offsetX()
	int xret = this->QCanvasPixmap::offsetX();
	x[0].x_int = (int)xret;
    }
    void x_4(xargs *x) const {
	// offsetY()
	int xret = this->QCanvasPixmap::offsetY();
	x[0].x_int = (int)xret;
    }
    void x_5(xargs *x) {
	// setOffset(int, int)
	this->QCanvasPixmap::setOffset((int)x[1].x_int,(int)x[2].x_int);
    }
    virtual bool cmd(int x1, QPainter* x2, QPDevCmdParam* x3) {
	xargs x[4];
	x[1].x_int = (int)x1;
	x[2].x_voidp = (void*)x2;
	x[3].x_voidp = (void*)x3;
	if(call_method((void*)this, 5558, x)) return (bool)x[0].x_bool;
	return this->QPaintDevice::cmd(x1, x2, x3);
    }
    virtual void detach() {
	xargs x[1];
	if(call_method((void*)this, 5926, x)) return;
	this->QPixmap::detach();
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
    virtual int metric(int x1) const {
	xargs x[2];
	x[1].x_int = (int)x1;
	if(call_method((void*)this, 5944, x)) return (int)x[0].x_int;
	return this->QPixmap::metric(x1);
    }
    virtual int resolution() const {
	xargs x[1];
	if(call_method((void*)this, 5556, x)) return (int)x[0].x_int;
	return this->QPaintDevice::resolution();
    }
    virtual void setResolution(int x1) {
	xargs x[2];
	x[1].x_int = (int)x1;
	if(call_method((void*)this, 5555, x)) return;
	this->QPaintDevice::setResolution(x1);
    }
    ~x_QCanvasPixmap() {}
};
void xcall_QCanvasPixmap(xargs *x, void *s, int xi) {
    x_QCanvasPixmap *xself = (x_QCanvasPixmap*)s;
    switch(xi) {
	case 0: x_QCanvasPixmap::x_0(x);	break;
	case 1: x_QCanvasPixmap::x_1(x);	break;
	case 2: x_QCanvasPixmap::x_2(x);	break;
	case 3: xself->x_3(x);	break;
	case 4: xself->x_4(x);	break;
	case 5: xself->x_5(x);	break;
	case 6: delete (QCanvasPixmap*)xself;	break;
    }
}
