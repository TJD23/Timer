/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *lbl_clock;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(203, 253);
        MainWindow->setMinimumSize(QSize(203, 253));
        MainWindow->setMaximumSize(QSize(203, 253));
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lbl_clock = new QLabel(centralWidget);
        lbl_clock->setObjectName(QString::fromUtf8("lbl_clock"));
        lbl_clock->setGeometry(QRect(0, 10, 201, 91));
        QFont font;
        font.setPointSize(26);
        lbl_clock->setFont(font);
        lbl_clock->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 90, 101, 23));
        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(30, 130, 151, 22));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 203, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        comboBox->setCurrentIndex(9);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QString());
        lbl_clock->setText(QApplication::translate("MainWindow", "00:00:00", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "00:00:05", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "00:00:45", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "00:15:00", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "00:30:00", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "00:45:00", nullptr));
        comboBox->setItemText(5, QApplication::translate("MainWindow", "01:00:00", nullptr));
        comboBox->setItemText(6, QApplication::translate("MainWindow", "01:15:00", nullptr));
        comboBox->setItemText(7, QApplication::translate("MainWindow", "01:30:00", nullptr));
        comboBox->setItemText(8, QApplication::translate("MainWindow", "01:45:00", nullptr));
        comboBox->setItemText(9, QApplication::translate("MainWindow", "02:00:00", nullptr));

        comboBox->setCurrentText(QApplication::translate("MainWindow", "02:00:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
