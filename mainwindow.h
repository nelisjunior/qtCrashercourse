#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ToDoApp; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:

    void on_btn_add_clicked();

    void on_btn_remove_clicked();

    void on_btn_removeAll_clicked();

private:
    Ui::ToDoApp *ui;
};
#endif // MAINWINDOW_H
