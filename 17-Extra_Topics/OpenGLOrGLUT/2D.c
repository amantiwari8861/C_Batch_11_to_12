#include <stdio.h>
#include<math.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <unistd.h>
// void init(void);
// void display(void);
// int main(int argc, char **argv)
// {
//     glutInit(&argc, argv);
//     glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
//     glutInitWindowSize(250, 250);
//     glutInitWindowPosition(100, 100);
//     glutCreateWindow("My First OpenGL Application");
//     init();
//     glutDisplayFunc(display);
//     glutMainLoop();
//     return 0;
// }
// void init(void)
// {
//     glClearColor(0.0, 0.0, 0.0, 0.0);
//     glColor3f(0.0, 0.0, 1.0);
//     glMatrixMode(GL_PROJECTION);
//     glLoadIdentity();
//     glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
// }
// void display(void)
// {
//     glClear(GL_COLOR_BUFFER_BIT);
//     glRectf(-5.0, 5.0, 5.0, -5.0);
//     glutSwapBuffers();
// }

// polygon
void triangle()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    // triangle
    // glVertex2i(100, 100); // First vertex
    // glVertex2i(200, 100); // Second vertex
    // glVertex2i(150, 200); // Third vertex
    // square
    glVertex2i(100, 100);
    // glVertex2i(x, y);
    // x left to right y bottom to up
    glVertex2i(100, 300);
    glVertex2i(400, 300);
    glVertex2i(600, 200);
    glVertex2i(400, 100);
    glEnd();

    glFlush();
}
void hollowShape()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.5,-0.5);
    glVertex2f(0.0,0.5);
    glVertex2f(0.5,-0.5);
    glColor3f(1,0,1);
    glEnd();

    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 100; i++)
    {
        float angle=2*3.14*i/100;
        float x=0.5*cos(angle);
        float y=0.5*sin(angle);
        glVertex2f(x,y);
        
    }
    glEnd();
    glFlush();
}
void line()
{
    glBegin(GL_LINES);
    glVertex2f(-0.5,-0.5);
    glVertex2f(0.5,0.5);
    glEnd();
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("triangle");
    // glutDisplayFunc(triangle);
    // glutDisplayFunc(hollowShape);
    glutDisplayFunc(line);
    // init
    // glClearColor(1, 1, 1, 0);
    // glColor3f(0, 0, 0);
    // glPointSize(4);
    // glMatrixMode(GL_PROJECTION);
    // glLoadIdentity();
    // gluOrtho2D(0.0, 800, 0, 600);
    glutMainLoop();

    return 0;
}
