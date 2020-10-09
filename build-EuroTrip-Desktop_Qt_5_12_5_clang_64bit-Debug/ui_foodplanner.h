/********************************************************************************
** Form generated from reading UI file 'foodplanner.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOODPLANNER_H
#define UI_FOODPLANNER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_foodPlanner
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QTextBrowser *cityName;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidgetCart;
    QComboBox *comboBoxRemove;
    QPushButton *removeItem;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget;
    QComboBox *comboBoxAdd;
    QPushButton *addItem;
    QHBoxLayout *horizontalLayout;
    QPushButton *exitButton;
    QPushButton *backButton;
    QPushButton *nextButton;
    QLabel *label;

    void setupUi(QDialog *foodPlanner)
    {
        if (foodPlanner->objectName().isEmpty())
            foodPlanner->setObjectName(QString::fromUtf8("foodPlanner"));
        foodPlanner->resize(762, 413);
        gridLayoutWidget = new QWidget(foodPlanner);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 741, 391));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        cityName = new QTextBrowser(gridLayoutWidget);
        cityName->setObjectName(QString::fromUtf8("cityName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cityName->sizePolicy().hasHeightForWidth());
        cityName->setSizePolicy(sizePolicy1);
        cityName->setMaximumSize(QSize(16777215, 26));

        gridLayout->addWidget(cityName, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidgetCart = new QTableWidget(gridLayoutWidget);
        if (tableWidgetCart->columnCount() < 2)
            tableWidgetCart->setColumnCount(2);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setFont(font);
        tableWidgetCart->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        tableWidgetCart->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidgetCart->setObjectName(QString::fromUtf8("tableWidgetCart"));
        tableWidgetCart->setFrameShape(QFrame::StyledPanel);
        tableWidgetCart->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidgetCart->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetCart->setShowGrid(false);
        tableWidgetCart->setColumnCount(2);
        tableWidgetCart->horizontalHeader()->setDefaultSectionSize(178);

        verticalLayout->addWidget(tableWidgetCart);

        comboBoxRemove = new QComboBox(gridLayoutWidget);
        comboBoxRemove->setObjectName(QString::fromUtf8("comboBoxRemove"));

        verticalLayout->addWidget(comboBoxRemove);

        removeItem = new QPushButton(gridLayoutWidget);
        removeItem->setObjectName(QString::fromUtf8("removeItem"));

        verticalLayout->addWidget(removeItem);


        gridLayout->addLayout(verticalLayout, 3, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tableWidget = new QTableWidget(gridLayoutWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem2->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setFrameShape(QFrame::StyledPanel);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setShowGrid(false);
        tableWidget->setColumnCount(2);
        tableWidget->horizontalHeader()->setDefaultSectionSize(178);

        verticalLayout_2->addWidget(tableWidget);

        comboBoxAdd = new QComboBox(gridLayoutWidget);
        comboBoxAdd->setObjectName(QString::fromUtf8("comboBoxAdd"));

        verticalLayout_2->addWidget(comboBoxAdd);

        addItem = new QPushButton(gridLayoutWidget);
        addItem->setObjectName(QString::fromUtf8("addItem"));

        verticalLayout_2->addWidget(addItem);


        gridLayout->addLayout(verticalLayout_2, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        exitButton = new QPushButton(gridLayoutWidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));

        horizontalLayout->addWidget(exitButton);

        backButton = new QPushButton(gridLayoutWidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        horizontalLayout->addWidget(backButton);

        nextButton = new QPushButton(gridLayoutWidget);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));

        horizontalLayout->addWidget(nextButton);


        gridLayout->addLayout(horizontalLayout, 4, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(label, 2, 0, 1, 1);


        retranslateUi(foodPlanner);

        QMetaObject::connectSlotsByName(foodPlanner);
    } // setupUi

    void retranslateUi(QDialog *foodPlanner)
    {
        foodPlanner->setWindowTitle(QApplication::translate("foodPlanner", "Dialog", nullptr));
        label_2->setText(QApplication::translate("foodPlanner", "City Name:", nullptr));
        label_3->setText(QApplication::translate("foodPlanner", "Cart Status:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetCart->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("foodPlanner", "Food Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetCart->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("foodPlanner", "Price", nullptr));
        removeItem->setText(QApplication::translate("foodPlanner", "Remove Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("foodPlanner", "Food Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("foodPlanner", "Price", nullptr));
        addItem->setText(QApplication::translate("foodPlanner", "Add Item", nullptr));
        exitButton->setText(QApplication::translate("foodPlanner", "Exit", nullptr));
        backButton->setText(QApplication::translate("foodPlanner", "Back", nullptr));
        nextButton->setText(QApplication::translate("foodPlanner", "Next", nullptr));
        label->setText(QApplication::translate("foodPlanner", "Traditional City Foods:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class foodPlanner: public Ui_foodPlanner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOODPLANNER_H
