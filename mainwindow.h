#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QVector2D>
#include <QVector3D>
#include "glwidget.h"
#include <QLineEdit>

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

    void on_addEquation_clicked();

    void on_popEquation_clicked();

private:
    void updateInput();
    Ui::MainWindow *ui;
    GLWidget* glWidget;
    QString expressionGradient;
    QVector2D start; // starting point for gradient
    QVector<QLineEdit*>expressionCuttingList;
};

#endif // MAINWINDOW_H
