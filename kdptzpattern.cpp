
#include "kdptzpattern.h"

kdptzpattern::kdptzpattern(QWidget* parent):QWidget(parent)
{
    //Create all controls
    m_btnSetPatternStart = new QPushButton(tr("Start"), this);
    m_btnSetPatternStop = new QPushButton(tr("Stop"), this);
    m_btnPatternRun = new QPushButton(tr("Run"), this);
    m_btnPatternClear = new QPushButton(tr("Clear"), this);

    m_cmbUndefined = new QComboBox(this);
    m_cmbDefined = new QComboBox(this);

    //Adjust layout
    int pitch = 50;
    int btn_width = 60;
    int btn_height = 25;
    int xorg = 0, yorg = 0;
  
    m_cmbUndefined->setGeometry(xorg, yorg, 90, btn_height);
    m_btnSetPatternStart->setGeometry(xorg + 100, yorg, btn_width, btn_height);
    m_btnSetPatternStop->setGeometry(xorg + 160, yorg, btn_width, btn_height);

    m_cmbDefined->setGeometry(xorg, yorg + pitch, 90, btn_height);
    m_btnPatternRun->setGeometry(xorg + 100, yorg + pitch, btn_width, btn_height);
    m_btnPatternClear->setGeometry(xorg + 160, yorg + pitch, btn_width, btn_height);
}

kdptzpattern::~kdptzpattern(void)
{
}
