//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qtextstream.h>
#include <qcstring.h>
#include <qstring.h>

class x_QTextStream : public QTextStream {
public:
    static void x_0(xargs *x) {
	x[0].x_long = (long)QTextStream::Locale;
    }
    static void x_1(xargs *x) {
	x[0].x_long = (long)QTextStream::Latin1;
    }
    static void x_2(xargs *x) {
	x[0].x_long = (long)QTextStream::Unicode;
    }
    static void x_3(xargs *x) {
	x[0].x_long = (long)QTextStream::UnicodeNetworkOrder;
    }
    static void x_4(xargs *x) {
	x[0].x_long = (long)QTextStream::UnicodeReverse;
    }
    static void x_5(xargs *x) {
	x[0].x_long = (long)QTextStream::RawUnicode;
    }
    static void x_6(xargs *x) {
	x[0].x_long = (long)QTextStream::UnicodeUTF8;
    }
    static void x_7(xargs *x) {
	x[0].x_long = (long)QTextStream::skipws;
    }
    static void x_8(xargs *x) {
	x[0].x_long = (long)QTextStream::left;
    }
    static void x_9(xargs *x) {
	x[0].x_long = (long)QTextStream::right;
    }
    static void x_10(xargs *x) {
	x[0].x_long = (long)QTextStream::internal;
    }
    static void x_11(xargs *x) {
	x[0].x_long = (long)QTextStream::bin;
    }
    static void x_12(xargs *x) {
	x[0].x_long = (long)QTextStream::oct;
    }
    static void x_13(xargs *x) {
	x[0].x_long = (long)QTextStream::dec;
    }
    static void x_14(xargs *x) {
	x[0].x_long = (long)QTextStream::hex;
    }
    static void x_15(xargs *x) {
	x[0].x_long = (long)QTextStream::showbase;
    }
    static void x_16(xargs *x) {
	x[0].x_long = (long)QTextStream::showpoint;
    }
    static void x_17(xargs *x) {
	x[0].x_long = (long)QTextStream::uppercase;
    }
    static void x_18(xargs *x) {
	x[0].x_long = (long)QTextStream::showpos;
    }
    static void x_19(xargs *x) {
	x[0].x_long = (long)QTextStream::scientific;
    }
    static void x_20(xargs *x) {
	x[0].x_long = (long)QTextStream::fixed;
    }
    void x_21(xargs *x) {
	// setEncoding(QTextStream::Encoding)
	this->QTextStream::setEncoding((QTextStream::Encoding)x[1].x_long);
    }
    void x_22(xargs *x) {
	// setCodec(QTextCodec*)
	this->QTextStream::setCodec((QTextCodec*)x[1].x_voidp);
    }
    static void x_23(xargs *x) {
	// QTextStream()
	x_QTextStream* xret = new x_QTextStream();
	x[0].x_voidp = (void*)xret;
    }
    x_QTextStream() : QTextStream() {
    }
    static void x_24(xargs *x) {
	// QTextStream(QIODevice*)
	x_QTextStream* xret = new x_QTextStream((QIODevice*)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QTextStream(QIODevice* x1) : QTextStream(x1) {
    }
    static void x_25(xargs *x) {
	// QTextStream(QString*, int)
	x_QTextStream* xret = new x_QTextStream((QString*)x[1].x_voidp,(int)x[2].x_int);
	x[0].x_voidp = (void*)xret;
    }
    x_QTextStream(QString* x1, int x2) : QTextStream(x1, x2) {
    }
    static void x_26(xargs *x) {
	// QTextStream(QString&, int)
	x_QTextStream* xret = new x_QTextStream(*(QString *)x[1].x_voidp,(int)x[2].x_int);
	x[0].x_voidp = (void*)xret;
    }
    x_QTextStream(QString& x1, int x2) : QTextStream(x1, x2) {
    }
    static void x_27(xargs *x) {
	// QTextStream(QByteArray, int)
	x_QTextStream* xret = new x_QTextStream(*(QByteArray *)x[1].x_voidp,(int)x[2].x_int);
	x[0].x_voidp = (void*)xret;
    }
    x_QTextStream(QByteArray x1, int x2) : QTextStream(x1, x2) {
    }
    static void x_28(xargs *x) {
	// QTextStream(FILE*, int)
	x_QTextStream* xret = new x_QTextStream((FILE*)x[1].x_voidp,(int)x[2].x_int);
	x[0].x_voidp = (void*)xret;
    }
    x_QTextStream(FILE* x1, int x2) : QTextStream(x1, x2) {
    }
    void x_29(xargs *x) const {
	// device()
	QIODevice* xret = this->QTextStream::device();
	x[0].x_voidp = (void*)xret;
    }
    void x_30(xargs *x) {
	// setDevice(QIODevice*)
	this->QTextStream::setDevice((QIODevice*)x[1].x_voidp);
    }
    void x_31(xargs *x) {
	// unsetDevice()
	this->QTextStream::unsetDevice();
    }
    void x_32(xargs *x) const {
	// atEnd()
	bool xret = this->QTextStream::atEnd();
	x[0].x_bool = (bool)xret;
    }
    void x_33(xargs *x) const {
	// eof()
	bool xret = this->QTextStream::eof();
	x[0].x_bool = (bool)xret;
    }
    void x_34(xargs *x) {
	// operator>>(QChar&)
	QTextStream& xret = this->QTextStream::operator>>(*(QChar *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_35(xargs *x) {
	// operator>>(char&)
	QTextStream& xret = this->QTextStream::operator>>(*(char *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_36(xargs *x) {
	// operator>>(signed short&)
	QTextStream& xret = this->QTextStream::operator>>(*(signed short *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_37(xargs *x) {
	// operator>>(unsigned short&)
	QTextStream& xret = this->QTextStream::operator>>(*(unsigned short *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_38(xargs *x) {
	// operator>>(signed int&)
	QTextStream& xret = this->QTextStream::operator>>(*(signed int *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_39(xargs *x) {
	// operator>>(unsigned int&)
	QTextStream& xret = this->QTextStream::operator>>(*(unsigned int *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_40(xargs *x) {
	// operator>>(signed long&)
	QTextStream& xret = this->QTextStream::operator>>(*(signed long *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_41(xargs *x) {
	// operator>>(unsigned long&)
	QTextStream& xret = this->QTextStream::operator>>(*(unsigned long *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_42(xargs *x) {
	// operator>>(float&)
	QTextStream& xret = this->QTextStream::operator>>(*(float *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_43(xargs *x) {
	// operator>>(double&)
	QTextStream& xret = this->QTextStream::operator>>(*(double *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_44(xargs *x) {
	// operator>>(char*)
	QTextStream& xret = this->QTextStream::operator>>((char*)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_45(xargs *x) {
	// operator>>(QString&)
	QTextStream& xret = this->QTextStream::operator>>(*(QString *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_46(xargs *x) {
	// operator>>(QCString&)
	QTextStream& xret = this->QTextStream::operator>>(*(QCString *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_47(xargs *x) {
	// operator<<(QChar)
	QTextStream& xret = this->QTextStream::operator<<(*(QChar *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_48(xargs *x) {
	// operator<<(char)
	QTextStream& xret = this->QTextStream::operator<<((char)x[1].x_char);
	x[0].x_voidp = (void*)&xret;
    }
    void x_49(xargs *x) {
	// operator<<(signed)
	QTextStream& xret = this->QTextStream::operator<<(*(signed *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_50(xargs *x) {
	// operator<<(unsigned)
	QTextStream& xret = this->QTextStream::operator<<(*(unsigned *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_51(xargs *x) {
	// operator<<(signed)
	QTextStream& xret = this->QTextStream::operator<<(*(signed *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_52(xargs *x) {
	// operator<<(unsigned)
	QTextStream& xret = this->QTextStream::operator<<(*(unsigned *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_53(xargs *x) {
	// operator<<(signed)
	QTextStream& xret = this->QTextStream::operator<<(*(signed *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_54(xargs *x) {
	// operator<<(unsigned)
	QTextStream& xret = this->QTextStream::operator<<(*(unsigned *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_55(xargs *x) {
	// operator<<(float)
	QTextStream& xret = this->QTextStream::operator<<((float)x[1].x_float);
	x[0].x_voidp = (void*)&xret;
    }
    void x_56(xargs *x) {
	// operator<<(double)
	QTextStream& xret = this->QTextStream::operator<<((double)x[1].x_double);
	x[0].x_voidp = (void*)&xret;
    }
    void x_57(xargs *x) {
	// operator<<(const char*)
	QTextStream& xret = this->QTextStream::operator<<((const char*)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_58(xargs *x) {
	// operator<<(const QString&)
	QTextStream& xret = this->QTextStream::operator<<(*(const QString *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_59(xargs *x) {
	// operator<<(const QCString&)
	QTextStream& xret = this->QTextStream::operator<<(*(const QCString *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_60(xargs *x) {
	// operator<<(void*)
	QTextStream& xret = this->QTextStream::operator<<((void*)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_61(xargs *x) {
	// readRawBytes(char*, uint)
	QTextStream& xret = this->QTextStream::readRawBytes((char*)x[1].x_voidp,(uint)x[2].x_uint);
	x[0].x_voidp = (void*)&xret;
    }
    void x_62(xargs *x) {
	// writeRawBytes(const char*, uint)
	QTextStream& xret = this->QTextStream::writeRawBytes((const char*)x[1].x_voidp,(uint)x[2].x_uint);
	x[0].x_voidp = (void*)&xret;
    }
    void x_63(xargs *x) {
	// readLine()
	QString xret = this->QTextStream::readLine();
	x[0].x_voidp = (void*)new QString(xret);
    }
    void x_64(xargs *x) {
	// read()
	QString xret = this->QTextStream::read();
	x[0].x_voidp = (void*)new QString(xret);
    }
    void x_65(xargs *x) {
	// skipWhiteSpace()
	this->QTextStream::skipWhiteSpace();
    }
    void x_66(xargs *x) const {
	// flags()
	int xret = this->QTextStream::flags();
	x[0].x_int = (int)xret;
    }
    void x_67(xargs *x) {
	// flags(int)
	int xret = this->QTextStream::flags((int)x[1].x_int);
	x[0].x_int = (int)xret;
    }
    void x_68(xargs *x) {
	// setf(int)
	int xret = this->QTextStream::setf((int)x[1].x_int);
	x[0].x_int = (int)xret;
    }
    void x_69(xargs *x) {
	// setf(int, int)
	int xret = this->QTextStream::setf((int)x[1].x_int,(int)x[2].x_int);
	x[0].x_int = (int)xret;
    }
    void x_70(xargs *x) {
	// unsetf(int)
	int xret = this->QTextStream::unsetf((int)x[1].x_int);
	x[0].x_int = (int)xret;
    }
    void x_71(xargs *x) {
	// reset()
	this->QTextStream::reset();
    }
    void x_72(xargs *x) const {
	// width()
	int xret = this->QTextStream::width();
	x[0].x_int = (int)xret;
    }
    void x_73(xargs *x) {
	// width(int)
	int xret = this->QTextStream::width((int)x[1].x_int);
	x[0].x_int = (int)xret;
    }
    void x_74(xargs *x) const {
	// fill()
	int xret = this->QTextStream::fill();
	x[0].x_int = (int)xret;
    }
    void x_75(xargs *x) {
	// fill(int)
	int xret = this->QTextStream::fill((int)x[1].x_int);
	x[0].x_int = (int)xret;
    }
    void x_76(xargs *x) const {
	// precision()
	int xret = this->QTextStream::precision();
	x[0].x_int = (int)xret;
    }
    void x_77(xargs *x) {
	// precision(int)
	int xret = this->QTextStream::precision((int)x[1].x_int);
	x[0].x_int = (int)xret;
    }
    ~x_QTextStream() {}
};
void xcall_QTextStream(xargs *x, void *s, int xi) {
    x_QTextStream *xself = (x_QTextStream*)s;
    switch(xi) {
	case 0: x_QTextStream::x_0(x);	break;
	case 1: x_QTextStream::x_1(x);	break;
	case 2: x_QTextStream::x_2(x);	break;
	case 3: x_QTextStream::x_3(x);	break;
	case 4: x_QTextStream::x_4(x);	break;
	case 5: x_QTextStream::x_5(x);	break;
	case 6: x_QTextStream::x_6(x);	break;
	case 7: x_QTextStream::x_7(x);	break;
	case 8: x_QTextStream::x_8(x);	break;
	case 9: x_QTextStream::x_9(x);	break;
	case 10: x_QTextStream::x_10(x);	break;
	case 11: x_QTextStream::x_11(x);	break;
	case 12: x_QTextStream::x_12(x);	break;
	case 13: x_QTextStream::x_13(x);	break;
	case 14: x_QTextStream::x_14(x);	break;
	case 15: x_QTextStream::x_15(x);	break;
	case 16: x_QTextStream::x_16(x);	break;
	case 17: x_QTextStream::x_17(x);	break;
	case 18: x_QTextStream::x_18(x);	break;
	case 19: x_QTextStream::x_19(x);	break;
	case 20: x_QTextStream::x_20(x);	break;
	case 21: xself->x_21(x);	break;
	case 22: xself->x_22(x);	break;
	case 23: x_QTextStream::x_23(x);	break;
	case 24: x_QTextStream::x_24(x);	break;
	case 25: x_QTextStream::x_25(x);	break;
	case 26: x_QTextStream::x_26(x);	break;
	case 27: x_QTextStream::x_27(x);	break;
	case 28: x_QTextStream::x_28(x);	break;
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
	case 59: xself->x_59(x);	break;
	case 60: xself->x_60(x);	break;
	case 61: xself->x_61(x);	break;
	case 62: xself->x_62(x);	break;
	case 63: xself->x_63(x);	break;
	case 64: xself->x_64(x);	break;
	case 65: xself->x_65(x);	break;
	case 66: xself->x_66(x);	break;
	case 67: xself->x_67(x);	break;
	case 68: xself->x_68(x);	break;
	case 69: xself->x_69(x);	break;
	case 70: xself->x_70(x);	break;
	case 71: xself->x_71(x);	break;
	case 72: xself->x_72(x);	break;
	case 73: xself->x_73(x);	break;
	case 74: xself->x_74(x);	break;
	case 75: xself->x_75(x);	break;
	case 76: xself->x_76(x);	break;
	case 77: xself->x_77(x);	break;
	case 78: delete (QTextStream*)xself;	break;
    }
}
