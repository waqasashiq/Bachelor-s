#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3f (.0, .0, .0);
glBegin(GL_POLYGON);
glColor3f (1.0, .0, .0);
glVertex3f (50, 50, 0.0);//v1
glColor3f (.0, 1.0, .0);
glVertex3f (70, 50, 0.0);
glColor3f (.0, .0, 1.0);
glVertex3f (70, 55, 0.0);
glColor3f (.0, 1.0, 1.0);
glVertex3f (70, 45, 0.0);
glColor3f (1.0, 1.0, .0);
glVertex3f (75, 50, .0);
glColor3f (1.0, 1.0, 1.0);
glVertex3f (70, 55, .0);
glColor3f (.0, .0, 1.0);
glVertex3f (75, 50, .0);
glColor3f (.0, 1.0, .0);
glVertex3f (50, 50, 0.0);//v2
glColor3f (.0, .0, .0);
glVertex3f (50, 70, 0.0);
glColor3f (1.0, .0, .0);
glVertex3f (55, 70, 0.0);
glColor3f (.0, .0, .0);
glVertex3f (45, 70, 0.0);
glColor3f (.0, .0, 1.0);
glVertex3f (50, 75, .0);
glColor3f (.0, 1.0, 1.0);
glVertex3f (55, 70, .0);
glColor3f (.0, .0, .0);
glVertex3f (50, 75, .0);
glColor3f (1.0, 1.0, 1.0);
glColor3f (.0, 1.0, .0);
glVertex3f (50, 50, 0.0);//v3
glColor3f (1.0, .0, .0);
glVertex3f (30, 50, 0.0);
glColor3f (.0, .0, .0);
glVertex3f (30, 55, 0.0);
glColor3f (.0, .0, 1.0);
glVertex3f (30, 45, 0.0);
glColor3f (.0, .0, 1.0);
glVertex3f (25, 50, .0);
glColor3f (.0, 1.0, .0);
glVertex3f (30, 55, .0);
glColor3f (.0, .0, .0);
glVertex3f (25, 50, .0);
glColor3f (.0, 1.0, .0);
glColor3f (1.0, .0, .0);
glVertex3f (50, 50, 0.0);//v4
glColor3f (.0, .0, .0);
glVertex3f (50, 30, 0.0);
glColor3f (1.0, 1.0, .0);
glVertex3f (55, 30, 0.0);
glColor3f (1.0, .0, 1.0);
glVertex3f (45, 30, 0.0);
glColor3f (.0, .0, .0);
glVertex3f (50, 25, .0);
glColor3f (.0, 1.0, .0);
glVertex3f (55, 30, .0);
glColor3f (.0, 1.0, 1.0);
glVertex3f (50, 25, .0);
glColor3f (.0, .0, .0);
glEnd();
/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing color
*/
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 100.0, 0.0, 100.0, -1.0, 1.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (250, 250);
glutInitWindowPosition (100, 100);
glutCreateWindow ("hello");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
/* ANSI C requires main to return int. */
}