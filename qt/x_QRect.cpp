//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qpoint.h>
#include <qwindowdefs.h>
#include <qrect.h>
#include <qsize.h>

class x_QRect : public QRect {
public:
    static void x_0(xargs *x) {
	// QRect()
	x_QRect* xret = new x_QRect();
	x[0].x_voidp = (void*)xret;
    }
    x_QRect() : QRect() {
    }
    static void x_1(xargs *x) {
	// QRect(const QPoint&, const QPoint&)
	x_QRect* xret = new x_QRect(*(const QPoint *)x[1].x_voidp,*(const QPoint *)x[2].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QRect(const QPoint& x1, const QPoint& x2) : QRect(x1, x2) {
    }
    static void x_2(xargs *x) {
	// QRect(const QPoint&, const QSize&)
	x_QRect* xret = new x_QRect(*(const QPoint *)x[1].x_voidp,*(const QSize *)x[2].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QRect(const QPoint& x1, const QSize& x2) : QRect(x1, x2) {
    }
    static void x_3(xargs *x) {
	// QRect(int, int, int, int)
	x_QRect* xret = new x_QRect((int)x[1].x_int,(int)x[2].x_int,(int)x[3].x_int,(int)x[4].x_int);
	x[0].x_voidp = (void*)xret;
    }
    x_QRect(int x1, int x2, int x3, int x4) : QRect(x1, x2, x3, x4) {
    }
    void x_4(xargs *x) const {
	// isNull()
	bool xret = this->QRect::isNull();
	x[0].x_bool = (bool)xret;
    }
    void x_5(xargs *x) const {
	// isEmpty()
	bool xret = this->QRect::isEmpty();
	x[0].x_bool = (bool)xret;
    }
    void x_6(xargs *x) const {
	// isValid()
	bool xret = this->QRect::isValid();
	x[0].x_bool = (bool)xret;
    }
    void x_7(xargs *x) const {
	// normalize()
	QRect xret = this->QRect::normalize();
	x[0].x_voidp = (void*)new QRect(xret);
    }
    void x_8(xargs *x) const {
	// left()
	int xret = this->QRect::left();
	x[0].x_int = (int)xret;
    }
    void x_9(xargs *x) const {
	// top()
	int xret = this->QRect::top();
	x[0].x_int = (int)xret;
    }
    void x_10(xargs *x) const {
	// right()
	int xret = this->QRect::right();
	x[0].x_int = (int)xret;
    }
    void x_11(xargs *x) const {
	// bottom()
	int xret = this->QRect::bottom();
	x[0].x_int = (int)xret;
    }
    void x_12(xargs *x) {
	// rLeft()
	QCOORD& xret = this->QRect::rLeft();
	x[0].x_voidp = (void*)&xret;
    }
    void x_13(xargs *x) {
	// rTop()
	QCOORD& xret = this->QRect::rTop();
	x[0].x_voidp = (void*)&xret;
    }
    void x_14(xargs *x) {
	// rRight()
	QCOORD& xret = this->QRect::rRight();
	x[0].x_voidp = (void*)&xret;
    }
    void x_15(xargs *x) {
	// rBottom()
	QCOORD& xret = this->QRect::rBottom();
	x[0].x_voidp = (void*)&xret;
    }
    void x_16(xargs *x) const {
	// x()
	int xret = this->QRect::x();
	x[0].x_int = (int)xret;
    }
    void x_17(xargs *x) const {
	// y()
	int xret = this->QRect::y();
	x[0].x_int = (int)xret;
    }
    void x_18(xargs *x) {
	// setLeft(int)
	this->QRect::setLeft((int)x[1].x_int);
    }
    void x_19(xargs *x) {
	// setTop(int)
	this->QRect::setTop((int)x[1].x_int);
    }
    void x_20(xargs *x) {
	// setRight(int)
	this->QRect::setRight((int)x[1].x_int);
    }
    void x_21(xargs *x) {
	// setBottom(int)
	this->QRect::setBottom((int)x[1].x_int);
    }
    void x_22(xargs *x) {
	// setX(int)
	this->QRect::setX((int)x[1].x_int);
    }
    void x_23(xargs *x) {
	// setY(int)
	this->QRect::setY((int)x[1].x_int);
    }
    void x_24(xargs *x) const {
	// topLeft()
	QPoint xret = this->QRect::topLeft();
	x[0].x_voidp = (void*)new QPoint(xret);
    }
    void x_25(xargs *x) const {
	// bottomRight()
	QPoint xret = this->QRect::bottomRight();
	x[0].x_voidp = (void*)new QPoint(xret);
    }
    void x_26(xargs *x) const {
	// topRight()
	QPoint xret = this->QRect::topRight();
	x[0].x_voidp = (void*)new QPoint(xret);
    }
    void x_27(xargs *x) const {
	// bottomLeft()
	QPoint xret = this->QRect::bottomLeft();
	x[0].x_voidp = (void*)new QPoint(xret);
    }
    void x_28(xargs *x) const {
	// center()
	QPoint xret = this->QRect::center();
	x[0].x_voidp = (void*)new QPoint(xret);
    }
    void x_29(xargs *x) const {
	// rect(int*, int*, int*, int*)
	this->QRect::rect((int*)x[1].x_voidp,(int*)x[2].x_voidp,(int*)x[3].x_voidp,(int*)x[4].x_voidp);
    }
    void x_30(xargs *x) const {
	// coords(int*, int*, int*, int*)
	this->QRect::coords((int*)x[1].x_voidp,(int*)x[2].x_voidp,(int*)x[3].x_voidp,(int*)x[4].x_voidp);
    }
    void x_31(xargs *x) {
	// moveTopLeft(const QPoint&)
	this->QRect::moveTopLeft(*(const QPoint *)x[1].x_voidp);
    }
    void x_32(xargs *x) {
	// moveBottomRight(const QPoint&)
	this->QRect::moveBottomRight(*(const QPoint *)x[1].x_voidp);
    }
    void x_33(xargs *x) {
	// moveTopRight(const QPoint&)
	this->QRect::moveTopRight(*(const QPoint *)x[1].x_voidp);
    }
    void x_34(xargs *x) {
	// moveBottomLeft(const QPoint&)
	this->QRect::moveBottomLeft(*(const QPoint *)x[1].x_voidp);
    }
    void x_35(xargs *x) {
	// moveCenter(const QPoint&)
	this->QRect::moveCenter(*(const QPoint *)x[1].x_voidp);
    }
    void x_36(xargs *x) {
	// moveBy(int, int)
	this->QRect::moveBy((int)x[1].x_int,(int)x[2].x_int);
    }
    void x_37(xargs *x) {
	// setRect(int, int, int, int)
	this->QRect::setRect((int)x[1].x_int,(int)x[2].x_int,(int)x[3].x_int,(int)x[4].x_int);
    }
    void x_38(xargs *x) {
	// setCoords(int, int, int, int)
	this->QRect::setCoords((int)x[1].x_int,(int)x[2].x_int,(int)x[3].x_int,(int)x[4].x_int);
    }
    void x_39(xargs *x) {
	// addCoords(int, int, int, int)
	this->QRect::addCoords((int)x[1].x_int,(int)x[2].x_int,(int)x[3].x_int,(int)x[4].x_int);
    }
    void x_40(xargs *x) const {
	// size()
	QSize xret = this->QRect::size();
	x[0].x_voidp = (void*)new QSize(xret);
    }
    void x_41(xargs *x) const {
	// width()
	int xret = this->QRect::width();
	x[0].x_int = (int)xret;
    }
    void x_42(xargs *x) const {
	// height()
	int xret = this->QRect::height();
	x[0].x_int = (int)xret;
    }
    void x_43(xargs *x) {
	// setWidth(int)
	this->QRect::setWidth((int)x[1].x_int);
    }
    void x_44(xargs *x) {
	// setHeight(int)
	this->QRect::setHeight((int)x[1].x_int);
    }
    void x_45(xargs *x) {
	// setSize(const QSize&)
	this->QRect::setSize(*(const QSize *)x[1].x_voidp);
    }
    void x_46(xargs *x) const {
	// operator|(const QRect&)
	QRect xret = this->QRect::operator|(*(const QRect *)x[1].x_voidp);
	x[0].x_voidp = (void*)new QRect(xret);
    }
    void x_47(xargs *x) const {
	// operator&(const QRect&)
	QRect xret = this->QRect::operator&(*(const QRect *)x[1].x_voidp);
	x[0].x_voidp = (void*)new QRect(xret);
    }
    void x_48(xargs *x) {
	// operator|=(const QRect&)
	QRect& xret = this->QRect::operator|=(*(const QRect *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_49(xargs *x) {
	// operator&=(const QRect&)
	QRect& xret = this->QRect::operator&=(*(const QRect *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_50(xargs *x) const {
	// contains(const QPoint&, bool)
	bool xret = this->QRect::contains(*(const QPoint *)x[1].x_voidp,(bool)x[2].x_bool);
	x[0].x_bool = (bool)xret;
    }
    void x_51(xargs *x) const {
	// contains(const QPoint&)
	bool xret = this->QRect::contains(*(const QPoint *)x[1].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_52(xargs *x) const {
	// contains(int, int, bool)
	bool xret = this->QRect::contains((int)x[1].x_int,(int)x[2].x_int,(bool)x[3].x_bool);
	x[0].x_bool = (bool)xret;
    }
    void x_53(xargs *x) const {
	// contains(int, int)
	bool xret = this->QRect::contains((int)x[1].x_int,(int)x[2].x_int);
	x[0].x_bool = (bool)xret;
    }
    void x_54(xargs *x) const {
	// contains(const QRect&, bool)
	bool xret = this->QRect::contains(*(const QRect *)x[1].x_voidp,(bool)x[2].x_bool);
	x[0].x_bool = (bool)xret;
    }
    void x_55(xargs *x) const {
	// contains(const QRect&)
	bool xret = this->QRect::contains(*(const QRect *)x[1].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_56(xargs *x) const {
	// unite(const QRect&)
	QRect xret = this->QRect::unite(*(const QRect *)x[1].x_voidp);
	x[0].x_voidp = (void*)new QRect(xret);
    }
    void x_57(xargs *x) const {
	// intersect(const QRect&)
	QRect xret = this->QRect::intersect(*(const QRect *)x[1].x_voidp);
	x[0].x_voidp = (void*)new QRect(xret);
    }
    void x_58(xargs *x) const {
	// intersects(const QRect&)
	bool xret = this->QRect::intersects(*(const QRect *)x[1].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    ~x_QRect() {}
};
void xcall_QRect(xargs *x, void *s, int xi) {
    x_QRect *xself = (x_QRect*)s;
    switch(xi) {
	case 0: x_QRect::x_0(x);	break;
	case 1: x_QRect::x_1(x);	break;
	case 2: x_QRect::x_2(x);	break;
	case 3: x_QRect::x_3(x);	break;
	case 4: xself->x_4(x);	break;
	case 5: xself->x_5(x);	break;
	case 6: xself->x_6(x);	break;
	case 7: xself->x_7(x);	break;
	case 8: xself->x_8(x);	break;
	case 9: xself->x_9(x);	break;
	case 10: xself->x_10(x);	break;
	case 11: xself->x_11(x);	break;
	case 12: xself->x_12(x);	break;
	case 13: xself->x_13(x);	break;
	case 14: xself->x_14(x);	break;
	case 15: xself->x_15(x);	break;
	case 16: xself->x_16(x);	break;
	case 17: xself->x_17(x);	break;
	case 18: xself->x_18(x);	break;
	case 19: xself->x_19(x);	break;
	case 20: xself->x_20(x);	break;
	case 21: xself->x_21(x);	break;
	case 22: xself->x_22(x);	break;
	case 23: xself->x_23(x);	break;
	case 24: xself->x_24(x);	break;
	case 25: xself->x_25(x);	break;
	case 26: xself->x_26(x);	break;
	case 27: xself->x_27(x);	break;
	case 28: xself->x_28(x);	break;
	case 29: xself->x_29(x);	break;
	case 30: xself->x_30(x);	break;
	case 31: xself->x_31(x);	break;
	case 32: xself->x_32(x);	break;
	case 33: xself->x_33(x);	break;
	case 34: xself->x_34(x);	break;
	case 35: xself->x_35(x);	break;
	case 36: xself->x_36(x);	break;
	case 37: xself->x_37(x);	break;
	case 38: xself->x_38(x);	break;
	case 39: xself->x_39(x);	break;
	case 40: xself->x_40(x);	break;
	case 41: xself->x_41(x);	break;
	case 42: xself->x_42(x);	break;
	case 43: xself->x_43(x);	break;
	case 44: xself->x_44(x);	break;
	case 45: xself->x_45(x);	break;
	case 46: xself->x_46(x);	break;
	case 47: xself->x_47(x);	break;
	case 48: xself->x_48(x);	break;
	case 49: xself->x_49(x);	break;
	case 50: xself->x_50(x);	break;
	case 51: xself->x_51(x);	break;
	case 52: xself->x_52(x);	break;
	case 53: xself->x_53(x);	break;
	case 54: xself->x_54(x);	break;
	case 55: xself->x_55(x);	break;
	case 56: xself->x_56(x);	break;
	case 57: xself->x_57(x);	break;
	case 58: xself->x_58(x);	break;
    }
}
