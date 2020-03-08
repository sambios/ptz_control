#include "stdafx.h"
#include <QGridLayout>
#include <QPushButton>
#include "kdptzctrl.h"

static void loadimage(QLabel* btn, char* imgpath)
{
    int w,h;
    QPixmap *pixmap = new QPixmap;
    pixmap->load(imgpath);

    w = pixmap->width()/5;
    h = pixmap->height()/5;

    QBitmap bmp = pixmap->createMaskFromColor(QColor(255,255,255,0));
    btn->setPixmap(pixmap->scaled(w, h, Qt::KeepAspectRatio));
    btn->setMask(bmp.scaled(w, h, Qt::KeepAspectRatio));
    QRect rc = btn->geometry();
    btn->setGeometry(rc.x(), rc.y(), w, h);
}

kdptzctrl::kdptzctrl(QWidget* parent):QWidget(parent)
{
    QGridLayout* grid = new QGridLayout(this);
    m_stackedWidget = new QStackedWidget(this);

    m_ptzBasicDlg = new kdptzbasic(this);
    m_stackedWidget->addWidget(m_ptzBasicDlg);
    m_presetDlg = new kdpreset(this);
    m_stackedWidget->addWidget(m_presetDlg);
    m_cruiseDlg = new kdptzcruise(this);
    m_stackedWidget->addWidget(m_cruiseDlg);
    m_patternDlg = new kdptzpattern(this);
    m_stackedWidget->addWidget(m_patternDlg);
    m_auxDlg = new kdptzaux(this);
    m_stackedWidget->addWidget(m_auxDlg);

    m_stackedWidget->setCurrentWidget(m_ptzBasicDlg);
    
    QHBoxLayout* hBoxLayout1 = new QHBoxLayout();
    hBoxLayout1->addWidget(m_stackedWidget);
    hBoxLayout1->setSpacing(0);
    grid->addLayout(hBoxLayout1, 0, 0);

    m_btnBasic = new KVLabel();
    m_btnPreset = new KVLabel();
    m_btnCruise = new KVLabel();
    m_btnPattern = new KVLabel();
    m_btnAux = new KVLabel(); 

    m_btnBasic->setText(tr("Basic"));
    m_btnBasic->setBackgroudImage("./images/normal/basic.png","./images/press/basic.png", true);
    m_btnPreset->setText(tr("Preset"));
    m_btnPreset->setBackgroudImage("./images/normal/preset.png","./images/press/preset.png", true);
    m_btnCruise->setText(tr("Cruise"));
    m_btnCruise->setBackgroudImage("./images/normal/cruise.png","./images/press/cruise.png", true);
    m_btnPattern->setText(tr("Pattern"));
    m_btnPattern->setBackgroudImage("./images/normal/pattern.png","./images/press/pattern.png", true);
    m_btnAux->setText(tr("Aux"));
    m_btnAux->setBackgroudImage("./images/normal/aux.png","./images/press/aux.png", true);


    //Create all controls
    QHBoxLayout* layout2 = new QHBoxLayout();
    grid->addLayout(layout2, 1, 0);
    layout2->addWidget(m_btnBasic);
    layout2->addWidget(m_btnPreset);
    layout2->addWidget(m_btnCruise);
    layout2->addWidget(m_btnPattern);
    layout2->addWidget(m_btnAux);


    //Actions
    connect(m_btnBasic, SIGNAL(clicked()), this, SLOT(OnBtnBasicClicked()));
    connect(m_btnPreset, SIGNAL(clicked()), this, SLOT(OnBtnPresetClicked()));
    connect(m_btnCruise, SIGNAL(clicked()), this, SLOT(OnBtnCruiseClicked()));
    connect(m_btnPattern, SIGNAL(clicked()), this, SLOT(OnBtnPatternClicked()));
    connect(m_btnAux, SIGNAL(clicked()), this, SLOT(OnBtnAuxClicked()));
}

kdptzctrl::~kdptzctrl(void)
{

}

void kdptzctrl::setImage(QPushButton* btn, QString normalPath, QString pressPath)
{
    int w, h;
    QPixmap *pixmap = new QPixmap;
    pixmap->load(normalPath);
    btn->setFlat(true);

    w = pixmap->width()/4;
    h = pixmap->height()/4;
     
    QPixmap pixmap2 = pixmap->scaled(w, h, Qt::KeepAspectRatio);
    btn->setIcon(QIcon(pixmap2));
    QBitmap bmpMask = pixmap2.createMaskFromColor(QColor(255,255,255));
    btn->setMask(bmpMask);
    btn->setIconSize(QSize(w, h));
    btn->setGeometry(btn->geometry().x(), btn->geometry().y(), w, h);
}


void kdptzctrl::OnBtnBasicClicked()
{
    m_stackedWidget->setCurrentWidget(m_ptzBasicDlg);
}

void kdptzctrl::OnBtnPresetClicked()
{
    m_stackedWidget->setCurrentWidget(m_presetDlg);
}

void kdptzctrl::OnBtnCruiseClicked()
{
    m_stackedWidget->setCurrentWidget(m_cruiseDlg);
}

void kdptzctrl::OnBtnPatternClicked()
{
    m_stackedWidget->setCurrentWidget(m_patternDlg);
}

void kdptzctrl::OnBtnAuxClicked()
{
    m_stackedWidget->setCurrentWidget(m_auxDlg);
}
