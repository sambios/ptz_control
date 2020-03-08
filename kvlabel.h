#pragma once

#include <QtCore>
#include <QtWidgets>
#include <QLabel>

class KVLabel:public QLabel
{
    Q_OBJECT
public:
    KVLabel(QWidget* parent = 0);
    ~KVLabel(void);
    void setBackgroudImage(QString path_normal, QString path_press, bool onlyImageValid = true);
protected:    
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
signals:
    void clicked();
private:
    void set_image(QString path);
    QString normalImgPath;
    QString pressImgPath;
    bool onlyImageValid;
};
