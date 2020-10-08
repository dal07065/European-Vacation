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

    void printData();
    bool alreadyExistingCity(QString str);
    void readData(QString);
    void readDistances(QVector<City> &cityList);
    ~MainWindow();

private slots:
    void on_actionExit_triggered();

    void on_actionAdmin_triggered();

    void userIsAdmin();

    void on_actionLoad_triggered();

    void on_actionLoad_Extended_triggered();

//    void on_pushButton_clicked();

    void on_buttonGenerate_clicked();

    void on_pushButton_AddCity_clicked();

    void on_pushButton_clicked();

    void on_actionLog_Out_triggered();

    void on_OptimalTravel_clicked();//Starting at Berlin

    QVector<City> recursivePathing(City start,QVector<City> &cities,QVector<City> &sorted);
    void on_customPlan_clicked();

    void on_OptimalTravel_2_clicked();//Starting at Paris

private:
    Ui::MainWindow *ui;
    QVector<City> cityListData;
    QString currentDataFilePath;
};
#endif // MAINWINDOW_H
