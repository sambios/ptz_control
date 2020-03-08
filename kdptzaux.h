#pragma once
#include <QtCore>
#include <QtWidgets>

class kdptzaux:public QWidget
{
    Q_OBJECT
public:
    kdptzaux(QWidget* parent = 0);
    ~kdptzaux(void);
private:
    QPushButton* m_btnOn;
    QPushButton* m_btnOff;
    QPushButton* m_btnAutoScan;
    QPushButton* m_btnAutoPan;
    QPushButton* m_btnFlip;
    QComboBox* m_cmbAuxNo;
};
