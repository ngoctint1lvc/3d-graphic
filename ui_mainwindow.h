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
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *equationGradient;
    QLabel *label_2;
    QLineEdit *startX;
    QLineEdit *startY;
    QSpacerItem *verticalSpacer;
    GLWidget *openglGradient;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QSlider *gradientSlider;
    QWidget *cuttingTab;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_6;
    QLabel *label_10;
    QVBoxLayout *equationListLayout;
    QLineEdit *equationCutting;
    QPushButton *addEquation;
    QGridLayout *gridLayout;
    QLineEdit *xMinCutting;
    QLabel *label_7;
    QLineEdit *xMaxCutting;
    QGridLayout *gridLayout_2;
    QLabel *label_11;
    QLineEdit *yMinCutting;
    QLineEdit *yMaxCutting;
    QLabel *label_3;
    QLineEdit *p1_x;
    QLineEdit *p1_y;
    QLineEdit *p1_z;
    QLabel *label_4;
    QLineEdit *p2_x;
    QLineEdit *p2_y;
    QLineEdit *p2_z;
    QLabel *label_5;
    QLineEdit *p3_x;
    QLineEdit *p3_y;
    QLineEdit *p3_z;
    QSpacerItem *verticalSpacer_2;
    GLWidget *openglCutting;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QSlider *cuttingSlider;
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
        MainWindow->resize(758, 601);
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
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(gradientTab);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label);

        equationGradient = new QLineEdit(gradientTab);
        equationGradient->setObjectName(QStringLiteral("equationGradient"));
        sizePolicy.setHeightForWidth(equationGradient->sizePolicy().hasHeightForWidth());
        equationGradient->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(equationGradient);

        label_2 = new QLabel(gradientTab);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMargin(0);

        verticalLayout_2->addWidget(label_2);

        startX = new QLineEdit(gradientTab);
        startX->setObjectName(QStringLiteral("startX"));
        startX->setEnabled(true);
        sizePolicy.setHeightForWidth(startX->sizePolicy().hasHeightForWidth());
        startX->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(startX);

        startY = new QLineEdit(gradientTab);
        startY->setObjectName(QStringLiteral("startY"));
        sizePolicy.setHeightForWidth(startY->sizePolicy().hasHeightForWidth());
        startY->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(startY);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_2);

        openglGradient = new GLWidget(gradientTab);
        openglGradient->setObjectName(QStringLiteral("openglGradient"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(openglGradient->sizePolicy().hasHeightForWidth());
        openglGradient->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(openglGradient);

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
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gradientSlider->sizePolicy().hasHeightForWidth());
        gradientSlider->setSizePolicy(sizePolicy2);
        gradientSlider->setBaseSize(QSize(0, 0));
        gradientSlider->setMinimum(1);
        gradientSlider->setMaximum(100);
        gradientSlider->setValue(15);
        gradientSlider->setTracking(true);
        gradientSlider->setOrientation(Qt::Vertical);
        gradientSlider->setTickPosition(QSlider::NoTicks);

        verticalLayout_6->addWidget(gradientSlider);


        horizontalLayout_3->addLayout(verticalLayout_6);


        verticalLayout_3->addLayout(horizontalLayout_3);

        tabWidget->addTab(gradientTab, QString());
        cuttingTab = new QWidget();
        cuttingTab->setObjectName(QStringLiteral("cuttingTab"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cuttingTab->sizePolicy().hasHeightForWidth());
        cuttingTab->setSizePolicy(sizePolicy3);
        verticalLayout_5 = new QVBoxLayout(cuttingTab);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setSizeConstraint(QLayout::SetMinimumSize);
        label_6 = new QLabel(cuttingTab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_6);

        label_10 = new QLabel(cuttingTab);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_7->addWidget(label_10);

        equationListLayout = new QVBoxLayout();
        equationListLayout->setSpacing(6);
        equationListLayout->setObjectName(QStringLiteral("equationListLayout"));
        equationListLayout->setSizeConstraint(QLayout::SetMinimumSize);
        equationCutting = new QLineEdit(cuttingTab);
        equationCutting->setObjectName(QStringLiteral("equationCutting"));
        equationCutting->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(equationCutting->sizePolicy().hasHeightForWidth());
        equationCutting->setSizePolicy(sizePolicy4);
        equationCutting->setContextMenuPolicy(Qt::DefaultContextMenu);

        equationListLayout->addWidget(equationCutting);


        verticalLayout_7->addLayout(equationListLayout);

        addEquation = new QPushButton(cuttingTab);
        addEquation->setObjectName(QStringLiteral("addEquation"));

        verticalLayout_7->addWidget(addEquation);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        xMinCutting = new QLineEdit(cuttingTab);
        xMinCutting->setObjectName(QStringLiteral("xMinCutting"));
        sizePolicy4.setHeightForWidth(xMinCutting->sizePolicy().hasHeightForWidth());
        xMinCutting->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(xMinCutting, 0, 1, 1, 1);

        label_7 = new QLabel(cuttingTab);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        xMaxCutting = new QLineEdit(cuttingTab);
        xMaxCutting->setObjectName(QStringLiteral("xMaxCutting"));
        sizePolicy4.setHeightForWidth(xMaxCutting->sizePolicy().hasHeightForWidth());
        xMaxCutting->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(xMaxCutting, 0, 2, 1, 1);


        verticalLayout_7->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_11 = new QLabel(cuttingTab);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 0, 0, 1, 1);

        yMinCutting = new QLineEdit(cuttingTab);
        yMinCutting->setObjectName(QStringLiteral("yMinCutting"));
        sizePolicy4.setHeightForWidth(yMinCutting->sizePolicy().hasHeightForWidth());
        yMinCutting->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(yMinCutting, 0, 1, 1, 1);

        yMaxCutting = new QLineEdit(cuttingTab);
        yMaxCutting->setObjectName(QStringLiteral("yMaxCutting"));
        sizePolicy4.setHeightForWidth(yMaxCutting->sizePolicy().hasHeightForWidth());
        yMaxCutting->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(yMaxCutting, 0, 2, 1, 1);


        verticalLayout_7->addLayout(gridLayout_2);

        label_3 = new QLabel(cuttingTab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setMargin(0);

        verticalLayout_7->addWidget(label_3);

        p1_x = new QLineEdit(cuttingTab);
        p1_x->setObjectName(QStringLiteral("p1_x"));
        sizePolicy.setHeightForWidth(p1_x->sizePolicy().hasHeightForWidth());
        p1_x->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(p1_x);

        p1_y = new QLineEdit(cuttingTab);
        p1_y->setObjectName(QStringLiteral("p1_y"));
        sizePolicy.setHeightForWidth(p1_y->sizePolicy().hasHeightForWidth());
        p1_y->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(p1_y);

        p1_z = new QLineEdit(cuttingTab);
        p1_z->setObjectName(QStringLiteral("p1_z"));
        p1_z->setEnabled(true);
        sizePolicy.setHeightForWidth(p1_z->sizePolicy().hasHeightForWidth());
        p1_z->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(p1_z);

        label_4 = new QLabel(cuttingTab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setMargin(0);

        verticalLayout_7->addWidget(label_4);

        p2_x = new QLineEdit(cuttingTab);
        p2_x->setObjectName(QStringLiteral("p2_x"));
        sizePolicy.setHeightForWidth(p2_x->sizePolicy().hasHeightForWidth());
        p2_x->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(p2_x);

        p2_y = new QLineEdit(cuttingTab);
        p2_y->setObjectName(QStringLiteral("p2_y"));
        sizePolicy.setHeightForWidth(p2_y->sizePolicy().hasHeightForWidth());
        p2_y->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(p2_y);

        p2_z = new QLineEdit(cuttingTab);
        p2_z->setObjectName(QStringLiteral("p2_z"));
        p2_z->setEnabled(true);
        sizePolicy.setHeightForWidth(p2_z->sizePolicy().hasHeightForWidth());
        p2_z->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(p2_z);

        label_5 = new QLabel(cuttingTab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setMargin(0);

        verticalLayout_7->addWidget(label_5);

        p3_x = new QLineEdit(cuttingTab);
        p3_x->setObjectName(QStringLiteral("p3_x"));
        sizePolicy.setHeightForWidth(p3_x->sizePolicy().hasHeightForWidth());
        p3_x->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(p3_x);

        p3_y = new QLineEdit(cuttingTab);
        p3_y->setObjectName(QStringLiteral("p3_y"));
        sizePolicy.setHeightForWidth(p3_y->sizePolicy().hasHeightForWidth());
        p3_y->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(p3_y);

        p3_z = new QLineEdit(cuttingTab);
        p3_z->setObjectName(QStringLiteral("p3_z"));
        p3_z->setEnabled(true);
        sizePolicy.setHeightForWidth(p3_z->sizePolicy().hasHeightForWidth());
        p3_z->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(p3_z);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);


        horizontalLayout_4->addLayout(verticalLayout_7);

        openglCutting = new GLWidget(cuttingTab);
        openglCutting->setObjectName(QStringLiteral("openglCutting"));
        sizePolicy1.setHeightForWidth(openglCutting->sizePolicy().hasHeightForWidth());
        openglCutting->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(openglCutting);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 10, -1, 10);
        label_9 = new QLabel(cuttingTab);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_4->addWidget(label_9);

        cuttingSlider = new QSlider(cuttingTab);
        cuttingSlider->setObjectName(QStringLiteral("cuttingSlider"));
        sizePolicy2.setHeightForWidth(cuttingSlider->sizePolicy().hasHeightForWidth());
        cuttingSlider->setSizePolicy(sizePolicy2);
        cuttingSlider->setMinimum(1);
        cuttingSlider->setMaximum(30);
        cuttingSlider->setValue(10);
        cuttingSlider->setOrientation(Qt::Vertical);

        verticalLayout_4->addWidget(cuttingSlider);


        horizontalLayout_4->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_4);

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

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "3D Renderer", nullptr));
#ifndef QT_NO_WHATSTHIS
        gradientTab->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("MainWindow", "Enter equations", nullptr));
        equationGradient->setText(QApplication::translate("MainWindow", "x*x + y*cos(x)", nullptr));
        label_2->setText(QApplication::translate("MainWindow", " Starting point (x0, y0)", nullptr));
        startX->setText(QApplication::translate("MainWindow", "0", nullptr));
        startX->setPlaceholderText(QApplication::translate("MainWindow", "x", nullptr));
        startY->setText(QApplication::translate("MainWindow", "0", nullptr));
        startY->setPlaceholderText(QApplication::translate("MainWindow", "y", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Zoom", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(gradientTab), QApplication::translate("MainWindow", "Gradient Descent", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Enter equation and 3 points", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Equations", nullptr));
        equationCutting->setText(QApplication::translate("MainWindow", "x*x + y*y", nullptr));
        addEquation->setText(QApplication::translate("MainWindow", "Add equation", nullptr));
        xMinCutting->setText(QApplication::translate("MainWindow", "-10", nullptr));
        xMinCutting->setPlaceholderText(QApplication::translate("MainWindow", "x min", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "range x", nullptr));
        xMaxCutting->setText(QApplication::translate("MainWindow", "10", nullptr));
        xMaxCutting->setPlaceholderText(QApplication::translate("MainWindow", "x max", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "range y", nullptr));
        yMinCutting->setText(QApplication::translate("MainWindow", "-10", nullptr));
        yMinCutting->setPlaceholderText(QApplication::translate("MainWindow", "y min", nullptr));
        yMaxCutting->setText(QApplication::translate("MainWindow", "10", nullptr));
        yMaxCutting->setPlaceholderText(QApplication::translate("MainWindow", "y max", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Point 1 (x, y, z) =", nullptr));
        p1_x->setText(QApplication::translate("MainWindow", "-10", nullptr));
        p1_x->setPlaceholderText(QApplication::translate("MainWindow", "x", nullptr));
        p1_y->setText(QApplication::translate("MainWindow", "-1", nullptr));
        p1_y->setPlaceholderText(QApplication::translate("MainWindow", "y", nullptr));
        p1_z->setText(QApplication::translate("MainWindow", "10", nullptr));
        p1_z->setPlaceholderText(QApplication::translate("MainWindow", "z", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Point 2 (x, y, z) =", nullptr));
        p2_x->setText(QApplication::translate("MainWindow", "-10", nullptr));
        p2_x->setPlaceholderText(QApplication::translate("MainWindow", "x", nullptr));
        p2_y->setText(QApplication::translate("MainWindow", "-1", nullptr));
        p2_y->setPlaceholderText(QApplication::translate("MainWindow", "y", nullptr));
        p2_z->setText(QApplication::translate("MainWindow", "-10", nullptr));
        p2_z->setPlaceholderText(QApplication::translate("MainWindow", "z", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Point 3 (x, y, z) =", nullptr));
        p3_x->setText(QApplication::translate("MainWindow", "10", nullptr));
        p3_x->setPlaceholderText(QApplication::translate("MainWindow", "x", nullptr));
        p3_y->setText(QApplication::translate("MainWindow", "10", nullptr));
        p3_y->setPlaceholderText(QApplication::translate("MainWindow", "y", nullptr));
        p3_z->setText(QApplication::translate("MainWindow", "-10", nullptr));
        p3_z->setPlaceholderText(QApplication::translate("MainWindow", "z", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Zoom", nullptr));
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
