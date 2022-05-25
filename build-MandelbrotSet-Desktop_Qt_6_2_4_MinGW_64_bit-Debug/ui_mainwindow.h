/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *Time;
    QPushButton *CPUButton;
    QPushButton *MPIButton;
    QPushButton *OpenMPButton;
    QPushButton *ExampleButton;
    QLineEdit *X;
    QLineEdit *Y;
    QLineEdit *Zoom;
    QLineEdit *Iterations;
    QLabel *Image;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 510, 41, 51));
        label->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 510, 41, 51));
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(290, 510, 81, 51));
        label_3->setMinimumSize(QSize(0, 0));
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(460, 510, 121, 51));
        label_4->setMinimumSize(QSize(0, 0));
        label_4->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(840, 510, 81, 51));
        label_5->setMinimumSize(QSize(0, 0));
        label_5->setFont(font);
        Time = new QLabel(centralwidget);
        Time->setObjectName(QString::fromUtf8("Time"));
        Time->setGeometry(QRect(910, 510, 81, 51));
        Time->setMinimumSize(QSize(0, 0));
        Time->setFont(font);
        CPUButton = new QPushButton(centralwidget);
        CPUButton->setObjectName(QString::fromUtf8("CPUButton"));
        CPUButton->setGeometry(QRect(340, 450, 101, 41));
        MPIButton = new QPushButton(centralwidget);
        MPIButton->setObjectName(QString::fromUtf8("MPIButton"));
        MPIButton->setGeometry(QRect(560, 450, 101, 41));
        OpenMPButton = new QPushButton(centralwidget);
        OpenMPButton->setObjectName(QString::fromUtf8("OpenMPButton"));
        OpenMPButton->setGeometry(QRect(770, 450, 101, 41));
        ExampleButton = new QPushButton(centralwidget);
        ExampleButton->setObjectName(QString::fromUtf8("ExampleButton"));
        ExampleButton->setGeometry(QRect(130, 450, 101, 41));
        X = new QLineEdit(centralwidget);
        X->setObjectName(QString::fromUtf8("X"));
        X->setGeometry(QRect(70, 520, 71, 41));
        X->setFont(font);
        Y = new QLineEdit(centralwidget);
        Y->setObjectName(QString::fromUtf8("Y"));
        Y->setGeometry(QRect(200, 520, 71, 41));
        Y->setFont(font);
        Zoom = new QLineEdit(centralwidget);
        Zoom->setObjectName(QString::fromUtf8("Zoom"));
        Zoom->setGeometry(QRect(370, 520, 71, 41));
        Zoom->setFont(font);
        Iterations = new QLineEdit(centralwidget);
        Iterations->setObjectName(QString::fromUtf8("Iterations"));
        Iterations->setGeometry(QRect(570, 520, 71, 41));
        Iterations->setFont(font);
        Image = new QLabel(centralwidget);
        Image->setObjectName(QString::fromUtf8("Image"));
        Image->setGeometry(QRect(0, 0, 1000, 420));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 25));
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
        label->setText(QCoreApplication::translate("MainWindow", "X = ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Y = ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Zoom = ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Iterations = ", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Time = ", nullptr));
        Time->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        CPUButton->setText(QCoreApplication::translate("MainWindow", "CPU", nullptr));
        MPIButton->setText(QCoreApplication::translate("MainWindow", "MPI", nullptr));
        OpenMPButton->setText(QCoreApplication::translate("MainWindow", "OpenMP", nullptr));
        ExampleButton->setText(QCoreApplication::translate("MainWindow", "Example", nullptr));
        Image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
