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
    QLabel *label_12;
    QGridLayout *gridLayout_3;
    QLineEdit *xMinGradient;
    QLineEdit *xMaxGradient;
    QLabel *label_13;
    QGridLayout *gridLayout_4;
    QLineEdit *yMinGradient;
    QLineEdit *yMaxGradient;
    QLabel *label_2;
    QGridLayout *gridLayout_5;
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
    QGridLayout *gridLayout_6;
    QPushButton *addEquation;
    QPushButton *popEquation;
    QGridLayout *gridLayout;
    QLineEdit *xMinCutting;
    QLabel *label_7;
    QLineEdit *xMaxCutting;
    QGridLayout *gridLayout_2;
    QLabel *label_11;
    QLineEdit *yMinCutting;
    QLineEdit *yMaxCutting;
    QLabel *label_3;
    QGridLayout *gridLayout_7;
    QLineEdit *plane_b;
    QLineEdit *plane_a;
    QLineEdit *plane_c;
    QLineEdit *plane_d;
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
        MainWindow->resize(758, 652);
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

        label_12 = new QLabel(gradientTab);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_2->addWidget(label_12);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        xMinGradient = new QLineEdit(gradientTab);
        xMinGradient->setObjectName(QStringLiteral("xMinGradient"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(xMinGradient->sizePolicy().hasHeightForWidth());
        xMinGradient->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(xMinGradient, 0, 0, 1, 1);

        xMaxGradient = new QLineEdit(gradientTab);
        xMaxGradient->setObjectName(QStringLiteral("xMaxGradient"));
        sizePolicy1.setHeightForWidth(xMaxGradient->sizePolicy().hasHeightForWidth());
        xMaxGradient->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(xMaxGradient, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);

        label_13 = new QLabel(gradientTab);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_2->addWidget(label_13);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        yMinGradient = new QLineEdit(gradientTab);
        yMinGradient->setObjectName(QStringLiteral("yMinGradient"));
        sizePolicy1.setHeightForWidth(yMinGradient->sizePolicy().hasHeightForWidth());
        yMinGradient->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(yMinGradient, 0, 0, 1, 1);

        yMaxGradient = new QLineEdit(gradientTab);
        yMaxGradient->setObjectName(QStringLiteral("yMaxGradient"));
        sizePolicy1.setHeightForWidth(yMaxGradient->sizePolicy().hasHeightForWidth());
        yMaxGradient->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(yMaxGradient, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_4);

        label_2 = new QLabel(gradientTab);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMargin(0);

        verticalLayout_2->addWidget(label_2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        startX = new QLineEdit(gradientTab);
        startX->setObjectName(QStringLiteral("startX"));
        startX->setEnabled(true);
        sizePolicy1.setHeightForWidth(startX->sizePolicy().hasHeightForWidth());
        startX->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(startX, 0, 0, 1, 1);

        startY = new QLineEdit(gradientTab);
        startY->setObjectName(QStringLiteral("startY"));
        sizePolicy1.setHeightForWidth(startY->sizePolicy().hasHeightForWidth());
        startY->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(startY, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_2);

        openglGradient = new GLWidget(gradientTab);
        openglGradient->setObjectName(QStringLiteral("openglGradient"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(openglGradient->sizePolicy().hasHeightForWidth());
        openglGradient->setSizePolicy(sizePolicy2);

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
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(gradientSlider->sizePolicy().hasHeightForWidth());
        gradientSlider->setSizePolicy(sizePolicy3);
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
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(cuttingTab->sizePolicy().hasHeightForWidth());
        cuttingTab->setSizePolicy(sizePolicy4);
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

        verticalLayout_7->addLayout(equationListLayout);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        addEquation = new QPushButton(cuttingTab);
        addEquation->setObjectName(QStringLiteral("addEquation"));

        gridLayout_6->addWidget(addEquation, 0, 0, 1, 1);

        popEquation = new QPushButton(cuttingTab);
        popEquation->setObjectName(QStringLiteral("popEquation"));

        gridLayout_6->addWidget(popEquation, 0, 1, 1, 1);


        verticalLayout_7->addLayout(gridLayout_6);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        xMinCutting = new QLineEdit(cuttingTab);
        xMinCutting->setObjectName(QStringLiteral("xMinCutting"));
        sizePolicy1.setHeightForWidth(xMinCutting->sizePolicy().hasHeightForWidth());
        xMinCutting->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(xMinCutting, 0, 1, 1, 1);

        label_7 = new QLabel(cuttingTab);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        xMaxCutting = new QLineEdit(cuttingTab);
        xMaxCutting->setObjectName(QStringLiteral("xMaxCutting"));
        sizePolicy1.setHeightForWidth(xMaxCutting->sizePolicy().hasHeightForWidth());
        xMaxCutting->setSizePolicy(sizePolicy1);

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
        sizePolicy1.setHeightForWidth(yMinCutting->sizePolicy().hasHeightForWidth());
        yMinCutting->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(yMinCutting, 0, 1, 1, 1);

        yMaxCutting = new QLineEdit(cuttingTab);
        yMaxCutting->setObjectName(QStringLiteral("yMaxCutting"));
        sizePolicy1.setHeightForWidth(yMaxCutting->sizePolicy().hasHeightForWidth());
        yMaxCutting->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(yMaxCutting, 0, 2, 1, 1);


        verticalLayout_7->addLayout(gridLayout_2);

        label_3 = new QLabel(cuttingTab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_3->setMargin(0);

        verticalLayout_7->addWidget(label_3);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        plane_b = new QLineEdit(cuttingTab);
        plane_b->setObjectName(QStringLiteral("plane_b"));
        sizePolicy1.setHeightForWidth(plane_b->sizePolicy().hasHeightForWidth());
        plane_b->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(plane_b, 0, 1, 1, 1);

        plane_a = new QLineEdit(cuttingTab);
        plane_a->setObjectName(QStringLiteral("plane_a"));
        sizePolicy1.setHeightForWidth(plane_a->sizePolicy().hasHeightForWidth());
        plane_a->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(plane_a, 0, 0, 1, 1);

        plane_c = new QLineEdit(cuttingTab);
        plane_c->setObjectName(QStringLiteral("plane_c"));
        sizePolicy1.setHeightForWidth(plane_c->sizePolicy().hasHeightForWidth());
        plane_c->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(plane_c, 1, 0, 1, 1);

        plane_d = new QLineEdit(cuttingTab);
        plane_d->setObjectName(QStringLiteral("plane_d"));
        sizePolicy1.setHeightForWidth(plane_d->sizePolicy().hasHeightForWidth());
        plane_d->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(plane_d, 1, 1, 1, 1);


        verticalLayout_7->addLayout(gridLayout_7);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);


        horizontalLayout_4->addLayout(verticalLayout_7);

        openglCutting = new GLWidget(cuttingTab);
        openglCutting->setObjectName(QStringLiteral("openglCutting"));
        sizePolicy2.setHeightForWidth(openglCutting->sizePolicy().hasHeightForWidth());
        openglCutting->setSizePolicy(sizePolicy2);

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
        sizePolicy3.setHeightForWidth(cuttingSlider->sizePolicy().hasHeightForWidth());
        cuttingSlider->setSizePolicy(sizePolicy3);
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

        tabWidget->setCurrentIndex(0);


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
        label_12->setText(QApplication::translate("MainWindow", "Enter range of x", nullptr));
        xMinGradient->setText(QApplication::translate("MainWindow", "-10", nullptr));
        xMinGradient->setPlaceholderText(QApplication::translate("MainWindow", "x min", nullptr));
        xMaxGradient->setText(QApplication::translate("MainWindow", "10", nullptr));
        xMaxGradient->setPlaceholderText(QApplication::translate("MainWindow", "x max", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Enter range of y", nullptr));
        yMinGradient->setText(QApplication::translate("MainWindow", "-10", nullptr));
        yMinGradient->setPlaceholderText(QApplication::translate("MainWindow", "y min", nullptr));
        yMaxGradient->setText(QApplication::translate("MainWindow", "10", nullptr));
        yMaxGradient->setPlaceholderText(QApplication::translate("MainWindow", "y max", nullptr));
        label_2->setText(QApplication::translate("MainWindow", " Starting point (x0, y0)", nullptr));
        startX->setText(QApplication::translate("MainWindow", "0", nullptr));
        startX->setPlaceholderText(QApplication::translate("MainWindow", "x", nullptr));
        startY->setText(QApplication::translate("MainWindow", "0", nullptr));
        startY->setPlaceholderText(QApplication::translate("MainWindow", "y", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Zoom", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(gradientTab), QApplication::translate("MainWindow", "Gradient Descent", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Enter equation and 3 points", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Enter graph equations", nullptr));
        addEquation->setText(QApplication::translate("MainWindow", "Add equation", nullptr));
        popEquation->setText(QApplication::translate("MainWindow", "Pop equation", nullptr));
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
        label_3->setText(QApplication::translate("MainWindow", "Enter plane equation ax + by + cz + d = 0", nullptr));
        plane_b->setText(QApplication::translate("MainWindow", "0", nullptr));
        plane_b->setPlaceholderText(QApplication::translate("MainWindow", "b", nullptr));
        plane_a->setText(QApplication::translate("MainWindow", "-0.5", nullptr));
        plane_a->setPlaceholderText(QApplication::translate("MainWindow", "a", nullptr));
        plane_c->setText(QApplication::translate("MainWindow", "1", nullptr));
        plane_c->setPlaceholderText(QApplication::translate("MainWindow", "c", nullptr));
        plane_d->setText(QApplication::translate("MainWindow", "-3", nullptr));
        plane_d->setPlaceholderText(QApplication::translate("MainWindow", "d", nullptr));
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
