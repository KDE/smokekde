//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qvariant.h>
#include <qurlinfo.h>
#include <qcstring.h>
#include <qstring.h>
#include <qurloperator.h>
#include <qstringlist.h>

class x_QUrlOperator : public QUrlOperator {
public:
    static void x_0(xargs *x) {
	// QUrlOperator()
	x_QUrlOperator* xret = new x_QUrlOperator();
	x[0].x_voidp = (void*)xret;
    }
    x_QUrlOperator() : QUrlOperator() {
    }
    static void x_1(xargs *x) {
	// QUrlOperator(const QString&)
	x_QUrlOperator* xret = new x_QUrlOperator(*(const QString *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QUrlOperator(const QString& x1) : QUrlOperator(x1) {
    }
    static void x_2(xargs *x) {
	// QUrlOperator(const QUrlOperator&)
	x_QUrlOperator* xret = new x_QUrlOperator(*(const QUrlOperator *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QUrlOperator(const QUrlOperator& x1) : QUrlOperator(x1) {
    }
    static void x_3(xargs *x) {
	// QUrlOperator(const QUrlOperator&, const QString&, bool)
	x_QUrlOperator* xret = new x_QUrlOperator(*(const QUrlOperator *)x[1].x_voidp,*(const QString *)x[2].x_voidp,(bool)x[3].x_bool);
	x[0].x_voidp = (void*)xret;
    }
    x_QUrlOperator(const QUrlOperator& x1, const QString& x2, bool x3) : QUrlOperator(x1, x2, x3) {
    }
    static void x_4(xargs *x) {
	// QUrlOperator(const QUrlOperator&, const QString&)
	x_QUrlOperator* xret = new x_QUrlOperator(*(const QUrlOperator *)x[1].x_voidp,*(const QString *)x[2].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QUrlOperator(const QUrlOperator& x1, const QString& x2) : QUrlOperator(x1, x2) {
    }
    void x_5(xargs *x) {
	// setPath(const QString&)
	this->QUrlOperator::setPath(*(const QString *)x[1].x_voidp);
    }
    void x_6(xargs *x) {
	// cdUp()
	bool xret = this->QUrlOperator::cdUp();
	x[0].x_bool = (bool)xret;
    }
    void x_7(xargs *x) {
	// listChildren()
	const QNetworkOperation* xret = this->QUrlOperator::listChildren();
	x[0].x_voidp = (void*)xret;
    }
    void x_8(xargs *x) {
	// mkdir(const QString&)
	const QNetworkOperation* xret = this->QUrlOperator::mkdir(*(const QString *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    void x_9(xargs *x) {
	// remove(const QString&)
	const QNetworkOperation* xret = this->QUrlOperator::remove(*(const QString *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    void x_10(xargs *x) {
	// rename(const QString&, const QString&)
	const QNetworkOperation* xret = this->QUrlOperator::rename(*(const QString *)x[1].x_voidp,*(const QString *)x[2].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    void x_11(xargs *x) {
	// get(const QString&)
	const QNetworkOperation* xret = this->QUrlOperator::get(*(const QString *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    void x_12(xargs *x) {
	// get()
	const QNetworkOperation* xret = this->QUrlOperator::get();
	x[0].x_voidp = (void*)xret;
    }
    void x_13(xargs *x) {
	// put(const QByteArray&, const QString&)
	const QNetworkOperation* xret = this->QUrlOperator::put(*(const QByteArray *)x[1].x_voidp,*(const QString *)x[2].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    void x_14(xargs *x) {
	// put(const QByteArray&)
	const QNetworkOperation* xret = this->QUrlOperator::put(*(const QByteArray *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    void x_15(xargs *x) {
	// copy(const QString&, const QString&, bool, bool)
	QPtrList<QNetworkOperation> xret = this->QUrlOperator::copy(*(const QString *)x[1].x_voidp,*(const QString *)x[2].x_voidp,(bool)x[3].x_bool,(bool)x[4].x_bool);
	x[0].x_voidp = (void*)new QPtrList<QNetworkOperation>(xret);
    }
    void x_16(xargs *x) {
	// copy(const QString&, const QString&, bool)
	QPtrList<QNetworkOperation> xret = this->QUrlOperator::copy(*(const QString *)x[1].x_voidp,*(const QString *)x[2].x_voidp,(bool)x[3].x_bool);
	x[0].x_voidp = (void*)new QPtrList<QNetworkOperation>(xret);
    }
    void x_17(xargs *x) {
	// copy(const QString&, const QString&)
	QPtrList<QNetworkOperation> xret = this->QUrlOperator::copy(*(const QString *)x[1].x_voidp,*(const QString *)x[2].x_voidp);
	x[0].x_voidp = (void*)new QPtrList<QNetworkOperation>(xret);
    }
    void x_18(xargs *x) {
	// copy(const QStringList&, const QString&, bool)
	this->QUrlOperator::copy(*(const QStringList *)x[1].x_voidp,*(const QString *)x[2].x_voidp,(bool)x[3].x_bool);
    }
    void x_19(xargs *x) {
	// copy(const QStringList&, const QString&)
	this->QUrlOperator::copy(*(const QStringList *)x[1].x_voidp,*(const QString *)x[2].x_voidp);
    }
    void x_20(xargs *x) {
	// isDir(bool*)
	bool xret = this->QUrlOperator::isDir((bool*)x[1].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_21(xargs *x) {
	// isDir()
	bool xret = this->QUrlOperator::isDir();
	x[0].x_bool = (bool)xret;
    }
    void x_22(xargs *x) {
	// setNameFilter(const QString&)
	this->QUrlOperator::setNameFilter(*(const QString *)x[1].x_voidp);
    }
    void x_23(xargs *x) const {
	// nameFilter()
	QString xret = this->QUrlOperator::nameFilter();
	x[0].x_voidp = (void*)new QString(xret);
    }
    void x_24(xargs *x) const {
	// info(const QString&)
	QUrlInfo xret = this->QUrlOperator::info(*(const QString *)x[1].x_voidp);
	x[0].x_voidp = (void*)new QUrlInfo(xret);
    }
    void x_25(xargs *x) {
	// operator=(const QUrlOperator&)
	QUrlOperator& xret = this->QUrlOperator::operator=(*(const QUrlOperator *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_26(xargs *x) {
	// operator=(const QString&)
	QUrlOperator& xret = this->QUrlOperator::operator=(*(const QString *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_27(xargs *x) {
	// stop()
	this->QUrlOperator::stop();
    }
    void x_28(xargs *x) {
	// newChildren(const QValueList<QUrlInfo>&, QNetworkOperation*)
	this->QUrlOperator::newChildren(*(const QValueList<QUrlInfo> *)x[1].x_voidp,(QNetworkOperation*)x[2].x_voidp);
    }
    void x_29(xargs *x) {
	// finished(QNetworkOperation*)
	this->QUrlOperator::finished((QNetworkOperation*)x[1].x_voidp);
    }
    void x_30(xargs *x) {
	// start(QNetworkOperation*)
	this->QUrlOperator::start((QNetworkOperation*)x[1].x_voidp);
    }
    void x_31(xargs *x) {
	// createdDirectory(const QUrlInfo&, QNetworkOperation*)
	this->QUrlOperator::createdDirectory(*(const QUrlInfo *)x[1].x_voidp,(QNetworkOperation*)x[2].x_voidp);
    }
    void x_32(xargs *x) {
	// removed(QNetworkOperation*)
	this->QUrlOperator::removed((QNetworkOperation*)x[1].x_voidp);
    }
    void x_33(xargs *x) {
	// itemChanged(QNetworkOperation*)
	this->QUrlOperator::itemChanged((QNetworkOperation*)x[1].x_voidp);
    }
    void x_34(xargs *x) {
	// data(const QByteArray&, QNetworkOperation*)
	this->QUrlOperator::data(*(const QByteArray *)x[1].x_voidp,(QNetworkOperation*)x[2].x_voidp);
    }
    void x_35(xargs *x) {
	// dataTransferProgress(int, int, QNetworkOperation*)
	this->QUrlOperator::dataTransferProgress((int)x[1].x_int,(int)x[2].x_int,(QNetworkOperation*)x[3].x_voidp);
    }
    void x_36(xargs *x) {
	// startedNextCopy(const QPtrList<QNetworkOperation>&)
	this->QUrlOperator::startedNextCopy(*(const QPtrList<QNetworkOperation> *)x[1].x_voidp);
    }
    void x_37(xargs *x) {
	// connectionStateChanged(int, const QString&)
	this->QUrlOperator::connectionStateChanged((int)x[1].x_int,*(const QString *)x[2].x_voidp);
    }
    void x_38(xargs *x) {
	// reset()
	this->QUrlOperator::reset();
    }
    void x_39(xargs *x) {
	// parse(const QString&)
	bool xret = this->QUrlOperator::parse(*(const QString *)x[1].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_40(xargs *x) {
	// checkValid()
	bool xret = this->QUrlOperator::checkValid();
	x[0].x_bool = (bool)xret;
    }
    void x_41(xargs *x) {
	// clearEntries()
	this->QUrlOperator::clearEntries();
    }
    void x_42(xargs *x) {
	// getNetworkProtocol()
	this->QUrlOperator::getNetworkProtocol();
    }
    void x_43(xargs *x) {
	// deleteNetworkProtocol()
	this->QUrlOperator::deleteNetworkProtocol();
    }
    virtual void addPath(const QString& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9104, x)) return;
	this->QUrl::addPath(x1);
    }
    virtual bool cdUp() {
	xargs x[1];
	if(call_method((void*)this, 9165, x)) return (bool)x[0].x_bool;
	return this->QUrlOperator::cdUp();
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	xargs x[4];
	x[1].x_voidp = (void*)x1;
	x[2].x_voidp = (void*)x2;
	x[3].x_voidp = (void*)x3;
	if(call_method((void*)this, 5475, x)) return (bool)x[0].x_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual bool checkValid() {
	xargs x[1];
	if(call_method((void*)this, 9199, x)) return (bool)x[0].x_bool;
	return this->QUrlOperator::checkValid();
    }
    virtual void childEvent(QChildEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5471, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual void clearEntries() {
	xargs x[1];
	if(call_method((void*)this, 9200, x)) return;
	this->QUrlOperator::clearEntries();
    }
    virtual void connectNotify(const char* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5473, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual QPtrList<QNetworkOperation> copy(const QString& x1, const QString& x2, bool x3, bool x4) {
	xargs x[5];
	x[1].x_voidp = (void*)&x1;
	x[2].x_voidp = (void*)&x2;
	x[3].x_bool = (bool)x3;
	x[4].x_bool = (bool)x4;
	if(call_method((void*)this, 9174, x)) {
	    QPtrList<QNetworkOperation> *xptr = (QPtrList<QNetworkOperation> *)x[0].x_voidp;
	    QPtrList<QNetworkOperation> xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QUrlOperator::copy(x1, x2, x3, x4);
    }
    virtual void copy(const QStringList& x1, const QString& x2, bool x3) {
	xargs x[4];
	x[1].x_voidp = (void*)&x1;
	x[2].x_voidp = (void*)&x2;
	x[3].x_bool = (bool)x3;
	if(call_method((void*)this, 9177, x)) return;
	this->QUrlOperator::copy(x1, x2, x3);
    }
    virtual void customEvent(QCustomEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5472, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual void disconnectNotify(const char* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5474, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual bool event(QEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5410, x)) return (bool)x[0].x_bool;
	return this->QObject::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	xargs x[3];
	x[1].x_voidp = (void*)x1;
	x[2].x_voidp = (void*)x2;
	if(call_method((void*)this, 5411, x)) return (bool)x[0].x_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual const QNetworkOperation* get(const QString& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9170, x)) 	return (const QNetworkOperation*)x[0].x_voidp;
	return this->QUrlOperator::get(x1);
    }
    virtual QUrlInfo info(const QString& x1) const {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9183, x)) {
	    QUrlInfo *xptr = (QUrlInfo *)x[0].x_voidp;
	    QUrlInfo xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QUrlOperator::info(x1);
    }
    virtual void insertChild(QObject* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5433, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual bool isDir(bool* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 9179, x)) return (bool)x[0].x_bool;
	return this->QUrlOperator::isDir(x1);
    }
    virtual const QNetworkOperation* listChildren() {
	xargs x[1];
	if(call_method((void*)this, 9166, x)) 	return (const QNetworkOperation*)x[0].x_voidp;
	return this->QUrlOperator::listChildren();
    }
    virtual const QNetworkOperation* mkdir(const QString& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9167, x)) 	return (const QNetworkOperation*)x[0].x_voidp;
	return this->QUrlOperator::mkdir(x1);
    }
    virtual bool parse(const QString& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9198, x)) return (bool)x[0].x_bool;
	return this->QUrlOperator::parse(x1);
    }
    virtual QVariant property(const char* x1) const {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5447, x)) {
	    QVariant *xptr = (QVariant *)x[0].x_voidp;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QObject::property(x1);
    }
    virtual const QNetworkOperation* put(const QByteArray& x1, const QString& x2) {
	xargs x[3];
	x[1].x_voidp = (void*)&x1;
	x[2].x_voidp = (void*)&x2;
	if(call_method((void*)this, 9172, x)) 	return (const QNetworkOperation*)x[0].x_voidp;
	return this->QUrlOperator::put(x1, x2);
    }
    virtual const QNetworkOperation* remove(const QString& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9168, x)) 	return (const QNetworkOperation*)x[0].x_voidp;
	return this->QUrlOperator::remove(x1);
    }
    virtual void removeChild(QObject* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5434, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual const QNetworkOperation* rename(const QString& x1, const QString& x2) {
	xargs x[3];
	x[1].x_voidp = (void*)&x1;
	x[2].x_voidp = (void*)&x2;
	if(call_method((void*)this, 9169, x)) 	return (const QNetworkOperation*)x[0].x_voidp;
	return this->QUrlOperator::rename(x1, x2);
    }
    virtual void reset() {
	xargs x[1];
	if(call_method((void*)this, 9197, x)) return;
	this->QUrlOperator::reset();
    }
    virtual void setEncodedPathAndQuery(const QString& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9095, x)) return;
	this->QUrl::setEncodedPathAndQuery(x1);
    }
    virtual void setFileName(const QString& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9105, x)) return;
	this->QUrl::setFileName(x1);
    }
    virtual void setHost(const QString& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9086, x)) return;
	this->QUrl::setHost(x1);
    }
    virtual void setName(const char* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5416, x)) return;
	this->QObject::setName(x1);
    }
    virtual void setNameFilter(const QString& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9181, x)) return;
	this->QUrlOperator::setNameFilter(x1);
    }
    virtual void setPassword(const QString& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9083, x)) return;
	this->QUrl::setPassword(x1);
    }
    virtual void setPath(const QString& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9164, x)) return;
	this->QUrlOperator::setPath(x1);
    }
    virtual void setPort(int x1) {
	xargs x[2];
	x[1].x_int = (int)x1;
	if(call_method((void*)this, 9089, x)) return;
	this->QUrl::setPort(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	xargs x[3];
	x[1].x_voidp = (void*)x1;
	x[2].x_voidp = (void*)&x2;
	if(call_method((void*)this, 5446, x)) return (bool)x[0].x_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setProtocol(const QString& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9078, x)) return;
	this->QUrl::setProtocol(x1);
    }
    virtual void setQuery(const QString& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9097, x)) return;
	this->QUrl::setQuery(x1);
    }
    virtual void setRef(const QString& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9100, x)) return;
	this->QUrl::setRef(x1);
    }
    virtual void setUser(const QString& x1) {
	xargs x[2];
	x[1].x_voidp = (void*)&x1;
	if(call_method((void*)this, 9080, x)) return;
	this->QUrl::setUser(x1);
    }
    virtual void stop() {
	xargs x[1];
	if(call_method((void*)this, 9186, x)) return;
	this->QUrlOperator::stop();
    }
    virtual void timerEvent(QTimerEvent* x1) {
	xargs x[2];
	x[1].x_voidp = (void*)x1;
	if(call_method((void*)this, 5470, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual QString toString(bool x1, bool x2) const {
	xargs x[3];
	x[1].x_bool = (bool)x1;
	x[2].x_bool = (bool)x2;
	if(call_method((void*)this, 9113, x)) {
	    QString *xptr = (QString *)x[0].x_voidp;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QUrl::toString(x1, x2);
    }
    ~x_QUrlOperator() {}
};
void xcall_QUrlOperator(xargs *x, void *s, int xi) {
    x_QUrlOperator *xself = (x_QUrlOperator*)s;
    switch(xi) {
	case 0: x_QUrlOperator::x_0(x);	break;
	case 1: x_QUrlOperator::x_1(x);	break;
	case 2: x_QUrlOperator::x_2(x);	break;
	case 3: x_QUrlOperator::x_3(x);	break;
	case 4: x_QUrlOperator::x_4(x);	break;
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
	case 44: delete (QUrlOperator*)xself;	break;
    }
}
