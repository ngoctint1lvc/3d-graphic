#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "glwidget.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->openglGradient->setGraphType(GraphType::GRADIENT_DESCENT);
    ui->openglCutting->setGraphType(GraphType::CUTTING_PLANE);
    ui->openglGradient->addGraph("x*x + y*y");
    QList<QLineEdit*> lst = ui->equationListLayout->findChildren<QLineEdit*>();
    for (int i = 0; i < lst.length(); i++) {
        expressionCuttingList.append(lst[i]->text());
        ui->openglCutting->addGraph(lst[i]->text());
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateInput() {
    // gradient descent
    expressionGradient = ui->equationGradient->text();
    start.setX(ui->startX->text().toFloat());
    start.setY(ui->startY->text().toFloat());

    // cutting plane
    expressionCutting = ui->equationCutting->text();

    point1.setX(ui->p1_x->text().toFloat());
    point1.setY(ui->p1_y->text().toFloat());
    point1.setZ(ui->p1_z->text().toFloat());

    point2.setX(ui->p2_x->text().toFloat());
    point2.setY(ui->p2_y->text().toFloat());
    point2.setZ(ui->p2_z->text().toFloat());

    point3.setX(ui->p3_x->text().toFloat());
    point3.setY(ui->p3_y->text().toFloat());
    point3.setZ(ui->p3_z->text().toFloat());
}

void MainWindow::on_button3D_clicked()
{
    updateInput();
    if (ui->tabWidget->currentIndex() == 0) {
        // gradient descent tab
        ui->statusBar->showMessage("gradient descent tab active", 1000);

        ui->openglGradient->setStartingPoint(start);
        ui->openglGradient->updateGraphExpression(0, expressionGradient);
        ui->openglGradient->changeMode(GraphMode::GRAPHIC_3D);
    }
    else {
        // cutting plane tab
        ui->statusBar->showMessage("cutting plane tab active", 1000);
        ui->openglCutting->setPlane(point1, point2, point3);

        const QList<QLineEdit*> lst = ui->equationListLayout->findChildren<QLineEdit*>();
        std::cout << lst.length() << std::endl;
        for (int i = 0; i < lst.length(); i++) {
            std::cout << lst[i]->text().toStdString() << std::endl;
            ui->openglCutting->updateGraphExpression(i, lst[i]->text());
        }
//        ui->openglCutting->updateGraphExpression(0, expressionCutting);

        ui->openglCutting->changeMode(GraphMode::GRAPHIC_3D);
        // note: call changeMode will update opengl view
    }
}

void MainWindow::on_buttonContour_clicked()
{
    updateInput();
    if (ui->tabWidget->currentIndex() == 0) {
        // gradient descent tab
        ui->openglGradient->setStartingPoint(start);
        ui->openglGradient->updateGraphExpression(0, expressionGradient);
        ui->openglGradient->changeMode(GraphMode::CONTOUR_LINE);
    }
    else {
        // cutting plane tab
        ui->statusBar->showMessage("cutting plane does not support contour line mode", 2000);
    }
}

void MainWindow::on_gradientSlider_valueChanged(int value)
{
    ui->openglGradient->setZoom(ui->gradientSlider->value());
}

void MainWindow::on_cuttingSlider_valueChanged(int value)
{
    ui->openglCutting->setZoom(ui->cuttingSlider->value());
}

void MainWindow::on_addEquation_clicked()
{
    QLineEdit* newEquation = new QLineEdit();
    QSizePolicy policy;
    policy.setHorizontalPolicy(QSizePolicy::Minimum);
    newEquation->setSizePolicy(policy);
    ui->equationListLayout->addWidget(newEquation);
    ui->openglCutting->addGraph("");
    expressionCuttingList.append("");
}
