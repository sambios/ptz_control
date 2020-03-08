
#include <QGridLayout>
#include "kdptzcruise.h"

kdptzcruise::kdptzcruise(QWidget* parent):QWidget(parent)
{
    //Create all controls;
    QLabel* label1 =new QLabel(tr("Cruise No."));
    QLabel* label2 =new QLabel(tr("Preset No."));
    QLabel* label3 =new QLabel(tr("Preset No."));
    
    m_cmbCruiseNo = new QComboBox(this);
    m_cmbPresetSel = new QComboBox(this);
    m_cmbPresetUnSel = new QComboBox(this);

    m_btnAdd = new QPushButton(tr("Add"), this);
    m_btnDel = new QPushButton(tr("Delete"), this);

    //layout
    QGridLayout* grid = new QGridLayout(this);
    grid->addWidget(label1, 0, 0, Qt::AlignTop);
    grid->addWidget(label2, 1, 0, Qt::AlignTop);
    grid->addWidget(label3, 2, 0, Qt::AlignTop);
    grid->addWidget(m_btnAdd, 1, 2, Qt::AlignTop);
    grid->addWidget(m_btnDel, 2, 2, Qt::AlignTop);
    grid->addWidget(m_cmbCruiseNo, 0, 1, Qt::AlignTop);
    grid->addWidget(m_cmbPresetSel, 1, 1, Qt::AlignTop);
    grid->addWidget(m_cmbPresetUnSel, 2, 1, Qt::AlignTop);
    
    grid->setContentsMargins(0, 0, 0, 0);
}

kdptzcruise::~kdptzcruise(void)
{

}
