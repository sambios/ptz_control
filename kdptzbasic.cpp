#include "stdafx.h"
#include "kdptzbasic.h"

kdptzbasic::kdptzbasic(QWidget* parent):QWidget(parent)
{    
    //create all button
    initAllControls();
}

kdptzbasic::~kdptzbasic(void)
{
}

void kdptzbasic::initAllControls()
{
    m_ptzUpLeft = new KVLabel(this);
    m_ptzUpLeft->setGeometry(0, 0, 48, 48);
    m_ptzUpLeft->setBackgroudImage("./images/normal/1.png", "./images/press/1.png");  
    
    m_ptzUp = new KVLabel(this);
    m_ptzUp->setGeometry(0, 0, 48, 48);
    m_ptzUp->setBackgroudImage("./images/normal/2.png", "./images/press/2.png");

    m_ptzUpRight = new KVLabel(this);
    m_ptzUpRight->setGeometry(0, 0, 48, 48);
    m_ptzUpRight->setBackgroudImage("./images/normal/3.png", "./images/press/3.png");

    m_ptzLeft = new KVLabel(this);
    m_ptzLeft->setGeometry(0, 0, 48, 48);
    m_ptzLeft->setBackgroudImage("./images/normal/8.png", "./images/press/8.png");

    m_ptzCenter = new KVLabel(this);
    m_ptzCenter->setGeometry(0, 0, 48, 48);
    m_ptzCenter->setBackgroudImage("./images/normal/9.png", "./images/press/9.png");

    m_ptzRight = new KVLabel(this);
    m_ptzRight->setGeometry(0, 0, 48, 48);
    m_ptzRight->setBackgroudImage("./images/normal/4.png", "./images/press/4.png");

    m_ptzDownLeft = new KVLabel(this);
    m_ptzDownLeft->setGeometry(0, 0, 48, 48);
    m_ptzDownLeft->setBackgroudImage("./images/normal/7.png", "./images/press/7.png");

    m_ptzDown = new KVLabel(this);
    m_ptzDown->setGeometry(0, 0, 48, 48);
    m_ptzDown->setBackgroudImage("./images/normal/6.png", "./images/press/6.png");

    m_ptzDownRight = new KVLabel(this);
    m_ptzDownRight->setGeometry(0, 0, 48, 48);
    m_ptzDownRight->setBackgroudImage("./images/normal/5.png", "./images/press/5.png");

    int h_padding = 10;
    int xx;
    int x = m_ptzRight->geometry().x() + m_ptzRight->geometry().width();
    int y = m_ptzUp->y();
    xx=x;

    //Zoom
    m_ptzZoomPlus = new KVLabel(this);
    m_ptzZoomPlus->setGeometry(x, y, 48,48);
    m_ptzZoomPlus->setBackgroudImage("./images/normal/plus.png", "./images/press/plus.png");
    x += m_ptzZoomPlus->width() + 3;

    QLabel* label = new QLabel("Zoom", this);
    label->setGeometry(x, y, 40,30);
    x += label->width();

    m_ptzZoomMinus = new KVLabel(this);
    m_ptzZoomMinus->setGeometry(x, y, 48,48);
    m_ptzZoomMinus->setBackgroudImage("./images/normal/minus.png", "./images/press/minus.png");

    y += m_ptzZoomPlus->height() + h_padding;

    //Focus -30
    m_ptzFocusPlus = new KVLabel(this);
    m_ptzFocusPlus->setGeometry(xx, y, 48,48);
    m_ptzFocusPlus->setBackgroudImage("./images/normal/plus.png", "./images/press/plus.png");
    x = xx + m_ptzFocusPlus->width() + 3;

    label = new QLabel("Focus", this);
    label->setGeometry(x, y, 40, 30);
    x+= label->width();

    m_ptzFocusMinus = new KVLabel(this);
    m_ptzFocusMinus->setGeometry(x, y, 48,48);
    m_ptzFocusMinus->setBackgroudImage("./images/normal/minus.png", "./images/press/minus.png");
    y += m_ptzFocusPlus->height() + h_padding;

    //Iris - 60
    m_ptzIrisPlus = new KVLabel(this);
    m_ptzIrisPlus->setGeometry(xx, y, 48,48);
    m_ptzIrisPlus->setBackgroudImage("./images/normal/plus.png", "./images/press/plus.png");
    x = xx + m_ptzIrisPlus->width() + 3;

    label = new QLabel("Iris", this);
    label->setGeometry(x, y, 40,30);
    x+= label->width();

    m_ptzIrisMinus = new KVLabel(this);
    m_ptzIrisMinus->setGeometry(x, y, 48,48);
    m_ptzIrisMinus->setBackgroudImage("./images/normal/minus.png", "./images/press/minus.png");
    y += m_ptzIrisPlus->height() + h_padding;

    //Speed - 90
    m_ptzSpeedPlus = new KVLabel(this);
    m_ptzSpeedPlus->setGeometry(xx, y, 48,48);
    m_ptzSpeedPlus->setBackgroudImage("./images/normal/plus.png", "./images/press/plus.png");
    x = xx + m_ptzIrisPlus->width() + 3;

    label = new QLabel("Speed", this);
    label->setGeometry(x, y, 40, 30);
    x+= label->width();

    m_ptzSpeedMinus = new KVLabel(this);
    m_ptzSpeedMinus->setGeometry(x, y, 48,48);
    m_ptzSpeedMinus->setBackgroudImage("./images/normal/minus.png", "./images/press/minus.png");

}
