//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qcstring.h>
#include <qiconview.h>

class x_QIconDragItem : public QIconDragItem {
public:
    static void x_0(xargs *x) {
	// QIconDragItem()
	x_QIconDragItem* xret = new x_QIconDragItem();
	x[0].x_voidp = (void*)xret;
    }
    x_QIconDragItem() : QIconDragItem() {
    }
    void x_1(xargs *x) const {
	// data()
	QByteArray xret = this->QIconDragItem::data();
	x[0].x_voidp = (void*)new QByteArray(xret);
    }
    void x_2(xargs *x) {
	// setData(const QByteArray&)
	this->QIconDragItem::setData(*(const QByteArray *)x[1].x_voidp);
    }
    void x_3(xargs *x) const {
	// operator==(const QIconDragItem&)
	bool xret = this->QIconDragItem::operator==(*(const QIconDragItem *)x[1].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    virtual QByteArray data() const {
	xargs x[1];
	if(call_method((void*)this, 3424, x)) {
	    QByteArray *xptr = (QByteArray *)x[0].x_voidp;
	    QByteArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QIconDragItem::data();
    }
    virtual void setData(const QByteArray& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 3425, x)) return;
	this->QIconDragItem::setData(x1);
    }
    ~x_QIconDragItem() {}
};
void xcall_QIconDragItem(xargs *x, void *s, int xi) {
    x_QIconDragItem *xself = (x_QIconDragItem*)s;
    switch(xi) {
	case 0: x_QIconDragItem::x_0(x);	break;
	case 1: xself->x_1(x);	break;
	case 2: xself->x_2(x);	break;
	case 3: xself->x_3(x);	break;
	case 4: delete (QIconDragItem*)xself;	break;
    }
}
