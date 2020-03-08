#pragma once
#include <QtCore>
#include <QtWidgets>
#include <QComboBox>

class kdptzcruise:public QWidget
{
    Q_OBJECT
public:
    kdptzcruise(QWidget* parent = 0);
    ~kdptzcruise(void);
private:
    QComboBox* m_cmbCruiseNo;
    QComboBox* m_cmbPresetSel;
    QComboBox* m_cmbPresetUnSel;
    QPushButton* m_btnAdd;
    QPushButton* m_btnDel;
};
