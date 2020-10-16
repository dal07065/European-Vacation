/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
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
    QGroupBox *adminFuncs;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_SelectCityAddFood;
    QPushButton *pushButton_loadFoods;
    QLabel *label_5;
    QComboBox *comboBox_EditFood;
    QDoubleSpinBox *doubleSpinBox_EditFoodPrice;
    QSplitter *splitter;
    QPushButton *pushButton_changePrice;
    QPushButton *pushButton_deleteFood;
    QLabel *label_3;
    QLineEdit *lineEdit_FoodName;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_FoodCost;
    QPushButton *pushButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *adminFuncs_4;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QTextBrowser *cityListOptimalTravel;
    QPushButton *OptimalTravel;
    QPushButton *OptimalTravel_2;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *adminFuncs_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *label;
    QTextBrowser *cityList;
    QGroupBox *adminFuncs_2;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_5;
    QComboBox *comboBoxCities;
    QPushButton *buttonGenerate;
    QSpacerItem *verticalSpacer;
    QLabel *label_8;
    QLabel *label_9;
    QTextBrowser *cityInfo;
    QPushButton *customPlan;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(901, 568);
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
        adminFuncs = new QGroupBox(centralwidget);
        adminFuncs->setObjectName(QString::fromUtf8("adminFuncs"));
        adminFuncs->setGeometry(QRect(670, 20, 216, 359));
        verticalLayout_2 = new QVBoxLayout(adminFuncs);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(adminFuncs);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        comboBox_SelectCityAddFood = new QComboBox(adminFuncs);
        comboBox_SelectCityAddFood->setObjectName(QString::fromUtf8("comboBox_SelectCityAddFood"));

        verticalLayout_2->addWidget(comboBox_SelectCityAddFood);

        pushButton_loadFoods = new QPushButton(adminFuncs);
        pushButton_loadFoods->setObjectName(QString::fromUtf8("pushButton_loadFoods"));

        verticalLayout_2->addWidget(pushButton_loadFoods);

        label_5 = new QLabel(adminFuncs);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        comboBox_EditFood = new QComboBox(adminFuncs);
        comboBox_EditFood->setObjectName(QString::fromUtf8("comboBox_EditFood"));

        verticalLayout_2->addWidget(comboBox_EditFood);

        doubleSpinBox_EditFoodPrice = new QDoubleSpinBox(adminFuncs);
        doubleSpinBox_EditFoodPrice->setObjectName(QString::fromUtf8("doubleSpinBox_EditFoodPrice"));
        doubleSpinBox_EditFoodPrice->setSingleStep(0.250000000000000);

        verticalLayout_2->addWidget(doubleSpinBox_EditFoodPrice);

        splitter = new QSplitter(adminFuncs);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        pushButton_changePrice = new QPushButton(splitter);
        pushButton_changePrice->setObjectName(QString::fromUtf8("pushButton_changePrice"));
        splitter->addWidget(pushButton_changePrice);
        pushButton_deleteFood = new QPushButton(splitter);
        pushButton_deleteFood->setObjectName(QString::fromUtf8("pushButton_deleteFood"));
        splitter->addWidget(pushButton_deleteFood);

        verticalLayout_2->addWidget(splitter);

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
        doubleSpinBox_FoodCost->setSingleStep(0.250000000000000);

        verticalLayout_2->addWidget(doubleSpinBox_FoodCost);

        pushButton = new QPushButton(adminFuncs);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 651, 484));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        adminFuncs_4 = new QGroupBox(gridLayoutWidget);
        adminFuncs_4->setObjectName(QString::fromUtf8("adminFuncs_4"));
        verticalLayout_8 = new QVBoxLayout(adminFuncs_4);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_7 = new QLabel(adminFuncs_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_8->addWidget(label_7);

        cityListOptimalTravel = new QTextBrowser(adminFuncs_4);
        cityListOptimalTravel->setObjectName(QString::fromUtf8("cityListOptimalTravel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cityListOptimalTravel->sizePolicy().hasHeightForWidth());
        cityListOptimalTravel->setSizePolicy(sizePolicy);

        verticalLayout_8->addWidget(cityListOptimalTravel);

        OptimalTravel = new QPushButton(adminFuncs_4);
        OptimalTravel->setObjectName(QString::fromUtf8("OptimalTravel"));

        verticalLayout_8->addWidget(OptimalTravel);

        OptimalTravel_2 = new QPushButton(adminFuncs_4);
        OptimalTravel_2->setObjectName(QString::fromUtf8("OptimalTravel_2"));

        verticalLayout_8->addWidget(OptimalTravel_2);


        verticalLayout_4->addWidget(adminFuncs_4);


        gridLayout->addLayout(verticalLayout_4, 0, 1, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        adminFuncs_3 = new QGroupBox(gridLayoutWidget);
        adminFuncs_3->setObjectName(QString::fromUtf8("adminFuncs_3"));
        verticalLayout_7 = new QVBoxLayout(adminFuncs_3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label = new QLabel(adminFuncs_3);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_7->addWidget(label);

        cityList = new QTextBrowser(adminFuncs_3);
        cityList->setObjectName(QString::fromUtf8("cityList"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cityList->sizePolicy().hasHeightForWidth());
        cityList->setSizePolicy(sizePolicy1);
        cityList->setMaximumSize(QSize(16777215, 200));

        verticalLayout_7->addWidget(cityList);


        verticalLayout_6->addWidget(adminFuncs_3);

        adminFuncs_2 = new QGroupBox(gridLayoutWidget);
        adminFuncs_2->setObjectName(QString::fromUtf8("adminFuncs_2"));
        verticalLayout_3 = new QVBoxLayout(adminFuncs_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(12);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        comboBoxCities = new QComboBox(adminFuncs_2);
        comboBoxCities->setObjectName(QString::fromUtf8("comboBoxCities"));
        sizePolicy1.setHeightForWidth(comboBoxCities->sizePolicy().hasHeightForWidth());
        comboBoxCities->setSizePolicy(sizePolicy1);

        verticalLayout_5->addWidget(comboBoxCities);

        buttonGenerate = new QPushButton(adminFuncs_2);
        buttonGenerate->setObjectName(QString::fromUtf8("buttonGenerate"));
        sizePolicy1.setHeightForWidth(buttonGenerate->sizePolicy().hasHeightForWidth());
        buttonGenerate->setSizePolicy(sizePolicy1);
        buttonGenerate->setMaximumSize(QSize(150, 16777215));

        verticalLayout_5->addWidget(buttonGenerate);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        gridLayout_2->addLayout(verticalLayout_5, 1, 0, 1, 1);

        label_8 = new QLabel(adminFuncs_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        label_9 = new QLabel(adminFuncs_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy3);
        label_9->setMaximumSize(QSize(150, 16777215));

        gridLayout_2->addWidget(label_9, 0, 1, 1, 1);

        cityInfo = new QTextBrowser(adminFuncs_2);
        cityInfo->setObjectName(QString::fromUtf8("cityInfo"));
        cityInfo->setMaximumSize(QSize(300, 150));

        gridLayout_2->addWidget(cityInfo, 1, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        customPlan = new QPushButton(adminFuncs_2);
        customPlan->setObjectName(QString::fromUtf8("customPlan"));

        verticalLayout_3->addWidget(customPlan);


        verticalLayout_6->addWidget(adminFuncs_2);


        gridLayout->addLayout(verticalLayout_6, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 901, 26));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAdmin->setText(QApplication::translate("MainWindow", "Admin", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        actionLoad->setText(QApplication::translate("MainWindow", "Load", nullptr));
#ifndef QT_NO_TOOLTIP
        actionLoad->setToolTip(QApplication::translate("MainWindow", "Load in cities", nullptr));
#endif // QT_NO_TOOLTIP
        actionLog_Out->setText(QApplication::translate("MainWindow", "Log Out", nullptr));
        actionLoad_Extended->setText(QApplication::translate("MainWindow", "Load Extended", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Select City to Add/Edit Food", nullptr));
        pushButton_loadFoods->setText(QApplication::translate("MainWindow", "Load Foods", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Select Food to Edit/Delete", nullptr));
        pushButton_changePrice->setText(QApplication::translate("MainWindow", "Change Price", nullptr));
        pushButton_deleteFood->setText(QApplication::translate("MainWindow", "Delete Food", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "New Food Name:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "New Food Cost", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Add Food", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Optimal Travel Plan:", nullptr));
        OptimalTravel->setText(QApplication::translate("MainWindow", "Berlin Travel", nullptr));
        OptimalTravel_2->setText(QApplication::translate("MainWindow", "Paris Travel", nullptr));
        label->setText(QApplication::translate("MainWindow", "List of Cities:", nullptr));
        buttonGenerate->setText(QApplication::translate("MainWindow", "Generate", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Starting City:               ", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "City Info:", nullptr));
        customPlan->setText(QApplication::translate("MainWindow", "Create Plan", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
