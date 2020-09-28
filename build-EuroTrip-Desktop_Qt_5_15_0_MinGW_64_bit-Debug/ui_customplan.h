/********************************************************************************
** Form generated from reading UI file 'customplan.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMPLAN_H
#define UI_CUSTOMPLAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customPlan
{
public:
    QTextBrowser *textBrowser;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTextBrowser *startingCity;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QListWidget *listWidget;
    QPushButton *generate;

    void setupUi(QDialog *customPlan)
    {
        if (customPlan->objectName().isEmpty())
            customPlan->setObjectName(QString::fromUtf8("customPlan"));
        customPlan->resize(545, 474);
        textBrowser = new QTextBrowser(customPlan);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(300, 90, 221, 311));
        widget = new QWidget(customPlan);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 20, 241, 51));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        startingCity = new QTextBrowser(widget);
        startingCity->setObjectName(QString::fromUtf8("startingCity"));

        verticalLayout->addWidget(startingCity);

        widget1 = new QWidget(customPlan);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(30, 70, 241, 381));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        listWidget = new QListWidget(widget1);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setSelectionMode(QAbstractItemView::MultiSelection);

        verticalLayout_2->addWidget(listWidget);

        generate = new QPushButton(widget1);
        generate->setObjectName(QString::fromUtf8("generate"));

        verticalLayout_2->addWidget(generate);


        retranslateUi(customPlan);

        QMetaObject::connectSlotsByName(customPlan);
    } // setupUi

    void retranslateUi(QDialog *customPlan)
    {
        customPlan->setWindowTitle(QCoreApplication::translate("customPlan", "Custom Plan Generator", nullptr));
        label_2->setText(QCoreApplication::translate("customPlan", "Starting city:", nullptr));
        startingCity->setHtml(QCoreApplication::translate("customPlan", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("customPlan", "Select all cities to travel to:", nullptr));
        generate->setText(QCoreApplication::translate("customPlan", "Generate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customPlan: public Ui_customPlan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMPLAN_H
