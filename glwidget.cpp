#include "glwidget.h"
#include <QMouseEvent>
#include <QOpenGLShaderProgram>
#include <QCoreApplication>
#include <math.h>
#include <QMessageBox>
#include <iostream>
#include <GL/glu.h>

Graph::Graph(QString exp)
{
    expression.setFormula(exp);
}

float Graph::formula(float x, float y)
{
    return expression.eval(x, y);
}

void Graph::setExpression(QString exp)
{
    expression.setFormula(exp);
}

//void GLWidget::setExpression(QString exp)
//{
//    m_expression.setFormula(exp);
//}

GLWidget::GLWidget(QWidget *parent)
    : QOpenGLWidget(parent),
      m_xRot(10),
      m_yRot(-30),
      m_zRot(0),
      m_zoom(10),
      m_mode(GraphMode::GRAPHIC_3D),
      m_graphType(GraphType::GRADIENT_DESCENT)
{
    // init color list for contour line mode
    colorList.push_back(QVector3D(0.4, 1, 1));
    colorList.push_back(QVector3D(0.8, 1, 0.8));
    colorList.push_back(QVector3D(0.6, 1, 0.2));
    colorList.push_back(QVector3D(0.8, 1, 0.2));
    colorList.push_back(QVector3D(0.8, 0.8, 0));
    colorList.push_back(QVector3D(1, 1, 0));
    colorList.push_back(QVector3D(1, 0.8, 0.4));
    colorList.push_back(QVector3D(1, 0.6, 0.2));
    colorList.push_back(QVector3D(1, 0.4, 0));
    colorList.push_back(QVector3D(1, 0, 0));

    // init plane
    plane.resize(3);
}

GLWidget::~GLWidget()
{
    cleanup();
}

QSize GLWidget::minimumSizeHint() const
{
    return QSize(60, 60);
}

QSize GLWidget::sizeHint() const
{
    return QSize(600, 600);
}

void GLWidget::cleanup()
{
    makeCurrent();
    doneCurrent();
}

void GLWidget::changeMode(GraphMode mode)
{
    m_mode = mode;
    // reset x, y, z rotation
    if (mode == GraphMode::CONTOUR_LINE) {
        m_xRot = 90;
        m_yRot = 0;
        m_zRot = 0;
        m_zoom = 7;
    }
    else {
        m_xRot = 10;
        m_yRot = -30;
        m_zRot = 0;
        m_zoom = 10;
    }
    update();
}

void GLWidget::initializeGL()
{
    connect(context(), &QOpenGLContext::aboutToBeDestroyed, this, &GLWidget::cleanup);

    initializeOpenGLFunctions();

    glEnable(GL_DEPTH_TEST);
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClearDepth(1);
}

void GLWidget::drawGraph(Graph* graph) {
    // calculate plane formula
    float a, b, c, d;
    if (m_graphType == GraphType::CUTTING_PLANE) {
        drawPlane();
        QVector3D a1 = plane[0] - plane[1];
        QVector3D a2 = plane[1] - plane[2];
        QVector3D n = QVector3D::crossProduct(a1, a2);
        a = n.x();
        b = n.y();
        c = n.z();
        d = -a*plane[1].x() - b*plane[1].y() - c*plane[1].z();
    }

    float bigStep = m_zoom/20.0; // 0.5
    float step = qMax<float>(0.01, bigStep/40.0);
    float xMax = m_zoom*0.6;
    float zMax = m_zoom*0.6;
    for (float x = -xMax; x <= xMax; x += bigStep){
        for (float z = -zMax; z <= zMax; z += bigStep){
            // draw mesh
            glLineWidth(1.3);
            if (m_mode == GraphMode::GRAPHIC_3D) {
                glBegin(GL_LINE_STRIP);
                    glColor3f(0, 0, 0);
                    for (float temp = z; temp <= z + bigStep; temp += step){
                        glVertex3f(x, graph->formula(x, temp), temp);
                    }
                    for (float temp = x; temp <= x + bigStep; temp += step){
                        glVertex3f(temp, graph->formula(temp, z + bigStep), z + bigStep);
                    }
                glEnd();
            }
            else {
                glBegin(GL_LINE_STRIP);
                    glColor3f(0, 0, 0);
                    glVertex3f(x, 0.1, z);
                    glVertex3f(x, 0.1, z + bigStep);
                    glVertex3f(x + bigStep, 0.1, z + bigStep);
                glEnd();
            }

            // draw polygon
            glBegin(GL_QUADS);
                for (float x1 = x; x1 <= x + bigStep; x1 += step){
                    for (float z1 = z; z1 <= z + bigStep; z1 += step){
                        if (m_graphType == GraphType::CUTTING_PLANE) {
                            if (a * x1 + b * graph->formula(x1, z1) + c * z1 + d < 0)
                                glColor3f(0, 1, 0);
                            else
                                glColor3f(1, 0, 0);
                        }
                        else {
                            QVector3D color;
                            getColor(graph->formula(x1, z1), &color);
                            glColor3f(color.x(), color.y(), color.z());
                        }

                        if (m_mode == GraphMode::GRAPHIC_3D) {
                            glVertex3f(x1, graph->formula(x1, z1), z1);
                            glVertex3f(x1, graph->formula(x1, z1 + step), z1 + step);
                            glVertex3f(x1 + step, graph->formula(x1 + step, z1 + step), z1 + step);
                            glVertex3f(x1 + step, graph->formula(x1 + step, z1), z1);
                        }
                        else {
                            QVector3D color;
                            getColor(graph->formula(x1, z1), &color);
                            glColor3f(color.x(), color.y(), color.z());
                            glVertex3f(x1, 0, z1);
                            glVertex3f(x1, 0, z1 + step);
                            glVertex3f(x1 + step, 0, z1 + step);
                            glVertex3f(x1 + step, 0, z1);
                        }
                    }
                }
            glEnd();
        }
    }
}

void GLWidget::addGraph(QString exp)
{
    graphList.append(new Graph(exp));
}

void GLWidget::updateGraphExpression(int index, QString exp)
{
    if (index > graphList.length())
        return;
    if (graphList[index] != nullptr) {
        graphList[index]->setExpression(exp);
    }
}

void GLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-m_zoom, m_zoom, -m_zoom, m_zoom, -m_zoom, m_zoom);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    if (m_mode == GraphMode::CONTOUR_LINE)
        glViewport(0, 0, this->width() - 30, this->height());
    else {
        glViewport(0, 0, this->width(), this->height());
        glTranslatef(0, -m_zoom*0.3, 0);
    }

    glRotatef(m_xRot, 1.0, 0.0, 0.0);
    glRotatef(m_yRot, 0.0, 1.0, 0.0);

    // draw 3d graph
    for (int i = 0; i < graphList.length(); i++) {
        drawGraph(graphList[i]);
    }

    drawCoordinates();

    if (m_graphType == GraphType::GRADIENT_DESCENT) {
        for (int i = 0; i < graphList.length(); i++) {
            drawGradientDescent(graphList[i]);
        }
    }

    if (m_mode == GraphMode::CONTOUR_LINE)
        drawColorPanel();

    glFlush();
}

void GLWidget::setStartingPoint(QVector2D start)
{
    if (m_graphType == GraphType::GRADIENT_DESCENT) {
        startingPoint = start;
    }
}

void GLWidget::setPlane(QVector3D p1, QVector3D p2, QVector3D p3)
{
    if (m_graphType == GraphType::CUTTING_PLANE) {
        plane[0] = p1;
        plane[1] = p2;
        plane[2] = p3;
    }
}

void GLWidget::drawPlane()
{
    glBegin(GL_QUADS);
        // draw 3 points of plane
        glColor3f(0, 0, 1);
        for (int i = 0; i < 3; i++)
            glVertex3f(plane[i].x(), plane[i].y(), plane[i].z());

        // calculate 4th point and draw it
        QVector3D middle = (plane[0] + plane[2])/2;
        QVector3D p = middle * 2 - plane[1];
        glVertex3f(p.x(), p.y(), p.z());
    glEnd();
}

void GLWidget::drawGradientDescent(Graph* graph)
{   
    // staring point
    double x = startingPoint.x(), y = startingPoint.y();
    QVector2D next;
    QVector2D gradient;
    int step = 5000;

    if (m_mode == GraphMode::GRAPHIC_3D)
        glLineWidth(3);
    else
        glLineWidth(1);

    while(step-- > 0) {
        // calculate gradient vector
        gradient.setX(graph->expression.derivativeX(x, y));
        gradient.setY(graph->expression.derivativeY(x, y));

        // normalize
        gradient.normalize();

        // update next point
        double delta = 0.2;
        next.setX(x - delta * gradient.x());
        next.setY(y - delta * gradient.y());

        // draw line
        glBegin(GL_LINES);
            glColor3f(1, 0, 0);
            if (m_mode == GraphMode::GRAPHIC_3D) {
                glVertex3f(x, graph->formula(x, y), y);
                glVertex3f(next.x(), graph->formula(next.x(), next.y()), next.y());
            }
            else {
                glVertex3f(x, 0.2, y);
                glVertex3f(next.x(), 0.2, next.y());
            }
        glEnd();

        // update point
        x = next.x();
        y = next.y();
    }
}

void GLWidget::resizeGL(int width, int height)
{
    if (m_mode == GraphMode::CONTOUR_LINE)
        glViewport(0, 0, width - 30, height);
    else
        glViewport(0, 0, width, height);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-m_zoom, m_zoom, -m_zoom, m_zoom, -m_zoom, m_zoom);
    glMatrixMode(GL_MODELVIEW);
    update();
}

void GLWidget::getColor(float height, QVector3D* color)
{
    int indexColor;
    if (height < -50) {
        indexColor = 0;
    }
    else if (height > 50) {
        indexColor = colorList.length() - 1;
    }
    else {
        float percent = (height + 50)/100;  // height of contour line in range(-50, 50)
        indexColor = int(percent * (colorList.length() - 1));
    }
    color->setX(colorList[indexColor].x());
    color->setY(colorList[indexColor].y());
    color->setZ(colorList[indexColor].z());
}

void GLWidget::drawCoordinates()
{
    glLineWidth(1.8);
    glBegin(GL_LINES);
        glColor3f(1, 0, 0);
        glVertex3f(0, 0, 0);
        glVertex3f(m_zoom*0.8, 0, 0);

        glColor3f(1, 1, 0);
        glVertex3f(0, 0, 0);
        glVertex3f(0, m_zoom*0.8, 0);

        glColor3f(0, 0, 1);
        glVertex3f(0, 0, 0);
        glVertex3f(0, 0, m_zoom*0.8);
    glEnd();
}

void GLWidget::drawColorPanel()
{
    glViewport(width() - 30, 0, 20, height());
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    float zoom = 8;
    glOrtho(-zoom, zoom, -zoom, zoom, -zoom, zoom);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    float w = 10;
    float h = 1;
    for (int i = 0; i < colorList.length(); i++) {
        glPushMatrix();
        glTranslatef(0, i*h - colorList.length()/2 * h, 0);
        glBegin(GL_QUADS);
        glColor3f(colorList[i].x(), colorList[i].y(), colorList[i].z());
        glVertex2f(-w/2, -h/2);
        glVertex2f(w/2, -h/2);
        glVertex2f(w/2, h/2);
        glVertex2f(-w/2, h/2);
        glEnd();
        glPopMatrix();
    }
}

void GLWidget::mousePressEvent(QMouseEvent *event)
{
//    if (m_mode == GraphMode::CONTOUR_LINE) return;
    m_lastPos = event->pos();
}

void GLWidget::mouseMoveEvent(QMouseEvent *event)
{
//    if (m_mode == GraphMode::CONTOUR_LINE) return;
    int dx = event->x() - m_lastPos.x();
    int dy = event->y() - m_lastPos.y();

    m_yRot += 0.1 * dx;
    m_xRot += 0.1 * dy;
    update();
    m_lastPos = event->pos();
}


