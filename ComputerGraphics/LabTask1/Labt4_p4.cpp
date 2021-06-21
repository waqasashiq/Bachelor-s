#include <GL/glut.h>
GLsizei winWidth = 400,winHeight = 300;
int x1,y1;
int x2,y2;
int a=1;
void init(void) 
{
glClearColor (1.0, 1.0, 1.0, 1.0);
glMatrixMode(GL_PROJECTION);
   gluOrtho2D(0.0,200.0,0.0,150.0);
}
void displayFcn()
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f(0.0,1.0,1.0);
glPointSize(5.0);
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

	if(a>1){

	glBegin(GL_LINES);
	
	x2=(x+x1)/2;
	y2=(y+y1)/2;
	glVertex2i(x1,y);
	glVertex2i(x,y1);
	glEnd();
	
	}
	a++;
	x1=x;
	y1=y;

	glFlush();
}
void mousePtPlot(GLint button, GLint action,GLint  xMouse,GLint yMouse)
{
	if(button == GLUT_LEFT_BUTTON)
		
		plotPoint(xMouse,winHeight - yMouse);
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
glutMouseFunc(mousePtPlot);
glutMainLoop();
   return 0;
}