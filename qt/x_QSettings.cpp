//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qsettings.h>
#include <qstring.h>
#include <qstringlist.h>

class x_QSettings : public QSettings {
public:
    static void x_0(xargs *x) {
	x[0].x_long = (long)QSettings::Unix;
    }
    static void x_1(xargs *x) {
	x[0].x_long = (long)QSettings::Windows;
    }
    static void x_2(xargs *x) {
	x[0].x_long = (long)QSettings::Mac;
    }
    static void x_3(xargs *x) {
	// QSettings()
	x_QSettings* xret = new x_QSettings();
	x[0].x_voidp = (void*)xret;
    }
    x_QSettings() : QSettings() {
    }
    void x_4(xargs *x) {
	// writeEntry(const QString&, bool)
	bool xret = this->QSettings::writeEntry(*(const QString *)x[1].x_voidp,(bool)x[2].x_bool);
	x[0].x_bool = (bool)xret;
    }
    void x_5(xargs *x) {
	// writeEntry(const QString&, double)
	bool xret = this->QSettings::writeEntry(*(const QString *)x[1].x_voidp,(double)x[2].x_double);
	x[0].x_bool = (bool)xret;
    }
    void x_6(xargs *x) {
	// writeEntry(const QString&, int)
	bool xret = this->QSettings::writeEntry(*(const QString *)x[1].x_voidp,(int)x[2].x_int);
	x[0].x_bool = (bool)xret;
    }
    void x_7(xargs *x) {
	// writeEntry(const QString&, const char*)
	bool xret = this->QSettings::writeEntry(*(const QString *)x[1].x_voidp,(const char*)x[2].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_8(xargs *x) {
	// writeEntry(const QString&, const QString&)
	bool xret = this->QSettings::writeEntry(*(const QString *)x[1].x_voidp,*(const QString *)x[2].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_9(xargs *x) {
	// writeEntry(const QString&, const QStringList&)
	bool xret = this->QSettings::writeEntry(*(const QString *)x[1].x_voidp,*(const QStringList *)x[2].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_10(xargs *x) {
	// writeEntry(const QString&, const QStringList&, const QChar&)
	bool xret = this->QSettings::writeEntry(*(const QString *)x[1].x_voidp,*(const QStringList *)x[2].x_voidp,*(const QChar *)x[3].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_11(xargs *x) const {
	// entryList(const QString&)
	QStringList xret = this->QSettings::entryList(*(const QString *)x[1].x_voidp);
	x[0].x_voidp = (void*)new QStringList(xret);
    }
    void x_12(xargs *x) const {
	// subkeyList(const QString&)
	QStringList xret = this->QSettings::subkeyList(*(const QString *)x[1].x_voidp);
	x[0].x_voidp = (void*)new QStringList(xret);
    }
    void x_13(xargs *x) {
	// readListEntry(const QString&, bool*)
	QStringList xret = this->QSettings::readListEntry(*(const QString *)x[1].x_voidp,(bool*)x[2].x_voidp);
	x[0].x_voidp = (void*)new QStringList(xret);
    }
    void x_14(xargs *x) {
	// readListEntry(const QString&)
	QStringList xret = this->QSettings::readListEntry(*(const QString *)x[1].x_voidp);
	x[0].x_voidp = (void*)new QStringList(xret);
    }
    void x_15(xargs *x) {
	// readListEntry(const QString&, const QChar&, bool*)
	QStringList xret = this->QSettings::readListEntry(*(const QString *)x[1].x_voidp,*(const QChar *)x[2].x_voidp,(bool*)x[3].x_voidp);
	x[0].x_voidp = (void*)new QStringList(xret);
    }
    void x_16(xargs *x) {
	// readListEntry(const QString&, const QChar&)
	QStringList xret = this->QSettings::readListEntry(*(const QString *)x[1].x_voidp,*(const QChar *)x[2].x_voidp);
	x[0].x_voidp = (void*)new QStringList(xret);
    }
    void x_17(xargs *x) {
	// readEntry(const QString&, const QString&, bool*)
	QString xret = this->QSettings::readEntry(*(const QString *)x[1].x_voidp,*(const QString *)x[2].x_voidp,(bool*)x[3].x_voidp);
	x[0].x_voidp = (void*)new QString(xret);
    }
    void x_18(xargs *x) {
	// readEntry(const QString&, const QString&)
	QString xret = this->QSettings::readEntry(*(const QString *)x[1].x_voidp,*(const QString *)x[2].x_voidp);
	x[0].x_voidp = (void*)new QString(xret);
    }
    void x_19(xargs *x) {
	// readEntry(const QString&)
	QString xret = this->QSettings::readEntry(*(const QString *)x[1].x_voidp);
	x[0].x_voidp = (void*)new QString(xret);
    }
    void x_20(xargs *x) {
	// readNumEntry(const QString&, int, bool*)
	int xret = this->QSettings::readNumEntry(*(const QString *)x[1].x_voidp,(int)x[2].x_int,(bool*)x[3].x_voidp);
	x[0].x_int = (int)xret;
    }
    void x_21(xargs *x) {
	// readNumEntry(const QString&, int)
	int xret = this->QSettings::readNumEntry(*(const QString *)x[1].x_voidp,(int)x[2].x_int);
	x[0].x_int = (int)xret;
    }
    void x_22(xargs *x) {
	// readNumEntry(const QString&)
	int xret = this->QSettings::readNumEntry(*(const QString *)x[1].x_voidp);
	x[0].x_int = (int)xret;
    }
    void x_23(xargs *x) {
	// readDoubleEntry(const QString&, double, bool*)
	double xret = this->QSettings::readDoubleEntry(*(const QString *)x[1].x_voidp,(double)x[2].x_double,(bool*)x[3].x_voidp);
	x[0].x_double = (double)xret;
    }
    void x_24(xargs *x) {
	// readDoubleEntry(const QString&, double)
	double xret = this->QSettings::readDoubleEntry(*(const QString *)x[1].x_voidp,(double)x[2].x_double);
	x[0].x_double = (double)xret;
    }
    void x_25(xargs *x) {
	// readDoubleEntry(const QString&)
	double xret = this->QSettings::readDoubleEntry(*(const QString *)x[1].x_voidp);
	x[0].x_double = (double)xret;
    }
    void x_26(xargs *x) {
	// readBoolEntry(const QString&, bool, bool*)
	bool xret = this->QSettings::readBoolEntry(*(const QString *)x[1].x_voidp,(bool)x[2].x_bool,(bool*)x[3].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_27(xargs *x) {
	// readBoolEntry(const QString&, bool)
	bool xret = this->QSettings::readBoolEntry(*(const QString *)x[1].x_voidp,(bool)x[2].x_bool);
	x[0].x_bool = (bool)xret;
    }
    void x_28(xargs *x) {
	// readBoolEntry(const QString&)
	bool xret = this->QSettings::readBoolEntry(*(const QString *)x[1].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_29(xargs *x) {
	// removeEntry(const QString&)
	bool xret = this->QSettings::removeEntry(*(const QString *)x[1].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_30(xargs *x) {
	// insertSearchPath(QSettings::System, const QString&)
	this->QSettings::insertSearchPath((QSettings::System)x[1].x_long,*(const QString *)x[2].x_voidp);
    }
    void x_31(xargs *x) {
	// removeSearchPath(QSettings::System, const QString&)
	this->QSettings::removeSearchPath((QSettings::System)x[1].x_long,*(const QString *)x[2].x_voidp);
    }
    ~x_QSettings() {}
};
void xcall_QSettings(xargs *x, void *s, int xi) {
    x_QSettings *xself = (x_QSettings*)s;
    switch(xi) {
	case 0: x_QSettings::x_0(x);	break;
	case 1: x_QSettings::x_1(x);	break;
	case 2: x_QSettings::x_2(x);	break;
	case 3: x_QSettings::x_3(x);	break;
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
	case 32: delete (QSettings*)xself;	break;
    }
}
