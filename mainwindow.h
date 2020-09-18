#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "login.h"
#include "city.h"
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <iomanip>
#include <QDebug>
#include <QMainWindow>
#include <QGeoCoordinate>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void readData();
    ~MainWindow();

private slots:
    void on_actionExit_triggered();

    void on_actionAdmin_triggered();

    void userIsAdmin();


    void on_actionLoad_triggered();

//    void on_pushButton_clicked();

    void on_buttonGenerate_clicked();

private:
    Ui::MainWindow *ui;
    QVector<City> cityListData;
    QString currentDataFilePath;
};
#endif // MAINWINDOW_H
