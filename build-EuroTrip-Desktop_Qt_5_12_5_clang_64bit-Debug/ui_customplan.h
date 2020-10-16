/********************************************************************************
** Form generated from reading UI file 'customplan.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMPLAN_H
#define UI_CUSTOMPLAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customPlan
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *generate;
    QPushButton *startTrip;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QLabel *label_2;
    QTextBrowser *startingCity;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QLabel *label_4;
    QSpinBox *spinBox;

    void setupUi(QDialog *customPlan)
    {
        if (customPlan->objectName().isEmpty())
            customPlan->setObjectName(QString::fromUtf8("customPlan"));
        customPlan->resize(520, 332);
        gridLayoutWidget = new QWidget(customPlan);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(7, 6, 501, 311));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        generate = new QPushButton(gridLayoutWidget);
        generate->setObjectName(QString::fromUtf8("generate"));

        gridLayout->addWidget(generate, 6, 0, 1, 1);

        startTrip = new QPushButton(gridLayoutWidget);
        startTrip->setObjectName(QString::fromUtf8("startTrip"));

        gridLayout->addWidget(startTrip, 6, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 11));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        textBrowser = new QTextBrowser(gridLayoutWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout->addWidget(textBrowser, 3, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 16));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        startingCity = new QTextBrowser(gridLayoutWidget);
        startingCity->setObjectName(QString::fromUtf8("startingCity"));
        startingCity->setMaximumSize(QSize(16777215, 23));

        gridLayout->addWidget(startingCity, 1, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 11));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(gridLayoutWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMaximumSize(QSize(16777215, 202));
        listWidget->setSelectionMode(QAbstractItemView::MultiSelection);

        verticalLayout->addWidget(listWidget);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 11));

        verticalLayout->addWidget(label_4);

        spinBox = new QSpinBox(gridLayoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        verticalLayout->addWidget(spinBox);


        gridLayout->addLayout(verticalLayout, 3, 0, 1, 1);


        retranslateUi(customPlan);

        QMetaObject::connectSlotsByName(customPlan);
    } // setupUi

    void retranslateUi(QDialog *customPlan)
    {
        customPlan->setWindowTitle(QApplication::translate("customPlan", "Custom Plan Generator", nullptr));
        generate->setText(QApplication::translate("customPlan", "Generate", nullptr));
        startTrip->setText(QApplication::translate("customPlan", "Start Trip", nullptr));
        label_3->setText(QApplication::translate("customPlan", "Current Plan:", nullptr));
        label_2->setText(QApplication::translate("customPlan", "Starting city:", nullptr));
        startingCity->setHtml(QApplication::translate("customPlan", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        label->setText(QApplication::translate("customPlan", "Select all cities to travel to:", nullptr));
        label_4->setText(QApplication::translate("customPlan", "OR - Select NUMBER of cities to travel to:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customPlan: public Ui_customPlan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMPLAN_H
