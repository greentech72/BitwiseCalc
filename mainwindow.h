#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "bitwisecalchandler.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(BitwiseCalcHandler *handler, QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_BNext_clicked();

    void on_BPrev_clicked();

    void on_BByte_clicked();

    void on_BWord_clicked();

    void on_BDWord_clicked();

    void on_BQWord_clicked();

    void on_listWidget_clicked(const QModelIndex &index);

    void on_BByte_2_clicked();

    void on_BWord_2_clicked();

    void on_BDWord_2_clicked();

    void on_BQWord_2_clicked();

    void on_BSet_clicked();

    void on_BAdd_clicked();

    void on_BSub_clicked();

    void on_BMul_clicked();

    void on_BDiv_clicked();

private:
    void print_command();

    QString type = "d";
    BitwiseCalcHandler *handler;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
