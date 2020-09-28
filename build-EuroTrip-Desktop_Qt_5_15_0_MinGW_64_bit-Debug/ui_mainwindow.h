/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdmin;
    QAction *actionExit;
    QAction *actionLoad;
    QAction *actionLog_Out;
    QAction *actionLoad_Extended;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *cityList;
    QComboBox *comboBoxCities;
    QPushButton *buttonGenerate;
    QPushButton *customPlanButton;
    QGroupBox *adminFuncs;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_addCity;
    QLineEdit *lineEdit_AddCity;
    QLabel *label_5;
    QLineEdit *lineEdit_Latitude;
    QLabel *label_6;
    QLineEdit *lineEdit_Longitude;
    QPushButton *pushButton_AddCity;
    QLabel *label_2;
    QComboBox *comboBox_SelectCityAddFood;
    QLabel *label_3;
    QLineEdit *lineEdit_FoodName;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_FoodCost;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(642, 535);
        actionAdmin = new QAction(MainWindow);
        actionAdmin->setObjectName(QString::fromUtf8("actionAdmin"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionLog_Out = new QAction(MainWindow);
        actionLog_Out->setObjectName(QString::fromUtf8("actionLog_Out"));
        actionLoad_Extended = new QAction(MainWindow);
        actionLoad_Extended->setObjectName(QString::fromUtf8("actionLoad_Extended"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 301, 461));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 5, 0, 5);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        cityList = new QTextBrowser(verticalLayoutWidget);
        cityList->setObjectName(QString::fromUtf8("cityList"));

        verticalLayout->addWidget(cityList);

        comboBoxCities = new QComboBox(verticalLayoutWidget);
        comboBoxCities->setObjectName(QString::fromUtf8("comboBoxCities"));

        verticalLayout->addWidget(comboBoxCities);

        buttonGenerate = new QPushButton(verticalLayoutWidget);
        buttonGenerate->setObjectName(QString::fromUtf8("buttonGenerate"));

        verticalLayout->addWidget(buttonGenerate);

        customPlanButton = new QPushButton(verticalLayoutWidget);
        customPlanButton->setObjectName(QString::fromUtf8("customPlanButton"));

        verticalLayout->addWidget(customPlanButton);

        adminFuncs = new QGroupBox(centralwidget);
        adminFuncs->setObjectName(QString::fromUtf8("adminFuncs"));
        adminFuncs->setGeometry(QRect(320, 90, 271, 341));
        verticalLayout_2 = new QVBoxLayout(adminFuncs);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_addCity = new QLabel(adminFuncs);
        label_addCity->setObjectName(QString::fromUtf8("label_addCity"));

        verticalLayout_2->addWidget(label_addCity);

        lineEdit_AddCity = new QLineEdit(adminFuncs);
        lineEdit_AddCity->setObjectName(QString::fromUtf8("lineEdit_AddCity"));

        verticalLayout_2->addWidget(lineEdit_AddCity);

        label_5 = new QLabel(adminFuncs);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        lineEdit_Latitude = new QLineEdit(adminFuncs);
        lineEdit_Latitude->setObjectName(QString::fromUtf8("lineEdit_Latitude"));

        verticalLayout_2->addWidget(lineEdit_Latitude);

        label_6 = new QLabel(adminFuncs);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        lineEdit_Longitude = new QLineEdit(adminFuncs);
        lineEdit_Longitude->setObjectName(QString::fromUtf8("lineEdit_Longitude"));

        verticalLayout_2->addWidget(lineEdit_Longitude);

        pushButton_AddCity = new QPushButton(adminFuncs);
        pushButton_AddCity->setObjectName(QString::fromUtf8("pushButton_AddCity"));

        verticalLayout_2->addWidget(pushButton_AddCity);

        label_2 = new QLabel(adminFuncs);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        comboBox_SelectCityAddFood = new QComboBox(adminFuncs);
        comboBox_SelectCityAddFood->setObjectName(QString::fromUtf8("comboBox_SelectCityAddFood"));

        verticalLayout_2->addWidget(comboBox_SelectCityAddFood);

        label_3 = new QLabel(adminFuncs);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        lineEdit_FoodName = new QLineEdit(adminFuncs);
        lineEdit_FoodName->setObjectName(QString::fromUtf8("lineEdit_FoodName"));

        verticalLayout_2->addWidget(lineEdit_FoodName);

        label_4 = new QLabel(adminFuncs);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        doubleSpinBox_FoodCost = new QDoubleSpinBox(adminFuncs);
        doubleSpinBox_FoodCost->setObjectName(QString::fromUtf8("doubleSpinBox_FoodCost"));

        verticalLayout_2->addWidget(doubleSpinBox_FoodCost);

        pushButton = new QPushButton(adminFuncs);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 642, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionLoad_Extended);
        menuFile->addAction(actionAdmin);
        menuFile->addAction(actionExit);
        menuFile->addAction(actionLog_Out);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAdmin->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionLoad->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
#if QT_CONFIG(tooltip)
        actionLoad->setToolTip(QCoreApplication::translate("MainWindow", "Load in cities", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLog_Out->setText(QCoreApplication::translate("MainWindow", "Log Out", nullptr));
        actionLoad_Extended->setText(QCoreApplication::translate("MainWindow", "Load Extended", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "List of Cities:", nullptr));
        buttonGenerate->setText(QCoreApplication::translate("MainWindow", "Generate", nullptr));
        customPlanButton->setText(QCoreApplication::translate("MainWindow", "Create Custom Plan With Selected City", nullptr));
        label_addCity->setText(QCoreApplication::translate("MainWindow", "Add New City", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Latitude", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Longitude", nullptr));
        pushButton_AddCity->setText(QCoreApplication::translate("MainWindow", "Add City", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Select City to Add Food", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Food Name:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Food Cost", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Add Food", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
