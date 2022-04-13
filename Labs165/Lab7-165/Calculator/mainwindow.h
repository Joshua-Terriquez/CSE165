#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
 // void on_label_linkHovered(const QString &link);
    void digitPressed();
    void on_pushButton_decimal_released();
    void on_pushButton_unary_operation_released();

    void on_pushButton_Clear_released();
    void on_pushButton_equals_released();
    void on_pushButton_binary_operation_released();
};
#endif // MAINWINDOW_H
