//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qpen.h>
#include <qbrush.h>
#include <qpointarray.h>
#include <qrect.h>
#include <qpainter.h>
#include <qcanvas.h>

class x_QCanvasEllipse : public QCanvasEllipse {
public:
    static void x_0(xargs *x) {
	// QCanvasEllipse(QCanvas*)
	x_QCanvasEllipse* xret = new x_QCanvasEllipse((QCanvas*)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QCanvasEllipse(QCanvas* x1) : QCanvasEllipse(x1) {
    }
    static void x_1(xargs *x) {
	// QCanvasEllipse(int, int, QCanvas*)
	x_QCanvasEllipse* xret = new x_QCanvasEllipse((int)x[1].x_int,(int)x[2].x_int,(QCanvas*)x[3].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QCanvasEllipse(int x1, int x2, QCanvas* x3) : QCanvasEllipse(x1, x2, x3) {
    }
    static void x_2(xargs *x) {
	// QCanvasEllipse(int, int, int, int, QCanvas*)
	x_QCanvasEllipse* xret = new x_QCanvasEllipse((int)x[1].x_int,(int)x[2].x_int,(int)x[3].x_int,(int)x[4].x_int,(QCanvas*)x[5].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QCanvasEllipse(int x1, int x2, int x3, int x4, QCanvas* x5) : QCanvasEllipse(x1, x2, x3, x4, x5) {
    }
    void x_3(xargs *x) const {
	// width()
	int xret = this->QCanvasEllipse::width();
	x[0].x_int = (int)xret;
    }
    void x_4(xargs *x) const {
	// height()
	int xret = this->QCanvasEllipse::height();
	x[0].x_int = (int)xret;
    }
    void x_5(xargs *x) {
	// setSize(int, int)
	this->QCanvasEllipse::setSize((int)x[1].x_int,(int)x[2].x_int);
    }
    void x_6(xargs *x) {
	// setAngles(int, int)
	this->QCanvasEllipse::setAngles((int)x[1].x_int,(int)x[2].x_int);
    }
    void x_7(xargs *x) const {
	// angleStart()
	int xret = this->QCanvasEllipse::angleStart();
	x[0].x_int = (int)xret;
    }
    void x_8(xargs *x) const {
	// angleLength()
	int xret = this->QCanvasEllipse::angleLength();
	x[0].x_int = (int)xret;
    }
    void x_9(xargs *x) const {
	// areaPoints()
	QPointArray xret = this->QCanvasEllipse::areaPoints();
	x[0].x_voidp = (void*)new QPointArray(xret);
    }
    void x_10(xargs *x) const {
	// collidesWith(const QCanvasItem*)
	bool xret = this->QCanvasEllipse::collidesWith((const QCanvasItem*)x[1].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_11(xargs *x) const {
	// rtti()
	int xret = this->QCanvasEllipse::rtti();
	x[0].x_int = (int)xret;
    }
    void x_12(xargs *x) {
	// drawShape(QPainter&)
	this->QCanvasEllipse::drawShape(*(QPainter *)x[1].x_voidp);
    }
    virtual void advance(int x1) {
	xargs x[2];
	x[1].x_int = (int)x1;
	if(call_method((void*)this, 544, x)) return;
	this->QCanvasItem::advance(x1);
    }
    virtual QPointArray areaPoints() const {
	xargs x[1];
	if(call_method((void*)this, 514, x)) {
	    QPointArray *xptr = (QPointArray *)x[0].x_voidp;
	    QPointArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasEllipse::areaPoints();
    }
    virtual QPointArray areaPointsAdvanced() const {
	xargs x[1];
	if(call_method((void*)this, 615, x)) {
	    QPointArray *xptr = (QPointArray *)x[0].x_voidp;
	    QPointArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasPolygonalItem::areaPointsAdvanced();
    }
    virtual QRect boundingRect() const {
	xargs x[1];
	if(call_method((void*)this, 616, x)) {
	    QRect *xptr = (QRect *)x[0].x_voidp;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasPolygonalItem::boundingRect();
    }
    virtual QRect boundingRectAdvanced() const {
	xargs x[1];
	if(call_method((void*)this, 565, x)) {
	    QRect *xptr = (QRect *)x[0].x_voidp;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasItem::boundingRectAdvanced();
    }
    virtual bool collidesWith(const QCanvasItem* x1) const {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 515, x)) return (bool)x[0].x_bool;
	return this->QCanvasEllipse::collidesWith(x1);
    }
    virtual void draw(QPainter& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 618, x)) return;
	this->QCanvasPolygonalItem::draw(x1);
    }
    virtual void drawShape(QPainter& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 517, x)) return;
	this->QCanvasEllipse::drawShape(x1);
    }
    virtual void moveBy(double x1, double x2) {
	xargs x[3];
	x[1].x_double = (double)x1;
	x[2].x_double = (double)x2;
	if(call_method((void*)this, 532, x)) return;
	this->QCanvasItem::moveBy(x1, x2);
    }
    virtual int rtti() const {
	xargs x[1];
	if(call_method((void*)this, 516, x)) return (int)x[0].x_int;
	return this->QCanvasEllipse::rtti();
    }
    virtual void setActive(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 557, x)) return;
	this->QCanvasItem::setActive(x1);
    }
    virtual void setAnimated(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 538, x)) return;
	this->QCanvasItem::setAnimated(x1);
    }
    virtual void setBrush(QBrush x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 611, x)) return;
	this->QCanvasPolygonalItem::setBrush(x1);
    }
    virtual void setCanvas(QCanvas* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 547, x)) return;
	this->QCanvasItem::setCanvas(x1);
    }
    virtual void setEnabled(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 555, x)) return;
	this->QCanvasItem::setEnabled(x1);
    }
    virtual void setPen(QPen x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 610, x)) return;
	this->QCanvasPolygonalItem::setPen(x1);
    }
    virtual void setSelected(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 553, x)) return;
	this->QCanvasItem::setSelected(x1);
    }
    virtual void setVelocity(double x1, double x2) {
	xargs x[3];
	x[1].x_double = (double)x1;
	x[2].x_double = (double)x2;
	if(call_method((void*)this, 539, x)) return;
	this->QCanvasItem::setVelocity(x1, x2);
    }
    virtual void setVisible(bool x1) {
	xargs x[2];
	x[1].x_bool = (bool)x1;
	if(call_method((void*)this, 551, x)) return;
	this->QCanvasItem::setVisible(x1);
    }
    ~x_QCanvasEllipse() {}
};
void xcall_QCanvasEllipse(xargs *x, void *s, int xi) {
    x_QCanvasEllipse *xself = (x_QCanvasEllipse*)s;
    switch(xi) {
	case 0: x_QCanvasEllipse::x_0(x);	break;
	case 1: x_QCanvasEllipse::x_1(x);	break;
	case 2: x_QCanvasEllipse::x_2(x);	break;
	case 3: xself->x_3(x);	break;
	case 4: xself->x_4(x);	break;
	case 5: xself->x_5(x);	break;
	case 6: xself->x_6(x);	break;
	case 7: xself->x_7(x);	break;
	case 8: xself->x_8(x);	break;
	case 9: xself->x_9(x);	break;
	case 10: xself->x_10(x);	break;
	case 11: xself->x_11(x);	break;
	case 12: xself->x_12(x);	break;
	case 13: delete (QCanvasEllipse*)xself;	break;
    }
}
