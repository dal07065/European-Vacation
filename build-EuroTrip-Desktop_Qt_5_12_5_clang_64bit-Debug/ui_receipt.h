/********************************************************************************
** Form generated from reading UI file 'receipt.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIPT_H
#define UI_RECEIPT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Receipt
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Receipt)
    {
        if (Receipt->objectName().isEmpty())
            Receipt->setObjectName(QString::fromUtf8("Receipt"));
        Receipt->resize(381, 526);
        textBrowser = new QTextBrowser(Receipt);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 20, 341, 481));
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);

        retranslateUi(Receipt);

        QMetaObject::connectSlotsByName(Receipt);
    } // setupUi

    void retranslateUi(QDialog *Receipt)
    {
        Receipt->setWindowTitle(QApplication::translate("Receipt", "Travel Receipt", nullptr));
        textBrowser->setHtml(QApplication::translate("Receipt", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courior';\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier'; font-size:8pt; font-weight:600;\">Memory Leak</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier'; font-size:8pt; font-weight:600;\">EuroTrip</span></p>\n"
"<p align="
                        "\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier'; font-size:8pt; font-weight:600;\">Custom Trip Plan</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier'; font-size:8pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier'; font-size:8pt; font-weight:600;\">   Name                    Qty   Price</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier'; font-size:8pt; font-weight:600;\">  =====================================</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Receipt: public Ui_Receipt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIPT_H
