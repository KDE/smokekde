//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke_types.h>
#include <qasyncimageio.h>
#include <qimage.h>

class x_QImageFormat {
private:
    QImageFormat *xthis;
public:
    x_QImageFormat(void *x) : xthis((QImageFormat*)x) {}
    void x_0(xargs *x) {
	// decode(QImage&, QImageConsumer*, const uchar*, int)
	int xret = xthis->QImageFormat::decode(*(QImage *)x[1].x_voidp,(QImageConsumer*)x[2].x_voidp,(const uchar*)x[3].x_voidp,(int)x[4].x_int);
	x[0].x_int = (int)xret;
    }
    ~x_QImageFormat() {}
};
void xcall_QImageFormat(xargs *x, void *s, int xi) {
    x_QImageFormat xtmp(s), *xself = &xtmp;
    switch(xi) {
	case 0: xself->x_0(x);	break;
    }
}
