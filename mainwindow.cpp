#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->rb_one->setText("Радиокнопка первая");
    ui->rb_two->setText("Радиокнопка вторая");
    ui->rb_one->setChecked(true);

    int countElements = 10;
    for(int i = 0; i < countElements; ++i){
        ui->cB_elements->addItem("Элемент: " + QString::number(i+1));
    }

    ui->pB_mainBut->setText("Основная кнопка");
    ui->pB_mainBut->setCheckable(true);

    ui->pbB_pbBar->setMinimum(0);
    ui->pbB_pbBar->setMaximum(10);
    ui->pbB_pbBar->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pB_start_clicked(bool checked)
{
    if (ui->pbB_pbBar->value() < ui->pbB_pbBar->maximum()){
        ui->pbB_pbBar->setValue(ui->pbB_pbBar->value() + 1);
    }
    else{
        ui->pbB_pbBar->setValue(0);
    }
}
