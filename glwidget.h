#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QVector2D>
#include <QVector3D>
#include "expression.h"

enum GraphMode {
    GRAPHIC_3D,
    CONTOUR_LINE
};

enum GraphType {
    GRADIENT_DESCENT,
    CUTTING_PLANE
};

struct Graph {
    Expression expression;
    float formula(float x, float y);
    void setExpression(QString exp);
    Graph() {}
    Graph(QString exp);
};

class GLWidget : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT

public:
    GLWidget(QWidget *parent = 0);
    ~GLWidget();

    QSize minimumSizeHint() const override;
    QSize sizeHint() const override;

    void changeMode(GraphMode mode);
    void getColor(float height, QVector3D* color);  // get color for contour line mode
    void setZoom(int value) { m_zoom = value; update(); }
    void setGraphType(GraphType type) {m_graphType = type; update();}
    void setStartingPoint(QVector2D start);
    void setPlane(QVector3D p1, QVector3D p2, QVector3D p3);
    void addGraph(QString exp);
    void updateGraphExpression(int index, QString exp);
    void popGraph();
    void setRange(float xMin, float xMax, float yMin, float yMax);

public slots:
    void cleanup();

protected:
    void initializeGL() override;
    void paintGL() override;
    void resizeGL(int width, int height) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void drawCoordinates();
    void drawColorPanel();
    void drawPlane();
    void drawGraph(Graph*);
//    float formula(float x, float y);
    void drawGradientDescent(Graph*);

    GraphType m_graphType;
    GraphMode m_mode;
    int m_xRot;
    int m_yRot;
    int m_zRot;
    int m_zoom;
    QPoint m_lastPos;
    QVector<QVector3D> colorList;  // for contour line mode
    QVector2D startingPoint;
    QVector<QVector3D> plane;
    QVector<Graph*> graphList;
    float x_min;
    float x_max;
    float y_min;
    float y_max;
//    Expression m_expression;
};

#endif
