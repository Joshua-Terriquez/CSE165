#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setTitle("opengl tutorial");

    w.resize(800,600);
    w.setPosition(80,80);
    w.show();
    return a.exec();
}
