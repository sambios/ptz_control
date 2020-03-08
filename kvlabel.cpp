#include "stdafx.h"
//////////////////////////////////////////////////////////////////////////
//KVLabel
KVLabel::KVLabel(QWidget* parent):QLabel(parent)
{
    onlyImageValid = 1;
}

KVLabel::~KVLabel(void)
{
}

void KVLabel::setBackgroudImage(QString path_normal, QString path_press, bool onlyImageValid)
{
    this->onlyImageValid = onlyImageValid;
    normalImgPath = path_normal;
    pressImgPath = path_press;
    //default is normal state.
    set_image(normalImgPath);
}

void KVLabel::set_image(QString path)
{
    int w,h;
    QPixmap *pixmap = new QPixmap;
    pixmap->load(path);

    w = pixmap->width()/5;
    h = pixmap->height()/5;

    QPixmap pixmap2 = pixmap->scaled(w, h, Qt::KeepAspectRatio);
    setPixmap(pixmap2);
    if (onlyImageValid)
    {
        //setMask(pixmap2.mask());
    }else{
        //QBitmap bmp = pixmap2.createMaskFromColor(QColor(0,0,0,0));
        //setMask(pixmap2);
    }
    
    QRect rc = geometry();
    setGeometry(rc.x(), rc.y(), w, h);
}

void KVLabel::mousePressEvent(QMouseEvent *e)
{
    set_image(pressImgPath);
    QLabel::mousePressEvent(e);
}

void KVLabel::mouseReleaseEvent(QMouseEvent *e)
{   
    set_image(normalImgPath);
    QLabel::mouseReleaseEvent(e);
    emit clicked();
}

void KVLabel::mouseMoveEvent(QMouseEvent *e)
{
    //printf("Button.mouseMoveEvent(%d, %)\n", e->x(), e->y());
    QLabel::mouseMoveEvent(e);
}



