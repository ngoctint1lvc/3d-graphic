#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QVector2D>
#include <QVector3D>
#include "glwidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:

private slots:
    void on_button3D_clicked();

    void on_buttonContour_clicked();

    void on_gradientSlider_valueChanged(int value);

    void on_cuttingSlider_valueChanged(int value);

private:
    void updateInput();
    Ui::MainWindow *ui;
    GLWidget* glWidget;
    QString expressionGradient;
    QVector2D start; // starting point for gradient
    QString expressionCutting1, expressionCutting2;
    QVector3D point1, point2, point3;  // 3 points of cutting plane
};

#endif // MAINWINDOW_H
