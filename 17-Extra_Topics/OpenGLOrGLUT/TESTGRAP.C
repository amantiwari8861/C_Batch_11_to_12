#include<stdio.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void myInit(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0); // set white background colour
    glColor3f(0.0f, 0.0f, 0.0f);      // set the drawing colour
    glPointSize(4.0);                 // One ‘dot’ is a 4 by 4 pixel
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 800.0, 0.0, 600.0);
}
// *********************** myDisplay() ***********
void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT); // clear the screen
    glBegin(GL_POLYGON);          // Draw the polygon with the following vertex
    glVertex2i(100, 300);
    glVertex2i(400, 300);
    glVertex2i(600, 150);
    glVertex2i(400, 100);
    glEnd();
    glFlush(); // send all output to the display
}
// ****************** main function ********************
int main(int argc, char **argv)
{
    glutInit(&argc, argv);                       // initialise the toolkit
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // set display mode
    glutInitWindowSize(800, 600);                // set window size
    glutInitWindowPosition(100, 100);            // set window position on your screen
    glutCreateWindow("OpenGL Window");           // Open the screen window with this name
    glutDisplayFunc(myDisplay);                  // register redraw function
    myInit();
    glutMainLoop(); // go into a perpetual loop
    return 0;
}