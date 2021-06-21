#include <glut.h>
GLsizei winWidth = 400,winHeight = 300;
void init(void)
{
glClearColor (0.0, 1.0, 1.0, 1.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0,200.0,0.0,150.0);
}
void displayFcn()
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f(1.0,1.0,1.0);
glPointSize(50.0);
}
void winreshapefunc (GLint newWidth, GLint newHeight)
{
glViewport (0, 0,newWidth, newHeight);
glMatrixMode (GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,GLdouble(newWidth),0.0,GLdouble(newHeight));

winWidth = newWidth;
winHeight = newHeight;

}
void plotPoint(GLint x,GLint y)
{
glBegin(GL_POINTS);
glVertex2i(x,y);
glEnd();
}
void curveDrawing(GLint button, GLint action,GLint xMouse,GLint yMouse)
{
GLint x = xMouse;
GLint y = winHeight - yMouse;

button=GLUT_LEFT_BUTTON;
plotPoint(x,y);

glFlush();

}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (winWidth, winHeight);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Mouse Plot Points");
init ();
glutDisplayFunc(displayFcn);
glutReshapeFunc(winreshapefunc);
glutMouseFunc(curveDrawing);
glutMainLoop();
return 0;
}