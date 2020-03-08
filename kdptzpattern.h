#pragma once
#include <QtCore>
#include <QtWidgets>
class kdptzpattern:public QWidget
{
    Q_OBJECT
public:
    kdptzpattern(QWidget* parent = 0);
    ~kdptzpattern(void);
private:
    QPushButton *m_btnSetPatternStart;
    QPushButton *m_btnSetPatternStop;
    QPushButton *m_btnPatternRun;
    QPushButton *m_btnPatternClear;
    QComboBox   *m_cmbDefined;
    QComboBox   *m_cmbUndefined;
};
