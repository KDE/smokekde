//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qimage.h>
#include <qkeysequence.h>
#include <qcursor.h>
#include <qiconset.h>
#include <qcolor.h>
#include <qbitarray.h>
#include <qstring.h>
#include <qpointarray.h>
#include <qsize.h>
#include <qvariant.h>
#include <qregion.h>
#include <qdatastream.h>
#include <qbrush.h>
#include <qstringlist.h>
#include <qpoint.h>
#include <qcstring.h>
#include <qfont.h>
#include <qbitmap.h>
#include <qsizepolicy.h>
#include <qpalette.h>
#include <qdatetime.h>
#include <qpixmap.h>
#include <qrect.h>

class x_QVariant : public QVariant {
public:
    static void x_0(xargs *x) {
	x[0].x_long = (long)QVariant::Invalid;
    }
    static void x_1(xargs *x) {
	x[0].x_long = (long)QVariant::Map;
    }
    static void x_2(xargs *x) {
	x[0].x_long = (long)QVariant::List;
    }
    static void x_3(xargs *x) {
	x[0].x_long = (long)QVariant::String;
    }
    static void x_4(xargs *x) {
	x[0].x_long = (long)QVariant::StringList;
    }
    static void x_5(xargs *x) {
	x[0].x_long = (long)QVariant::Font;
    }
    static void x_6(xargs *x) {
	x[0].x_long = (long)QVariant::Pixmap;
    }
    static void x_7(xargs *x) {
	x[0].x_long = (long)QVariant::Brush;
    }
    static void x_8(xargs *x) {
	x[0].x_long = (long)QVariant::Rect;
    }
    static void x_9(xargs *x) {
	x[0].x_long = (long)QVariant::Size;
    }
    static void x_10(xargs *x) {
	x[0].x_long = (long)QVariant::Color;
    }
    static void x_11(xargs *x) {
	x[0].x_long = (long)QVariant::Palette;
    }
    static void x_12(xargs *x) {
	x[0].x_long = (long)QVariant::ColorGroup;
    }
    static void x_13(xargs *x) {
	x[0].x_long = (long)QVariant::IconSet;
    }
    static void x_14(xargs *x) {
	x[0].x_long = (long)QVariant::Point;
    }
    static void x_15(xargs *x) {
	x[0].x_long = (long)QVariant::Image;
    }
    static void x_16(xargs *x) {
	x[0].x_long = (long)QVariant::Int;
    }
    static void x_17(xargs *x) {
	x[0].x_long = (long)QVariant::UInt;
    }
    static void x_18(xargs *x) {
	x[0].x_long = (long)QVariant::Bool;
    }
    static void x_19(xargs *x) {
	x[0].x_long = (long)QVariant::Double;
    }
    static void x_20(xargs *x) {
	x[0].x_long = (long)QVariant::CString;
    }
    static void x_21(xargs *x) {
	x[0].x_long = (long)QVariant::PointArray;
    }
    static void x_22(xargs *x) {
	x[0].x_long = (long)QVariant::Region;
    }
    static void x_23(xargs *x) {
	x[0].x_long = (long)QVariant::Bitmap;
    }
    static void x_24(xargs *x) {
	x[0].x_long = (long)QVariant::Cursor;
    }
    static void x_25(xargs *x) {
	x[0].x_long = (long)QVariant::SizePolicy;
    }
    static void x_26(xargs *x) {
	x[0].x_long = (long)QVariant::Date;
    }
    static void x_27(xargs *x) {
	x[0].x_long = (long)QVariant::Time;
    }
    static void x_28(xargs *x) {
	x[0].x_long = (long)QVariant::DateTime;
    }
    static void x_29(xargs *x) {
	x[0].x_long = (long)QVariant::ByteArray;
    }
    static void x_30(xargs *x) {
	x[0].x_long = (long)QVariant::BitArray;
    }
    static void x_31(xargs *x) {
	x[0].x_long = (long)QVariant::KeySequence;
    }
    static void x_32(xargs *x) {
	// QVariant()
	x_QVariant* xret = new x_QVariant();
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant() : QVariant() {
    }
    static void x_33(xargs *x) {
	// QVariant(const QVariant&)
	x_QVariant* xret = new x_QVariant(*(const QVariant *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QVariant& x1) : QVariant(x1) {
    }
    static void x_34(xargs *x) {
	// QVariant(QDataStream&)
	x_QVariant* xret = new x_QVariant(*(QDataStream *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(QDataStream& x1) : QVariant(x1) {
    }
    static void x_35(xargs *x) {
	// QVariant(const QString&)
	x_QVariant* xret = new x_QVariant(*(const QString *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QString& x1) : QVariant(x1) {
    }
    static void x_36(xargs *x) {
	// QVariant(const QCString&)
	x_QVariant* xret = new x_QVariant(*(const QCString *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QCString& x1) : QVariant(x1) {
    }
    static void x_37(xargs *x) {
	// QVariant(const char*)
	x_QVariant* xret = new x_QVariant((const char*)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const char* x1) : QVariant(x1) {
    }
    static void x_38(xargs *x) {
	// QVariant(const QStringList&)
	x_QVariant* xret = new x_QVariant(*(const QStringList *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QStringList& x1) : QVariant(x1) {
    }
    static void x_39(xargs *x) {
	// QVariant(const QFont&)
	x_QVariant* xret = new x_QVariant(*(const QFont *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QFont& x1) : QVariant(x1) {
    }
    static void x_40(xargs *x) {
	// QVariant(const QPixmap&)
	x_QVariant* xret = new x_QVariant(*(const QPixmap *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QPixmap& x1) : QVariant(x1) {
    }
    static void x_41(xargs *x) {
	// QVariant(const QImage&)
	x_QVariant* xret = new x_QVariant(*(const QImage *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QImage& x1) : QVariant(x1) {
    }
    static void x_42(xargs *x) {
	// QVariant(const QBrush&)
	x_QVariant* xret = new x_QVariant(*(const QBrush *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QBrush& x1) : QVariant(x1) {
    }
    static void x_43(xargs *x) {
	// QVariant(const QPoint&)
	x_QVariant* xret = new x_QVariant(*(const QPoint *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QPoint& x1) : QVariant(x1) {
    }
    static void x_44(xargs *x) {
	// QVariant(const QRect&)
	x_QVariant* xret = new x_QVariant(*(const QRect *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QRect& x1) : QVariant(x1) {
    }
    static void x_45(xargs *x) {
	// QVariant(const QSize&)
	x_QVariant* xret = new x_QVariant(*(const QSize *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QSize& x1) : QVariant(x1) {
    }
    static void x_46(xargs *x) {
	// QVariant(const QColor&)
	x_QVariant* xret = new x_QVariant(*(const QColor *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QColor& x1) : QVariant(x1) {
    }
    static void x_47(xargs *x) {
	// QVariant(const QPalette&)
	x_QVariant* xret = new x_QVariant(*(const QPalette *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QPalette& x1) : QVariant(x1) {
    }
    static void x_48(xargs *x) {
	// QVariant(const QColorGroup&)
	x_QVariant* xret = new x_QVariant(*(const QColorGroup *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QColorGroup& x1) : QVariant(x1) {
    }
    static void x_49(xargs *x) {
	// QVariant(const QIconSet&)
	x_QVariant* xret = new x_QVariant(*(const QIconSet *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QIconSet& x1) : QVariant(x1) {
    }
    static void x_50(xargs *x) {
	// QVariant(const QPointArray&)
	x_QVariant* xret = new x_QVariant(*(const QPointArray *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QPointArray& x1) : QVariant(x1) {
    }
    static void x_51(xargs *x) {
	// QVariant(const QRegion&)
	x_QVariant* xret = new x_QVariant(*(const QRegion *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QRegion& x1) : QVariant(x1) {
    }
    static void x_52(xargs *x) {
	// QVariant(const QBitmap&)
	x_QVariant* xret = new x_QVariant(*(const QBitmap *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QBitmap& x1) : QVariant(x1) {
    }
    static void x_53(xargs *x) {
	// QVariant(const QCursor&)
	x_QVariant* xret = new x_QVariant(*(const QCursor *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QCursor& x1) : QVariant(x1) {
    }
    static void x_54(xargs *x) {
	// QVariant(const QDate&)
	x_QVariant* xret = new x_QVariant(*(const QDate *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QDate& x1) : QVariant(x1) {
    }
    static void x_55(xargs *x) {
	// QVariant(const QTime&)
	x_QVariant* xret = new x_QVariant(*(const QTime *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QTime& x1) : QVariant(x1) {
    }
    static void x_56(xargs *x) {
	// QVariant(const QDateTime&)
	x_QVariant* xret = new x_QVariant(*(const QDateTime *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QDateTime& x1) : QVariant(x1) {
    }
    static void x_57(xargs *x) {
	// QVariant(const QByteArray&)
	x_QVariant* xret = new x_QVariant(*(const QByteArray *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QByteArray& x1) : QVariant(x1) {
    }
    static void x_58(xargs *x) {
	// QVariant(const QBitArray&)
	x_QVariant* xret = new x_QVariant(*(const QBitArray *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QBitArray& x1) : QVariant(x1) {
    }
    static void x_59(xargs *x) {
	// QVariant(const QKeySequence&)
	x_QVariant* xret = new x_QVariant(*(const QKeySequence *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QKeySequence& x1) : QVariant(x1) {
    }
    static void x_60(xargs *x) {
	// QVariant(const QValueList<QVariant>&)
	x_QVariant* xret = new x_QVariant(*(const QValueList<QVariant> *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QValueList<QVariant>& x1) : QVariant(x1) {
    }
    static void x_61(xargs *x) {
	// QVariant(const QMap<QString, QVariant>&)
	x_QVariant* xret = new x_QVariant(*(const QMap<QString, QVariant> *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(const QMap<QString, QVariant>& x1) : QVariant(x1) {
    }
    static void x_62(xargs *x) {
	// QVariant(int)
	x_QVariant* xret = new x_QVariant((int)x[1].x_int);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(int x1) : QVariant(x1) {
    }
    static void x_63(xargs *x) {
	// QVariant(uint)
	x_QVariant* xret = new x_QVariant((uint)x[1].x_uint);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(uint x1) : QVariant(x1) {
    }
    static void x_64(xargs *x) {
	// QVariant(bool, int)
	x_QVariant* xret = new x_QVariant((bool)x[1].x_bool,(int)x[2].x_int);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(bool x1, int x2) : QVariant(x1, x2) {
    }
    static void x_65(xargs *x) {
	// QVariant(double)
	x_QVariant* xret = new x_QVariant((double)x[1].x_double);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(double x1) : QVariant(x1) {
    }
    static void x_66(xargs *x) {
	// QVariant(QSizePolicy)
	x_QVariant* xret = new x_QVariant(*(QSizePolicy *)x[1].x_voidp);
	x[0].x_voidp = (void*)xret;
    }
    x_QVariant(QSizePolicy x1) : QVariant(x1) {
    }
    void x_67(xargs *x) {
	// operator=(const QVariant&)
	QVariant& xret = this->QVariant::operator=(*(const QVariant *)x[1].x_voidp);
	x[0].x_voidp = (void*)&xret;
    }
    void x_68(xargs *x) const {
	// operator==(const QVariant&)
	bool xret = this->QVariant::operator==(*(const QVariant *)x[1].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_69(xargs *x) const {
	// operator!=(const QVariant&)
	bool xret = this->QVariant::operator!=(*(const QVariant *)x[1].x_voidp);
	x[0].x_bool = (bool)xret;
    }
    void x_70(xargs *x) const {
	// type()
	QVariant::Type xret = this->QVariant::type();
	x[0].x_long = (long)xret;
    }
    void x_71(xargs *x) const {
	// typeName()
	const char* xret = this->QVariant::typeName();
	x[0].x_voidp = (void*)xret;
    }
    void x_72(xargs *x) const {
	// canCast(QVariant::Type)
	bool xret = this->QVariant::canCast((QVariant::Type)x[1].x_long);
	x[0].x_bool = (bool)xret;
    }
    void x_73(xargs *x) {
	// cast(QVariant::Type)
	bool xret = this->QVariant::cast((QVariant::Type)x[1].x_long);
	x[0].x_bool = (bool)xret;
    }
    void x_74(xargs *x) const {
	// isValid()
	bool xret = this->QVariant::isValid();
	x[0].x_bool = (bool)xret;
    }
    void x_75(xargs *x) {
	// clear()
	this->QVariant::clear();
    }
    void x_76(xargs *x) const {
	// toString()
	const QString xret = this->QVariant::toString();
	x[0].x_voidp = (void*)new QString(xret);
    }
    void x_77(xargs *x) const {
	// toCString()
	const QCString xret = this->QVariant::toCString();
	x[0].x_voidp = (void*)new QCString(xret);
    }
    void x_78(xargs *x) const {
	// toStringList()
	const QStringList xret = this->QVariant::toStringList();
	x[0].x_voidp = (void*)new QStringList(xret);
    }
    void x_79(xargs *x) const {
	// toFont()
	const QFont xret = this->QVariant::toFont();
	x[0].x_voidp = (void*)new QFont(xret);
    }
    void x_80(xargs *x) const {
	// toPixmap()
	const QPixmap xret = this->QVariant::toPixmap();
	x[0].x_voidp = (void*)new QPixmap(xret);
    }
    void x_81(xargs *x) const {
	// toImage()
	const QImage xret = this->QVariant::toImage();
	x[0].x_voidp = (void*)new QImage(xret);
    }
    void x_82(xargs *x) const {
	// toBrush()
	const QBrush xret = this->QVariant::toBrush();
	x[0].x_voidp = (void*)new QBrush(xret);
    }
    void x_83(xargs *x) const {
	// toPoint()
	const QPoint xret = this->QVariant::toPoint();
	x[0].x_voidp = (void*)new QPoint(xret);
    }
    void x_84(xargs *x) const {
	// toRect()
	const QRect xret = this->QVariant::toRect();
	x[0].x_voidp = (void*)new QRect(xret);
    }
    void x_85(xargs *x) const {
	// toSize()
	const QSize xret = this->QVariant::toSize();
	x[0].x_voidp = (void*)new QSize(xret);
    }
    void x_86(xargs *x) const {
	// toColor()
	const QColor xret = this->QVariant::toColor();
	x[0].x_voidp = (void*)new QColor(xret);
    }
    void x_87(xargs *x) const {
	// toPalette()
	const QPalette xret = this->QVariant::toPalette();
	x[0].x_voidp = (void*)new QPalette(xret);
    }
    void x_88(xargs *x) const {
	// toColorGroup()
	const QColorGroup xret = this->QVariant::toColorGroup();
	x[0].x_voidp = (void*)new QColorGroup(xret);
    }
    void x_89(xargs *x) const {
	// toIconSet()
	const QIconSet xret = this->QVariant::toIconSet();
	x[0].x_voidp = (void*)new QIconSet(xret);
    }
    void x_90(xargs *x) const {
	// toPointArray()
	const QPointArray xret = this->QVariant::toPointArray();
	x[0].x_voidp = (void*)new QPointArray(xret);
    }
    void x_91(xargs *x) const {
	// toBitmap()
	const QBitmap xret = this->QVariant::toBitmap();
	x[0].x_voidp = (void*)new QBitmap(xret);
    }
    void x_92(xargs *x) const {
	// toRegion()
	const QRegion xret = this->QVariant::toRegion();
	x[0].x_voidp = (void*)new QRegion(xret);
    }
    void x_93(xargs *x) const {
	// toCursor()
	const QCursor xret = this->QVariant::toCursor();
	x[0].x_voidp = (void*)new QCursor(xret);
    }
    void x_94(xargs *x) const {
	// toDate()
	const QDate xret = this->QVariant::toDate();
	x[0].x_voidp = (void*)new QDate(xret);
    }
    void x_95(xargs *x) const {
	// toTime()
	const QTime xret = this->QVariant::toTime();
	x[0].x_voidp = (void*)new QTime(xret);
    }
    void x_96(xargs *x) const {
	// toDateTime()
	const QDateTime xret = this->QVariant::toDateTime();
	x[0].x_voidp = (void*)new QDateTime(xret);
    }
    void x_97(xargs *x) const {
	// toByteArray()
	const QByteArray xret = this->QVariant::toByteArray();
	x[0].x_voidp = (void*)new QByteArray(xret);
    }
    void x_98(xargs *x) const {
	// toBitArray()
	const QBitArray xret = this->QVariant::toBitArray();
	x[0].x_voidp = (void*)new QBitArray(xret);
    }
    void x_99(xargs *x) const {
	// toKeySequence()
	const QKeySequence xret = this->QVariant::toKeySequence();
	x[0].x_voidp = (void*)new QKeySequence(xret);
    }
    void x_100(xargs *x) const {
	// toInt(bool*)
	int xret = this->QVariant::toInt((bool*)x[1].x_voidp);
	x[0].x_int = (int)xret;
    }
    void x_101(xargs *x) const {
	// toInt()
	int xret = this->QVariant::toInt();
	x[0].x_int = (int)xret;
    }
    void x_102(xargs *x) const {
	// toUInt(bool*)
	uint xret = this->QVariant::toUInt((bool*)x[1].x_voidp);
	x[0].x_uint = (uint)xret;
    }
    void x_103(xargs *x) const {
	// toUInt()
	uint xret = this->QVariant::toUInt();
	x[0].x_uint = (uint)xret;
    }
    void x_104(xargs *x) const {
	// toBool()
	bool xret = this->QVariant::toBool();
	x[0].x_bool = (bool)xret;
    }
    void x_105(xargs *x) const {
	// toDouble(bool*)
	double xret = this->QVariant::toDouble((bool*)x[1].x_voidp);
	x[0].x_double = (double)xret;
    }
    void x_106(xargs *x) const {
	// toDouble()
	double xret = this->QVariant::toDouble();
	x[0].x_double = (double)xret;
    }
    void x_107(xargs *x) const {
	// toList()
	const QValueList<QVariant> xret = this->QVariant::toList();
	x[0].x_voidp = (void*)new QValueList<QVariant>(xret);
    }
    void x_108(xargs *x) const {
	// toMap()
	const QMap<QString,QVariant> xret = this->QVariant::toMap();
	x[0].x_voidp = (void*)new QMap<QString,QVariant>(xret);
    }
    void x_109(xargs *x) const {
	// toSizePolicy()
	QSizePolicy xret = this->QVariant::toSizePolicy();
	x[0].x_voidp = (void*)new QSizePolicy(xret);
    }
    void x_110(xargs *x) const {
	// stringListBegin()
	QValueListConstIterator<QString> xret = this->QVariant::stringListBegin();
	x[0].x_voidp = (void*)new QValueListConstIterator<QString>(xret);
    }
    void x_111(xargs *x) const {
	// stringListEnd()
	QValueListConstIterator<QString> xret = this->QVariant::stringListEnd();
	x[0].x_voidp = (void*)new QValueListConstIterator<QString>(xret);
    }
    void x_112(xargs *x) const {
	// listBegin()
	QValueListConstIterator<QVariant> xret = this->QVariant::listBegin();
	x[0].x_voidp = (void*)new QValueListConstIterator<QVariant>(xret);
    }
    void x_113(xargs *x) const {
	// listEnd()
	QValueListConstIterator<QVariant> xret = this->QVariant::listEnd();
	x[0].x_voidp = (void*)new QValueListConstIterator<QVariant>(xret);
    }
    void x_114(xargs *x) const {
	// mapBegin()
	QMapConstIterator<QString,QVariant> xret = this->QVariant::mapBegin();
	x[0].x_voidp = (void*)new QMapConstIterator<QString,QVariant>(xret);
    }
    void x_115(xargs *x) const {
	// mapEnd()
	QMapConstIterator<QString,QVariant> xret = this->QVariant::mapEnd();
	x[0].x_voidp = (void*)new QMapConstIterator<QString,QVariant>(xret);
    }
    void x_116(xargs *x) const {
	// mapFind(const QString&)
	QMapConstIterator<QString,QVariant> xret = this->QVariant::mapFind(*(const QString *)x[1].x_voidp);
	x[0].x_voidp = (void*)new QMapConstIterator<QString,QVariant>(xret);
    }
    void x_117(xargs *x) {
	// asString()
	QString& xret = this->QVariant::asString();
	x[0].x_voidp = (void*)&xret;
    }
    void x_118(xargs *x) {
	// asCString()
	QCString& xret = this->QVariant::asCString();
	x[0].x_voidp = (void*)&xret;
    }
    void x_119(xargs *x) {
	// asStringList()
	QStringList& xret = this->QVariant::asStringList();
	x[0].x_voidp = (void*)&xret;
    }
    void x_120(xargs *x) {
	// asFont()
	QFont& xret = this->QVariant::asFont();
	x[0].x_voidp = (void*)&xret;
    }
    void x_121(xargs *x) {
	// asPixmap()
	QPixmap& xret = this->QVariant::asPixmap();
	x[0].x_voidp = (void*)&xret;
    }
    void x_122(xargs *x) {
	// asImage()
	QImage& xret = this->QVariant::asImage();
	x[0].x_voidp = (void*)&xret;
    }
    void x_123(xargs *x) {
	// asBrush()
	QBrush& xret = this->QVariant::asBrush();
	x[0].x_voidp = (void*)&xret;
    }
    void x_124(xargs *x) {
	// asPoint()
	QPoint& xret = this->QVariant::asPoint();
	x[0].x_voidp = (void*)&xret;
    }
    void x_125(xargs *x) {
	// asRect()
	QRect& xret = this->QVariant::asRect();
	x[0].x_voidp = (void*)&xret;
    }
    void x_126(xargs *x) {
	// asSize()
	QSize& xret = this->QVariant::asSize();
	x[0].x_voidp = (void*)&xret;
    }
    void x_127(xargs *x) {
	// asColor()
	QColor& xret = this->QVariant::asColor();
	x[0].x_voidp = (void*)&xret;
    }
    void x_128(xargs *x) {
	// asPalette()
	QPalette& xret = this->QVariant::asPalette();
	x[0].x_voidp = (void*)&xret;
    }
    void x_129(xargs *x) {
	// asColorGroup()
	QColorGroup& xret = this->QVariant::asColorGroup();
	x[0].x_voidp = (void*)&xret;
    }
    void x_130(xargs *x) {
	// asIconSet()
	QIconSet& xret = this->QVariant::asIconSet();
	x[0].x_voidp = (void*)&xret;
    }
    void x_131(xargs *x) {
	// asPointArray()
	QPointArray& xret = this->QVariant::asPointArray();
	x[0].x_voidp = (void*)&xret;
    }
    void x_132(xargs *x) {
	// asBitmap()
	QBitmap& xret = this->QVariant::asBitmap();
	x[0].x_voidp = (void*)&xret;
    }
    void x_133(xargs *x) {
	// asRegion()
	QRegion& xret = this->QVariant::asRegion();
	x[0].x_voidp = (void*)&xret;
    }
    void x_134(xargs *x) {
	// asCursor()
	QCursor& xret = this->QVariant::asCursor();
	x[0].x_voidp = (void*)&xret;
    }
    void x_135(xargs *x) {
	// asDate()
	QDate& xret = this->QVariant::asDate();
	x[0].x_voidp = (void*)&xret;
    }
    void x_136(xargs *x) {
	// asTime()
	QTime& xret = this->QVariant::asTime();
	x[0].x_voidp = (void*)&xret;
    }
    void x_137(xargs *x) {
	// asDateTime()
	QDateTime& xret = this->QVariant::asDateTime();
	x[0].x_voidp = (void*)&xret;
    }
    void x_138(xargs *x) {
	// asByteArray()
	QByteArray& xret = this->QVariant::asByteArray();
	x[0].x_voidp = (void*)&xret;
    }
    void x_139(xargs *x) {
	// asBitArray()
	QBitArray& xret = this->QVariant::asBitArray();
	x[0].x_voidp = (void*)&xret;
    }
    void x_140(xargs *x) {
	// asKeySequence()
	QKeySequence& xret = this->QVariant::asKeySequence();
	x[0].x_voidp = (void*)&xret;
    }
    void x_141(xargs *x) {
	// asInt()
	int& xret = this->QVariant::asInt();
	x[0].x_voidp = (void*)&xret;
    }
    void x_142(xargs *x) {
	// asUInt()
	uint& xret = this->QVariant::asUInt();
	x[0].x_voidp = (void*)&xret;
    }
    void x_143(xargs *x) {
	// asBool()
	bool& xret = this->QVariant::asBool();
	x[0].x_voidp = (void*)&xret;
    }
    void x_144(xargs *x) {
	// asDouble()
	double& xret = this->QVariant::asDouble();
	x[0].x_voidp = (void*)&xret;
    }
    void x_145(xargs *x) {
	// asList()
	QValueList<QVariant>& xret = this->QVariant::asList();
	x[0].x_voidp = (void*)&xret;
    }
    void x_146(xargs *x) {
	// asMap()
	QMap<QString,QVariant>& xret = this->QVariant::asMap();
	x[0].x_voidp = (void*)&xret;
    }
    void x_147(xargs *x) {
	// asSizePolicy()
	QSizePolicy& xret = this->QVariant::asSizePolicy();
	x[0].x_voidp = (void*)&xret;
    }
    void x_148(xargs *x) {
	// load(QDataStream&)
	this->QVariant::load(*(QDataStream *)x[1].x_voidp);
    }
    void x_149(xargs *x) const {
	// save(QDataStream&)
	this->QVariant::save(*(QDataStream *)x[1].x_voidp);
    }
    static void x_150(xargs *x) {
	// typeToName(QVariant::Type)
	const char* xret = QVariant::typeToName((QVariant::Type)x[1].x_long);
	x[0].x_voidp = (void*)xret;
    }
    static void x_151(xargs *x) {
	// nameToType(const char*)
	QVariant::Type xret = QVariant::nameToType((const char*)x[1].x_voidp);
	x[0].x_long = (long)xret;
    }
    ~x_QVariant() {}
};
void xcall_QVariant(xargs *x, void *s, int xi) {
    x_QVariant *xself = (x_QVariant*)s;
    switch(xi) {
	case 0: x_QVariant::x_0(x);	break;
	case 1: x_QVariant::x_1(x);	break;
	case 2: x_QVariant::x_2(x);	break;
	case 3: x_QVariant::x_3(x);	break;
	case 4: x_QVariant::x_4(x);	break;
	case 5: x_QVariant::x_5(x);	break;
	case 6: x_QVariant::x_6(x);	break;
	case 7: x_QVariant::x_7(x);	break;
	case 8: x_QVariant::x_8(x);	break;
	case 9: x_QVariant::x_9(x);	break;
	case 10: x_QVariant::x_10(x);	break;
	case 11: x_QVariant::x_11(x);	break;
	case 12: x_QVariant::x_12(x);	break;
	case 13: x_QVariant::x_13(x);	break;
	case 14: x_QVariant::x_14(x);	break;
	case 15: x_QVariant::x_15(x);	break;
	case 16: x_QVariant::x_16(x);	break;
	case 17: x_QVariant::x_17(x);	break;
	case 18: x_QVariant::x_18(x);	break;
	case 19: x_QVariant::x_19(x);	break;
	case 20: x_QVariant::x_20(x);	break;
	case 21: x_QVariant::x_21(x);	break;
	case 22: x_QVariant::x_22(x);	break;
	case 23: x_QVariant::x_23(x);	break;
	case 24: x_QVariant::x_24(x);	break;
	case 25: x_QVariant::x_25(x);	break;
	case 26: x_QVariant::x_26(x);	break;
	case 27: x_QVariant::x_27(x);	break;
	case 28: x_QVariant::x_28(x);	break;
	case 29: x_QVariant::x_29(x);	break;
	case 30: x_QVariant::x_30(x);	break;
	case 31: x_QVariant::x_31(x);	break;
	case 32: x_QVariant::x_32(x);	break;
	case 33: x_QVariant::x_33(x);	break;
	case 34: x_QVariant::x_34(x);	break;
	case 35: x_QVariant::x_35(x);	break;
	case 36: x_QVariant::x_36(x);	break;
	case 37: x_QVariant::x_37(x);	break;
	case 38: x_QVariant::x_38(x);	break;
	case 39: x_QVariant::x_39(x);	break;
	case 40: x_QVariant::x_40(x);	break;
	case 41: x_QVariant::x_41(x);	break;
	case 42: x_QVariant::x_42(x);	break;
	case 43: x_QVariant::x_43(x);	break;
	case 44: x_QVariant::x_44(x);	break;
	case 45: x_QVariant::x_45(x);	break;
	case 46: x_QVariant::x_46(x);	break;
	case 47: x_QVariant::x_47(x);	break;
	case 48: x_QVariant::x_48(x);	break;
	case 49: x_QVariant::x_49(x);	break;
	case 50: x_QVariant::x_50(x);	break;
	case 51: x_QVariant::x_51(x);	break;
	case 52: x_QVariant::x_52(x);	break;
	case 53: x_QVariant::x_53(x);	break;
	case 54: x_QVariant::x_54(x);	break;
	case 55: x_QVariant::x_55(x);	break;
	case 56: x_QVariant::x_56(x);	break;
	case 57: x_QVariant::x_57(x);	break;
	case 58: x_QVariant::x_58(x);	break;
	case 59: x_QVariant::x_59(x);	break;
	case 60: x_QVariant::x_60(x);	break;
	case 61: x_QVariant::x_61(x);	break;
	case 62: x_QVariant::x_62(x);	break;
	case 63: x_QVariant::x_63(x);	break;
	case 64: x_QVariant::x_64(x);	break;
	case 65: x_QVariant::x_65(x);	break;
	case 66: x_QVariant::x_66(x);	break;
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
	case 78: xself->x_78(x);	break;
	case 79: xself->x_79(x);	break;
	case 80: xself->x_80(x);	break;
	case 81: xself->x_81(x);	break;
	case 82: xself->x_82(x);	break;
	case 83: xself->x_83(x);	break;
	case 84: xself->x_84(x);	break;
	case 85: xself->x_85(x);	break;
	case 86: xself->x_86(x);	break;
	case 87: xself->x_87(x);	break;
	case 88: xself->x_88(x);	break;
	case 89: xself->x_89(x);	break;
	case 90: xself->x_90(x);	break;
	case 91: xself->x_91(x);	break;
	case 92: xself->x_92(x);	break;
	case 93: xself->x_93(x);	break;
	case 94: xself->x_94(x);	break;
	case 95: xself->x_95(x);	break;
	case 96: xself->x_96(x);	break;
	case 97: xself->x_97(x);	break;
	case 98: xself->x_98(x);	break;
	case 99: xself->x_99(x);	break;
	case 100: xself->x_100(x);	break;
	case 101: xself->x_101(x);	break;
	case 102: xself->x_102(x);	break;
	case 103: xself->x_103(x);	break;
	case 104: xself->x_104(x);	break;
	case 105: xself->x_105(x);	break;
	case 106: xself->x_106(x);	break;
	case 107: xself->x_107(x);	break;
	case 108: xself->x_108(x);	break;
	case 109: xself->x_109(x);	break;
	case 110: xself->x_110(x);	break;
	case 111: xself->x_111(x);	break;
	case 112: xself->x_112(x);	break;
	case 113: xself->x_113(x);	break;
	case 114: xself->x_114(x);	break;
	case 115: xself->x_115(x);	break;
	case 116: xself->x_116(x);	break;
	case 117: xself->x_117(x);	break;
	case 118: xself->x_118(x);	break;
	case 119: xself->x_119(x);	break;
	case 120: xself->x_120(x);	break;
	case 121: xself->x_121(x);	break;
	case 122: xself->x_122(x);	break;
	case 123: xself->x_123(x);	break;
	case 124: xself->x_124(x);	break;
	case 125: xself->x_125(x);	break;
	case 126: xself->x_126(x);	break;
	case 127: xself->x_127(x);	break;
	case 128: xself->x_128(x);	break;
	case 129: xself->x_129(x);	break;
	case 130: xself->x_130(x);	break;
	case 131: xself->x_131(x);	break;
	case 132: xself->x_132(x);	break;
	case 133: xself->x_133(x);	break;
	case 134: xself->x_134(x);	break;
	case 135: xself->x_135(x);	break;
	case 136: xself->x_136(x);	break;
	case 137: xself->x_137(x);	break;
	case 138: xself->x_138(x);	break;
	case 139: xself->x_139(x);	break;
	case 140: xself->x_140(x);	break;
	case 141: xself->x_141(x);	break;
	case 142: xself->x_142(x);	break;
	case 143: xself->x_143(x);	break;
	case 144: xself->x_144(x);	break;
	case 145: xself->x_145(x);	break;
	case 146: xself->x_146(x);	break;
	case 147: xself->x_147(x);	break;
	case 148: xself->x_148(x);	break;
	case 149: xself->x_149(x);	break;
	case 150: x_QVariant::x_150(x);	break;
	case 151: x_QVariant::x_151(x);	break;
	case 152: delete (QVariant*)xself;	break;
    }
}
