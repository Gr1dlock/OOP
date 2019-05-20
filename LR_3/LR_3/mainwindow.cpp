#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->controlPanelLayout->addWidget(elevator.getControlPanel());
    connect(&elevator, SIGNAL(forwardMessage(QString)), this, SLOT(updateStatus(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateStatus(QString message)
{
    ui->statusBar->clearMessage();
    ui->statusBar->showMessage(message);
    ui->logBrowser->insertPlainText(message + "\n");
    QScrollBar *sb = ui->logBrowser->verticalScrollBar();
    sb->setValue(sb->maximum());
}

