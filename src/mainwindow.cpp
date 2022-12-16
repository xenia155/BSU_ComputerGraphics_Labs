#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QTableWidget>
#include <QImage>
#include <iostream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->set_files, &QPushButton::clicked, this, &MainWindow::OnFilesClick);
    connect(ui->set_dir, &QPushButton::clicked, this, &MainWindow::OnDirsClick);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::OnFilesClick() {
    filenames = QFileDialog::getOpenFileNames();
    for(auto str : filenames) {
        QImage img(str);
        new QListWidgetItem(QString::number(img.width()) + ", " +QString::number(img.height()) + ", " +QString::number(img.depth()) + ", " +QString::number(img.dotsPerMeterX()), ui->data_list_widget);
    }
}

void MainWindow::OnDirsClick() {
    QDir dir(QFileDialog::getExistingDirectory());
    for(auto& file : dir.entryInfoList()) {
        std::cout << file.fileName().toStdString() << std::endl;
        QImage img(file.path() + "\\" + file.fileName());
        new QListWidgetItem(QString::number(img.width()) + ", " +QString::number(img.height()) + ", " +QString::number(img.depth()) + ", " +QString::number(img.dotsPerMeterX()), ui->data_list_widget);

    }
}
