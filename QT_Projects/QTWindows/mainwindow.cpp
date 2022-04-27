#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"mydialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setCentralWidget(ui->plainTextEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionMenu_triggered()
{
    //    myDialog my_dialog;
    //    my_dialog.setModal(true);
    //    my_dialog.exec();
    my_dialog= new myDialog(this);
    my_dialog->show();

}
