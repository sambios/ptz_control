#include "kdpreset.h"

kdpreset::kdpreset(QWidget* parent):QWidget(parent)
{
    //Create all controls.
    m_btnSet = new QPushButton(tr("Set"), this);
    m_btnClear = new QPushButton(tr("Clear"), this);
    m_btnGoto = new QPushButton(tr("Goto"), this);
    m_cmbDefined = new QComboBox(this);
    m_cmbUndefined = new QComboBox(this);

    //Adjust Layout
    int pitch = 50;
    int btn_width = 60;
    int btn_height = 25;
    int xorg = 0, yorg = 0;

    m_btnSet->setGeometry(xorg + 100, yorg, btn_width, btn_height);
    m_cmbUndefined->setGeometry(xorg, yorg, 90, btn_height);

    m_cmbDefined->setGeometry(xorg, yorg + pitch, 90, btn_height);
    m_btnGoto->setGeometry(xorg + 100, yorg + pitch, btn_width, btn_height);
    m_btnClear->setGeometry(xorg + 160, yorg + pitch, btn_width, btn_height);
    //m_btnGoto->setGeometry(0, 0, 30, 10);

}

kdpreset::~kdpreset(void)
{

}
