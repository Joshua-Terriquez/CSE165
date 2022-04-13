#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtOpenGL>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void keyPressEvent(QKeyEvent *);

    void mousePressEvent(QMouseEvent *);

    void mouseMoveEvent(QMouseEvent *);


private slots:

    void on_x_rot_slider_valueChanged(int value);
    void on_y_rot_slider_valueChanged(int value);
    void on_z_rot_slider_valueChanged(int value);

     void  on_x_translate_slider_valueChanged(int value);
     void  on_y_translate_slider_valueChanged(int value);
     void  on_z_translate_slider_valueChanged(int value);

     void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    float lastX;
    float lastY;
};

#endif // MAINWINDOW_H
