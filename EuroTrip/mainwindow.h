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

    void userIsAdmin();
    // This function will change all of the adminFuncs features visiblility
    // to true.
    bool alreadyExistingCity(QString str);
    // This function checks to see if the data being read in by the
    // the function "readData" is already in the data member cityListData'
    // returns true if City object is already in QVector cityListData
    void readData(QString);
    // This functions reads the Citys data in from a txt file for all of the
    // and stores them into a QVector of City objects called cityListData
    void readDistances(QVector<City> &cityList);
    // This function reads in all the distance data from the distance.txt file
    // and  updates the distance array in each of the city objects
    ~MainWindow();

private slots:
    void on_actionExit_triggered();

    void on_actionAdmin_triggered();

    void on_actionLoad_triggered();

    void on_actionLoad_Extended_triggered();

//    void on_pushButton_clicked();

    void on_buttonGenerate_clicked();

//    void on_pushButton_AddCity_clicked();

    void on_pushButton_clicked();

    void on_actionLog_Out_triggered();

    void on_OptimalTravel_clicked();//Starting at Berlin

    QVector<City> recursivePathing(City start,QVector<City> &cities,QVector<City> &sorted);
    void on_customPlan_clicked();

    void on_OptimalTravel_2_clicked();//Starting at Paris

    void on_pushButton_loadFoods_clicked();

    void on_pushButton_deleteFood_clicked();

    void on_pushButton_changePrice_clicked();

private:
    Ui::MainWindow *ui;
    QVector<City> cityListData;
    // This data memeber of QVectors stores all of the current City objects
    QString currentDataFilePath;
    // This data memeber is a QString that stores the extention for the file
    // that stores the city data

};
#endif // MAINWINDOW_H
