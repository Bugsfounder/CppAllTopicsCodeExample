#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  // Setting horizontalSlider and progressBar value 0 as default
  ui->horizontalSlider->setValue(0);
  ui->progressBar->setValue(0);

  // Setting signal and slot for slider and progressBar
  //    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),
  //            ui->progressBar, SLOT(setValue(int)));

  // Connecting multiple slots to a signal
  //    FIRST: conneting horizontalSlider slot to verticalSlider Signal
  connect(ui->verticalSlider, SIGNAL(valueChanged(int)), ui->horizontalSlider,
          SLOT(setValue(int)));

  //    SECOND: connecting progressbar slot to vertivalslider signal
  connect(ui->verticalSlider, SIGNAL(valueChanged(int)), ui->progressBar,
          SLOT(setValue(int)));

  // Disconnecting to a slignal slot
  disconnect(ui->verticalSlider, SIGNAL(valueChanged(int)), ui->progressBar,
             SLOT(setValue(int)));
}

MainWindow::~MainWindow() { delete ui; }
