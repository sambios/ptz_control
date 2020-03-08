#pragma once
#include <QtCore>
#include <QtWidgets>
#include <QPushButton>
#include <QStackedWidget>

class kdptzbasic;
class kdpreset;
class kdptzcruise;
class kdptzaux;
class kdptzpattern;
class KVLabel;

class kdptzctrl :
    public QWidget
{
    Q_OBJECT
public:
    kdptzctrl(QWidget* parent);
    ~kdptzctrl(void);
private:
    void setImage(QPushButton* btn, QString normalPath, QString pressPath);

private slots:
    void OnBtnBasicClicked();
    void OnBtnPresetClicked();
    void OnBtnCruiseClicked();
    void OnBtnPatternClicked();
    void OnBtnAuxClicked();

private:
    KVLabel*  m_btnBasic;
    KVLabel*  m_btnPreset;
    KVLabel*  m_btnCruise;
    KVLabel*  m_btnPattern;
    KVLabel*  m_btnAux;  
    QStackedWidget* m_stackedWidget;
    kdptzbasic* m_ptzBasicDlg;
    kdpreset* m_presetDlg;
    kdptzcruise* m_cruiseDlg;
    kdptzpattern* m_patternDlg;
    kdptzaux* m_auxDlg;

};
