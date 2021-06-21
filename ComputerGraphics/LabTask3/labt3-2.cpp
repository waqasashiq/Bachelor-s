#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3f (1.0, .0, .0);
glBegin(GL_LINES);
glVertex3f (0.45, 0.45, 0.0);//v1
glVertex3f (0.70, 0.45, 0.0);
glVertex3f (0.45, 0.46, 0.0);//v2
glVertex3f (0.70, 0.50, 0.0);
glVertex3f (0.44, 0.47, 0.0);//v3
glVertex3f (0.70, 0.55, 0.0);
glVertex3f (0.44, 0.48, 0.0);//v4
glVertex3f (0.68, 0.60, 0.0);
glVertex3f (0.43, 0.49, 0.0);//v5
glVertex3f (0.66, 0.65, 0.0);
glVertex3f (0.43, 0.50, 0.0);//v6
glVertex3f (0.63, 0.68, 0.0);
glVertex3f (0.42, 0.51, 0.0);//v7
glVertex3f (0.58, 0.70, 0.0);
glVertex3f (0.41, 0.52, 0.0);//v8
glVertex3f (0.55, 0.73, 0.0);
glVertex3f (0.40, 0.53, 0.0);//v9
glVertex3f (0.52, 0.76, 0.0);
glVertex3f (0.39, 0.54, 0.0);//v10
glVertex3f (0.47, 0.78, 0.0);
glVertex3f (0.37, 0.54, 0.0);//v11
glVertex3f (0.40, 0.79, 0.0);
glVertex3f (0.35, 0.54, 0.0);//v12
glVertex3f (0.32, 0.80, 0.0);
glVertex3f (0.34, 0.54, 0.0);//v13
glVertex3f (0.25, 0.79, 0.0);
glVertex3f (0.33, 0.54, 0.0);//v14
glVertex3f (0.22, 0.78, 0.0);
glVertex3f (0.32, 0.53, 0.0);//v15
glVertex3f (0.18, 0.77, 0.0);
glVertex3f (0.31, 0.52, 0.0);//v16
glVertex3f (0.14, 0.75, 0.0);
glVertex3f (0.30, 0.51, 0.0);//v17
glVertex3f (0.12, 0.73, 0.0);
glVertex3f (0.29, 0.50, 0.0);//v18
glVertex3f (0.09, 0.71, 0.0);
glVertex3f (0.29, 0.49, 0.0);//v19
glVertex3f (0.06, 0.68, 0.0);
glVertex3f (0.28, 0.48, 0.0);//v20
glVertex3f (0.03, 0.65, 0.0);
glVertex3f (0.28, 0.46, 0.0);//v21
glVertex3f (0.01, 0.61, 0.0);
glVertex3f (0.27, 0.45, 0.0);//v22
glVertex3f (-0.00, 0.55, 0.0);
glVertex3f (0.27, 0.44, 0.0);//v23
glVertex3f (-0.08, 0.48, 0.0);
glVertex3f (0.28, 0.43, 0.0);//v24
glVertex3f (-0.12, 0.41, 0.0);
glVertex3f (0.28, 0.42, 0.0);//v25
glVertex3f (-0.15, 0.36, 0.0);
glVertex3f (0.29, 0.41, 0.0);//v26
glVertex3f (-0.18, 0.30, 0.0);
glVertex3f (0.30, 0.40, 0.0);//v27
glVertex3f (-0.23, 0.21, 0.0);
glVertex3f (0.31, 0.39, 0.0);//v28
glVertex3f (-0.30, 0.12, 0.0);
glVertex3f (0.32, 0.38, 0.0);//v29
glVertex3f (-0.36, 0.00, 0.0);
glVertex3f (0.33, 0.37, 0.0);//v30
glVertex3f (-0.41, -0.10, 0.0);
glVertex3f (0.34, 0.36, 0.0);//v31
glVertex3f (-0.25, -0.10, 0.0);
glVertex3f (0.45, 0.44, 0.0);//v32
glVertex3f (0.70, 0.40, 0.0);
glVertex3f (0.45, 0.43, 0.0);//v33
glVertex3f (0.70, 0.35, 0.0);
glVertex3f (0.45, 0.42, 0.0);//34
glVertex3f (0.70, 0.30, 0.0);
glVertex3f (0.44, 0.41, 0.0);//v35
glVertex3f (0.70, 0.25, 0.0);
glVertex3f (0.43, 0.40, 0.0);//36
glVertex3f (0.65, 0.20, 0.0);
glVertex3f (0.42, 0.39, 0.0);//v37
glVertex3f (0.60, 0.15, 0.0);
glVertex3f (0.41, 0.38, 0.0);//v38
glVertex3f (0.55, 0.10, 0.0);
glVertex3f (0.40, 0.37, 0.0);//v39
glVertex3f (0.50, 0.05, 0.0);
glVertex3f (0.39, 0.36, 0.0);//v40
glVertex3f (0.45, 0.05, 0.0);
glVertex3f (0.38, 0.36, 0.0);//v41
glVertex3f (0.40, 0.05, 0.0);
glVertex3f (0.37, 0.36, 0.0);//v42
glVertex3f (0.35, 0.05, 0.0);
glVertex3f (0.36, 0.35, 0.0);//v43
glVertex3f (0.30, 0.05, 0.0);
glVertex3f (0.35, 0.36, 0.0);//v44
glVertex3f (0.25, 0.05, 0.0);
glVertex3f (0.34, 0.35, 0.0);//v45
glVertex3f (0.20, 0.05, 0.0);
glVertex3f (0.33, 0.35, 0.0);//v46
glVertex3f (0.10, 0.05, 0.0);
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
glClearColor (1.0, 1.0, 1.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
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