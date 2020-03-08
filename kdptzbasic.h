#pragma once
#include <QtCore>
#include <QtWidgets>

class KVLabel;


class kdptzbasic:public QWidget
{
    Q_OBJECT
public:
    kdptzbasic(QWidget* parent = 0);
    ~kdptzbasic(void);

private:

    void initAllControls();

    KVLabel* m_ptzUpLeft;
    KVLabel* m_ptzUp;
    KVLabel* m_ptzUpRight;

    KVLabel* m_ptzLeft;
    KVLabel* m_ptzCenter;
    KVLabel* m_ptzRight;

    KVLabel* m_ptzDownLeft;
    KVLabel* m_ptzDown;
    KVLabel* m_ptzDownRight;

    KVLabel* m_ptzZoomPlus;
    KVLabel* m_ptzZoomMinus;

    KVLabel* m_ptzFocusPlus;
    KVLabel* m_ptzFocusMinus;

    KVLabel* m_ptzIrisPlus;
    KVLabel* m_ptzIrisMinus;

    KVLabel* m_ptzSpeedPlus;
    KVLabel* m_ptzSpeedMinus;

};
