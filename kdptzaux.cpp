
#include <QGridLayout>
#include "kdptzaux.h"

kdptzaux::kdptzaux(QWidget* parent):QWidget(parent)
{
    //Create all controls
   m_btnOn = new QPushButton(tr("On"), this);
   m_btnOff = new QPushButton(tr("Off"), this);
   m_btnAutoScan = new QPushButton(tr("Auto Scan"), this);
   m_btnAutoPan = new QPushButton(tr("Auto Pan"), this);
   m_btnFlip = new QPushButton(tr("Flip"), this);
   m_cmbAuxNo = new QComboBox(this);

   QLabel* label = new QLabel(tr("Aux No."));

   //Adjust layout
   QGridLayout* grid = new QGridLayout(this);
   grid->addWidget(label, 0, 0, Qt::AlignTop);
   grid->addWidget(m_btnOn, 1, 0, Qt::AlignTop);
   grid->addWidget(m_btnOff, 1, 1, Qt::AlignTop);
   grid->addWidget(m_btnAutoScan, 2, 0, Qt::AlignTop);
   grid->addWidget(m_btnAutoPan, 2, 1, Qt::AlignTop);
   grid->addWidget(m_btnFlip, 3, 1, Qt::AlignTop);
   grid->addWidget(m_cmbAuxNo, 0, 1, Qt::AlignTop);
}

kdptzaux::~kdptzaux(void)
{
}
