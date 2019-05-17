/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *gradientTab;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_3;
    GLWidget *openglGradient;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QSlider *gradientSlider;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *startY;
    QLineEdit *equationGradient;
    QLabel *label_2;
    QLineEdit *startX;
    QWidget *cuttingTab;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_4;
    GLWidget *openglCutting;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QSlider *cuttingSlider;
    QGridLayout *gridLayout_2;
    QLineEdit *equationCutting1;
    QLineEdit *p1_x;
    QLineEdit *p2_y;
    QLineEdit *p1_z;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *p1_y;
    QLineEdit *p2_z;
    QLineEdit *p3_y;
    QLineEdit *p3_z;
    QLineEdit *p2_x;
    QLabel *label_5;
    QLineEdit *p3_x;
    QLabel *label_7;
    QLineEdit *equationCutting2;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *button3D;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonContour;
    QSpacerItem *horizontalSpacer_3;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(700, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        gradientTab = new QWidget();
        gradientTab->setObjectName(QStringLiteral("gradientTab"));
        verticalLayout_3 = new QVBoxLayout(gradientTab);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        openglGradient = new GLWidget(gradientTab);
        openglGradient->setObjectName(QStringLiteral("openglGradient"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(openglGradient->sizePolicy().hasHeightForWidth());
        openglGradient->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(openglGradient, 0, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_6->setContentsMargins(-1, 10, -1, 10);
        label_8 = new QLabel(gradientTab);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_6->addWidget(label_8);

        gradientSlider = new QSlider(gradientTab);
        gradientSlider->setObjectName(QStringLiteral("gradientSlider"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gradientSlider->sizePolicy().hasHeightForWidth());
        gradientSlider->setSizePolicy(sizePolicy1);
        gradientSlider->setBaseSize(QSize(0, 0));
        gradientSlider->setMinimum(1);
        gradientSlider->setMaximum(30);
        gradientSlider->setValue(15);
        gradientSlider->setTracking(true);
        gradientSlider->setOrientation(Qt::Vertical);
        gradientSlider->setTickPosition(QSlider::NoTicks);

        verticalLayout_6->addWidget(gradientSlider);


        gridLayout_3->addLayout(verticalLayout_6, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(gradientTab);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        startY = new QLineEdit(gradientTab);
        startY->setObjectName(QStringLiteral("startY"));

        gridLayout->addWidget(startY, 1, 2, 1, 1);

        equationGradient = new QLineEdit(gradientTab);
        equationGradient->setObjectName(QStringLiteral("equationGradient"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(equationGradient->sizePolicy().hasHeightForWidth());
        equationGradient->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(equationGradient, 0, 1, 1, 3);

        label_2 = new QLabel(gradientTab);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        startX = new QLineEdit(gradientTab);
        startX->setObjectName(QStringLiteral("startX"));

        gridLayout->addWidget(startX, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 2);


        verticalLayout_3->addLayout(gridLayout_3);

        tabWidget->addTab(gradientTab, QString());
        cuttingTab = new QWidget();
        cuttingTab->setObjectName(QStringLiteral("cuttingTab"));
        verticalLayout_5 = new QVBoxLayout(cuttingTab);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        openglCutting = new GLWidget(cuttingTab);
        openglCutting->setObjectName(QStringLiteral("openglCutting"));
        sizePolicy.setHeightForWidth(openglCutting->sizePolicy().hasHeightForWidth());
        openglCutting->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(openglCutting, 0, 0, 1, 1);

        label_6 = new QLabel(cuttingTab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_6, 1, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 10, -1, 10);
        label_9 = new QLabel(cuttingTab);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_4->addWidget(label_9);

        cuttingSlider = new QSlider(cuttingTab);
        cuttingSlider->setObjectName(QStringLiteral("cuttingSlider"));
        sizePolicy1.setHeightForWidth(cuttingSlider->sizePolicy().hasHeightForWidth());
        cuttingSlider->setSizePolicy(sizePolicy1);
        cuttingSlider->setMinimum(1);
        cuttingSlider->setMaximum(30);
        cuttingSlider->setValue(10);
        cuttingSlider->setOrientation(Qt::Vertical);

        verticalLayout_4->addWidget(cuttingSlider);


        gridLayout_4->addLayout(verticalLayout_4, 0, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        equationCutting1 = new QLineEdit(cuttingTab);
        equationCutting1->setObjectName(QStringLiteral("equationCutting1"));

        gridLayout_2->addWidget(equationCutting1, 0, 1, 1, 1);

        p1_x = new QLineEdit(cuttingTab);
        p1_x->setObjectName(QStringLiteral("p1_x"));

        gridLayout_2->addWidget(p1_x, 2, 1, 1, 1);

        p2_y = new QLineEdit(cuttingTab);
        p2_y->setObjectName(QStringLiteral("p2_y"));

        gridLayout_2->addWidget(p2_y, 3, 2, 1, 1);

        p1_z = new QLineEdit(cuttingTab);
        p1_z->setObjectName(QStringLiteral("p1_z"));
        p1_z->setEnabled(true);

        gridLayout_2->addWidget(p1_z, 2, 4, 1, 1);

        label_3 = new QLabel(cuttingTab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setMargin(0);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(cuttingTab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setMargin(0);

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        p1_y = new QLineEdit(cuttingTab);
        p1_y->setObjectName(QStringLiteral("p1_y"));

        gridLayout_2->addWidget(p1_y, 2, 2, 1, 1);

        p2_z = new QLineEdit(cuttingTab);
        p2_z->setObjectName(QStringLiteral("p2_z"));
        p2_z->setEnabled(true);

        gridLayout_2->addWidget(p2_z, 3, 4, 1, 1);

        p3_y = new QLineEdit(cuttingTab);
        p3_y->setObjectName(QStringLiteral("p3_y"));

        gridLayout_2->addWidget(p3_y, 4, 2, 1, 1);

        p3_z = new QLineEdit(cuttingTab);
        p3_z->setObjectName(QStringLiteral("p3_z"));
        p3_z->setEnabled(true);

        gridLayout_2->addWidget(p3_z, 4, 4, 1, 1);

        p2_x = new QLineEdit(cuttingTab);
        p2_x->setObjectName(QStringLiteral("p2_x"));

        gridLayout_2->addWidget(p2_x, 3, 1, 1, 1);

        label_5 = new QLabel(cuttingTab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setMargin(0);

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        p3_x = new QLineEdit(cuttingTab);
        p3_x->setObjectName(QStringLiteral("p3_x"));

        gridLayout_2->addWidget(p3_x, 4, 1, 1, 1);

        label_7 = new QLabel(cuttingTab);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        equationCutting2 = new QLineEdit(cuttingTab);
        equationCutting2->setObjectName(QStringLiteral("equationCutting2"));

        gridLayout_2->addWidget(equationCutting2, 0, 4, 1, 1);

        label_10 = new QLabel(cuttingTab);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 2, 0, 1, 2);


        verticalLayout_5->addLayout(gridLayout_4);

        tabWidget->addTab(cuttingTab, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        button3D = new QPushButton(centralWidget);
        button3D->setObjectName(QStringLiteral("button3D"));
        button3D->setMaximumSize(QSize(300, 16777215));

        horizontalLayout->addWidget(button3D);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        buttonContour = new QPushButton(centralWidget);
        buttonContour->setObjectName(QStringLiteral("buttonContour"));
        buttonContour->setMaximumSize(QSize(300, 16777215));

        horizontalLayout->addWidget(buttonContour);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "3D Renderer", nullptr));
#ifndef QT_NO_WHATSTHIS
        gradientTab->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label_8->setText(QApplication::translate("MainWindow", "Zoom", nullptr));
        label->setText(QApplication::translate("MainWindow", "Enter equation f(x, y) = ", nullptr));
        startY->setText(QApplication::translate("MainWindow", "0", nullptr));
        startY->setPlaceholderText(QApplication::translate("MainWindow", "y", nullptr));
        equationGradient->setText(QApplication::translate("MainWindow", "x*x + y*y", nullptr));
        label_2->setText(QApplication::translate("MainWindow", " Starting point (x0, y0, z0) = ", nullptr));
        startX->setText(QApplication::translate("MainWindow", "0", nullptr));
        startX->setPlaceholderText(QApplication::translate("MainWindow", "x", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(gradientTab), QApplication::translate("MainWindow", "Gradient Descent", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Enter equation and 3 points (x, y, z) of plane", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Zoom", nullptr));
        equationCutting1->setText(QApplication::translate("MainWindow", "x*x + y*y", nullptr));
        p1_x->setText(QApplication::translate("MainWindow", "-10", nullptr));
        p1_x->setPlaceholderText(QApplication::translate("MainWindow", "x", nullptr));
        p2_y->setText(QApplication::translate("MainWindow", "-1", nullptr));
        p2_y->setPlaceholderText(QApplication::translate("MainWindow", "y", nullptr));
        p1_z->setText(QApplication::translate("MainWindow", "10", nullptr));
        p1_z->setPlaceholderText(QApplication::translate("MainWindow", "z", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Point 1 (x, y, z) =", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Point 2 (x, y, z) =", nullptr));
        p1_y->setText(QApplication::translate("MainWindow", "-1", nullptr));
        p1_y->setPlaceholderText(QApplication::translate("MainWindow", "y", nullptr));
        p2_z->setText(QApplication::translate("MainWindow", "-10", nullptr));
        p2_z->setPlaceholderText(QApplication::translate("MainWindow", "z", nullptr));
        p3_y->setText(QApplication::translate("MainWindow", "10", nullptr));
        p3_y->setPlaceholderText(QApplication::translate("MainWindow", "y", nullptr));
        p3_z->setText(QApplication::translate("MainWindow", "-10", nullptr));
        p3_z->setPlaceholderText(QApplication::translate("MainWindow", "z", nullptr));
        p2_x->setText(QApplication::translate("MainWindow", "-10", nullptr));
        p2_x->setPlaceholderText(QApplication::translate("MainWindow", "x", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Point 3 (x, y, z) =", nullptr));
        p3_x->setText(QApplication::translate("MainWindow", "10", nullptr));
        p3_x->setPlaceholderText(QApplication::translate("MainWindow", "x", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "f1(x, y) =", nullptr));
        equationCutting2->setText(QApplication::translate("MainWindow", "x*x - y*y", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "f2(x, y) =", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(cuttingTab), QApplication::translate("MainWindow", "Cutting Plane", nullptr));
        button3D->setText(QApplication::translate("MainWindow", "3D Graph Mode", nullptr));
        buttonContour->setText(QApplication::translate("MainWindow", "Contour Line Mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
