#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    frame_model = new model;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_openButton_clicked()
{
    QString tmp_string = ui->lineEditFile->text();
    QByteArray tmp_array = tmp_string.toLatin1();
    const char *filename = tmp_array.data();
    int rc = read_file(filename, frame_model);
    if (rc == OK)
    {}
    else if (rc == ERR_MEM)
    {
        QMessageBox::critical(this, "Ошибка", "Ошибка выделения памяти");
    }
    else if (rc == ERR_FILE)
    {
        QMessageBox::critical(this, "Ошибка", "Неправильное имя файла");
    }
    else if (rc == ERR_IO)
    {
        QMessageBox::critical(this, "Ошибка", "Некорректное содержимое файла");
    }
}

void MainWindow::on_saveButton_clicked()
{
    QString tmp_string = ui->lineEditFile->text();
    QByteArray tmp_array = tmp_string.toLatin1();
    const char *filename = tmp_array.data();
    int rc = save_file(filename, frame_model);
    if (rc == OK)
    {}
    else if (rc == ERR_FILE)
    {
        QMessageBox::critical(this, "Ошибка", "Неправильное имя файла");
    }
}
