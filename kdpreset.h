#pragma once
#include <QtCore>
#include <QPushButton>
#include <QComboBox>
#include <QWidget>

class kdpreset:public QWidget
{
    Q_OBJECT
public:
    kdpreset(QWidget* parent = 0);
    ~kdpreset(void);
private:
    QPushButton* m_btnSet;
    QPushButton* m_btnClear;
    QPushButton* m_btnGoto;
    QComboBox* m_cmbDefined;
    QComboBox* m_cmbUndefined;
};
