//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qlistview.h>

class x_QListViewItemIterator : public QListViewItemIterator {
public:
    static void x_0(xargs *x) {
	// QListViewItemIterator()
	x_QListViewItemIterator* xret = new x_QListViewItemIterator();
	x[0].x_voidp = (void*)xret;
    }
    x_QListViewItemIterator() : QListViewItemIterator() {
    }
    static void x_1(xargs *x) {
	// QListViewItemIterator(QListViewItem*)
	x_QListViewItemIterator* xret = new x_QListViewItemIterator((QListViewItem*)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QListViewItemIterator(QListViewItem* x1) : QListViewItemIterator(x1) {
    }
    static void x_2(xargs *x) {
	// QListViewItemIterator(const QListViewItemIterator&)
	x_QListViewItemIterator* xret = new x_QListViewItemIterator(*(const QListViewItemIterator *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QListViewItemIterator(const QListViewItemIterator& x1) : QListViewItemIterator(x1) {
    }
    static void x_3(xargs *x) {
	// QListViewItemIterator(QListView*)
	x_QListViewItemIterator* xret = new x_QListViewItemIterator((QListView*)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QListViewItemIterator(QListView* x1) : QListViewItemIterator(x1) {
    }
    void x_4(xargs *x) {
	// operator=(const QListViewItemIterator&)
	QListViewItemIterator& xret = this->QListViewItemIterator::operator=(*(const QListViewItemIterator *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_5(xargs *x) {
	// operator++()
	QListViewItemIterator& xret = this->QListViewItemIterator::operator++();
	x[0].x_voidp = (void*)&xret;
    }
    void x_6(xargs *x) {
	// operator++(int)
	const QListViewItemIterator xret = this->QListViewItemIterator::operator++((int)x[1].x_int);
	x[0].x_voidp = (void*)new QListViewItemIterator(xret);
    }
    void x_7(xargs *x) {
	// operator+=(int)
	QListViewItemIterator& xret = this->QListViewItemIterator::operator+=((int)x[1].x_int);
	x[0].x_voidp = (void*)&xret;
    }
    void x_8(xargs *x) {
	// operator--()
	QListViewItemIterator& xret = this->QListViewItemIterator::operator--();
	x[0].x_voidp = (void*)&xret;
    }
    void x_9(xargs *x) {
	// operator--(int)
	const QListViewItemIterator xret = this->QListViewItemIterator::operator--((int)x[1].x_int);
	x[0].x_voidp = (void*)new QListViewItemIterator(xret);
    }
    void x_10(xargs *x) {
	// operator-=(int)
	QListViewItemIterator& xret = this->QListViewItemIterator::operator-=((int)x[1].x_int);
	x[0].x_voidp = (void*)&xret;
    }
    void x_11(xargs *x) const {
	// current()
	QListViewItem* xret = this->QListViewItemIterator::current();
	x[0].x_voidp = (void*)xret;
    }
    ~x_QListViewItemIterator() {}
};
void xcall_QListViewItemIterator(xargs *x, void *s, int xi) {
    x_QListViewItemIterator *xself = (x_QListViewItemIterator*)s;
    switch(xi) {
	case 0: x_QListViewItemIterator::x_0(x);	break;
	case 1: x_QListViewItemIterator::x_1(x);	break;
	case 2: x_QListViewItemIterator::x_2(x);	break;
	case 3: x_QListViewItemIterator::x_3(x);	break;
	case 4: xself->x_4(x);	break;
	case 5: xself->x_5(x);	break;
	case 6: xself->x_6(x);	break;
	case 7: xself->x_7(x);	break;
	case 8: xself->x_8(x);	break;
	case 9: xself->x_9(x);	break;
	case 10: xself->x_10(x);	break;
	case 11: xself->x_11(x);	break;
	case 12: delete (QListViewItemIterator*)xself;	break;
    }
}
