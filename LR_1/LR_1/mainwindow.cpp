#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    main_scene.scene = new QGraphicsScene();
    main_scene.center_x = CENTER_X;
    main_scene.center_y = CENTER_Y;
    QGraphicsScene *scene = getScene(main_scene);
    ui->graphicsView->setScene(scene);
    main_scene.rect = QRect(QPoint(0,0), QPoint(CENTER_X * 2 - 5, CENTER_Y * 2 - 5));
    scene->setSceneRect(main_scene.rect);
}

MainWindow::~MainWindow()
{
    CurAction act;
    act.clear = true;
    control(main_scene, act, CLEAR);
    delete ui;
}

void MainWindow::on_openButton_clicked()
{
    QString tmp_string = ui->lineEditFile->text();
    QByteArray tmp_array = tmp_string.toLatin1();
    const char *filename = tmp_array.data();
    CurAction act;
    act.filename = filename;
    int rc = control(main_scene, act, OPEN);
    if (rc == OK)
    {
        rc = control(main_scene, act, DRAW);
    }
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
    CurAction act;
    act.filename = filename;
    int rc = control(main_scene, act, SAVE);
    if (rc == ERR_FILE)
    {
        QMessageBox::critical(this, "Ошибка", "Неправильное имя файла");
    }
}

void MainWindow::on_cleanButton_clicked()
{
    CurAction act;
    act.clear = true;
    int rc = control(main_scene, act, CLEAR);
    if (rc == ERR_EMPTY)
    {
        QMessageBox::warning(this, "Предупреждение", "Модель уже пуста");
    }
}

void MainWindow::on_transferButton_clicked()
{
    int dx, dy, dz;
    int rc = OK;
    dx = ui->spinBoxDX->value();
    dy = ui->spinBoxDY->value();
    dz = ui->spinBoxDZ->value();
    CurAction act;
    act.transfer = {dx, dy, dz};
    rc = control(main_scene, act, TRANSFER);
    if (rc == OK)
    {
        rc = control(main_scene, act, DRAW);
    }
    else if (rc == ERR_EMPTY)
    {
        QMessageBox::warning(this, "Предупреждение", "Модель пуста");
    }

}

void MainWindow::on_rotateButton_clicked()
{
    double angle_x, angle_y, angle_z;
    int rc = OK;
    angle_x = ui->spinBoxOX->value();
    angle_y = ui->spinBoxOY->value();
    angle_z = ui->spinBoxOZ->value();
    CurAction act;
    act.rotate = {angle_x, angle_y, angle_z};
    rc = control(main_scene, act, ROTATE);
    if (rc == OK)
    {
        rc = control(main_scene, act, DRAW);
    }
    else if (rc == ERR_EMPTY)
    {
        QMessageBox::warning(this, "Предупреждение", "Модель пуста");
    }
}

void MainWindow::on_scaleButton_clicked()
{
    double kx, ky, kz;
    int rc = OK;
    kx = ui->spinBoxKX->value();
    ky = ui->spinBoxKY->value();
    kz = ui->spinBoxKZ->value();
    CurAction act;
    act.scale = {kx, ky, kz};
    rc = control(main_scene, act, SCALE);
    if (rc == OK)
    {
        rc = control(main_scene, act, DRAW);
    }
    else if (rc == ERR_EMPTY)
    {
        QMessageBox::warning(this, "Предупреждение", "Модель пуста");
    }
}
