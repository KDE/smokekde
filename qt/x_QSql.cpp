//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qsql.h>

class x_QSql : public QSql {
public:
    static void x_0(xargs *x) {
	x[0].x_long = (long)QSql::None;
    }
    static void x_1(xargs *x) {
	x[0].x_long = (long)QSql::Insert;
    }
    static void x_2(xargs *x) {
	x[0].x_long = (long)QSql::Update;
    }
    static void x_3(xargs *x) {
	x[0].x_long = (long)QSql::Delete;
    }
    static void x_4(xargs *x) {
	x[0].x_long = (long)QSql::BeforeFirst;
    }
    static void x_5(xargs *x) {
	x[0].x_long = (long)QSql::AfterLast;
    }
    static void x_6(xargs *x) {
	x[0].x_long = (long)QSql::Cancel;
    }
    static void x_7(xargs *x) {
	x[0].x_long = (long)QSql::No;
    }
    static void x_8(xargs *x) {
	x[0].x_long = (long)QSql::Yes;
    }
    static void x_9(xargs *x) {
	// QSql()
	x_QSql* xret = new x_QSql();
	x[0].x_voidp = (void*)xret;
    }
    x_QSql() : QSql() {
    }
    ~x_QSql() {}
};
void xcall_QSql(xargs *x, void *s, int xi) {
    x_QSql *xself = (x_QSql*)s;
    switch(xi) {
	case 0: x_QSql::x_0(x);	break;
	case 1: x_QSql::x_1(x);	break;
	case 2: x_QSql::x_2(x);	break;
	case 3: x_QSql::x_3(x);	break;
	case 4: x_QSql::x_4(x);	break;
	case 5: x_QSql::x_5(x);	break;
	case 6: x_QSql::x_6(x);	break;
	case 7: x_QSql::x_7(x);	break;
	case 8: x_QSql::x_8(x);	break;
	case 9: x_QSql::x_9(x);	break;
    }
}
