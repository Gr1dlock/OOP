#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include "controller.h"

#define CENTER_X 270
#define CENTER_Y 270

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_openButton_clicked();

    void on_saveButton_clicked();

    void on_cleanButton_clicked();

    void on_transferButton_clicked();

    void on_rotateButton_clicked();

    void on_scaleButton_clicked();

private:
    Ui::MainWindow *ui;
    MainScene main_scene;
};

#endif // MAINWINDOW_H
