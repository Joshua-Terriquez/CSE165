#ifndef MyGL_H
#define MyGL_H


#include <QtWidgets>
#include <QtOpenGL>
#include <glfw3.h>
#include <GL/glu.h>
#include <QOpenGLWidget>

class MyGL : public QOpenGLWidget
{
    Q_OBJECT
public:
    explicit MyGL(QWidget *parent = 0);

    void setRotation(float x, float y, float z);
    void setTranslation(float a,float b, float c);

protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);

signals:

public slots:

private:
    float xrot,yrot,zrot;
    float xTrans,yTrans,zTrans;

};

#endif // QGLBEGIN_H
