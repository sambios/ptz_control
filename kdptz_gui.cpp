// kdptz_cbb.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <QApplication>
#include <QGridLayout>

int main(int argc, char* argv[])
{
#if (QT_VERSION >= QT_VERSION_CHECK(5, 6, 0))
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QApplication app(argc, argv);
    QWidget* ptzWidget = new QWidget(0);  
    QGridLayout* mainLayout = new QGridLayout(ptzWidget);
    mainLayout->setSpacing(0);
    mainLayout->setContentsMargins(0, 0, 0, 0);

    kdptzctrl* kdptz = new kdptzctrl(ptzWidget);
    mainLayout->addWidget(kdptz, 0, 0);
    ptzWidget->setGeometry(0, 80, 320, 260);
    ptzWidget->show();
    app.setStyle("Motif");
    app.exec();
    return 0;
}

