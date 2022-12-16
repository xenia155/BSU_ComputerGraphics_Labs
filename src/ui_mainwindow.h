/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "letter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLetter_colour;
    QAction *actionInfo;
    QAction *actionexit;
    QWidget *centralwidget;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QLineEdit *lineEdit_5;
    QLabel *label_5;
    QPushButton *pushButton_11;
    QLabel *label_8;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_7;
    QLabel *label;
    QPushButton *pushButton_4;
    QLabel *label_9;
    QPushButton *pushButton_7;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    letter *widget;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_9;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(951, 823);
        actionLetter_colour = new QAction(MainWindow);
        actionLetter_colour->setObjectName(QString::fromUtf8("actionLetter_colour"));
        actionInfo = new QAction(MainWindow);
        actionInfo->setObjectName(QString::fromUtf8("actionInfo"));
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName(QString::fromUtf8("actionexit"));
        actionexit->setMenuRole(QAction::QuitRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 180, 81, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Trebuchet MS"));
        font.setPointSize(9);
        font.setBold(true);
        label_4->setFont(font);
        label_4->setFrameShape(QFrame::StyledPanel);
        label_4->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(780, 430, 150, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(780, 330, 150, 40));
        pushButton_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 130, 81, 40));
        label_3->setFont(font);
        label_3->setFrameShape(QFrame::StyledPanel);
        label_3->setAlignment(Qt::AlignCenter);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(790, 230, 129, 39));
        pushButton_5->setFont(font1);
        lineEdit_6 = new QLineEdit(centralwidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(110, 280, 100, 40));
        lineEdit_6->setFont(font1);
        lineEdit_6->setAlignment(Qt::AlignCenter);
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(790, 130, 129, 39));
        pushButton_8->setFont(font1);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(790, 30, 130, 40));
        pushButton_6->setFont(font1);
        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(110, 230, 100, 40));
        lineEdit_5->setFont(font1);
        lineEdit_5->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 230, 81, 40));
        label_5->setFont(font);
        label_5->setFrameShape(QFrame::StyledPanel);
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(20, 629, 190, 141));
        pushButton_11->setFont(font1);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 380, 81, 40));
        label_8->setFont(font);
        label_8->setFrameShape(QFrame::StyledPanel);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 280, 81, 40));
        label_6->setFont(font);
        label_6->setFrameShape(QFrame::StyledPanel);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 80, 100, 40));
        lineEdit_2->setFont(font1);
        lineEdit_2->setAlignment(Qt::AlignCenter);
        lineEdit_7 = new QLineEdit(centralwidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(110, 330, 100, 40));
        lineEdit_7->setFont(font1);
        lineEdit_7->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 81, 40));
        label->setFont(font);
        label->setFrameShape(QFrame::StyledPanel);
        label->setAlignment(Qt::AlignCenter);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(790, 180, 129, 39));
        pushButton_4->setFont(font1);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 430, 81, 40));
        label_9->setFont(font);
        label_9->setFrameShape(QFrame::StyledPanel);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(790, 80, 130, 40));
        pushButton_7->setFont(font1);
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(110, 130, 100, 40));
        lineEdit_3->setFont(font1);
        lineEdit_3->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 81, 40));
        label_2->setFont(font);
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setAlignment(Qt::AlignCenter);
        widget = new letter(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(230, 0, 541, 771));
        lineEdit_8 = new QLineEdit(centralwidget);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(110, 380, 100, 40));
        lineEdit_8->setFont(font1);
        lineEdit_8->setAlignment(Qt::AlignCenter);
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(780, 630, 150, 140));
        pushButton_9->setFont(font1);
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(110, 180, 100, 40));
        lineEdit_4->setFont(font1);
        lineEdit_4->setAlignment(Qt::AlignCenter);
        lineEdit_9 = new QLineEdit(centralwidget);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(110, 430, 100, 40));
        lineEdit_9->setFont(font1);
        lineEdit_9->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 30, 100, 40));
        lineEdit->setFont(font1);
        lineEdit->setAlignment(Qt::AlignCenter);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(780, 380, 150, 40));
        pushButton_3->setFont(font1);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 330, 81, 40));
        label_7->setFont(font);
        label_7->setFrameShape(QFrame::StyledPanel);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 951, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLetter_colour->setText(QCoreApplication::translate("MainWindow", "Letter colour", nullptr));
        actionInfo->setText(QCoreApplication::translate("MainWindow", "Info!", nullptr));
        actionexit->setText(QCoreApplication::translate("MainWindow", "exit", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "x transfer:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "xy projection", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "xz projection", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "z scale:", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "transfer", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "rotation z", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "rotation x", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "y transfer:", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Info!", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "y rotation:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "z transfer:", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("MainWindow", "30", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "x scale:", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "scaling", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "z rotation:", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "rotation y", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "y scale:", nullptr));
        lineEdit_8->setText(QCoreApplication::translate("MainWindow", "30", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "draw letter", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        lineEdit_9->setText(QCoreApplication::translate("MainWindow", "30", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "zy projection", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "x rotation:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
