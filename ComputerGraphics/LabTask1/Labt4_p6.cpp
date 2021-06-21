#include<gl/glut.h>
GLsizei winWidth = 400 , winHeight = 300;
int windowHeight;
void drawPolygonRight(int x, int y){
	windowHeight = glutGet(GLUT_WINDOW_HEIGHT);
	y=windowHeight-y;
	glBegin(GL_POLYGON);
	glVertex2f(x+50, y);
	glVertex2f(x+100, y);
	glVertex2f(x+100, y+50);
	glVertex2f(x+50,y+50);
	glEnd();
	glFlush();
}
void drawPolygonLeft(int x, int y){
	windowHeight = glutGet(GLUT_WINDOW_HEIGHT);
	y=windowHeight-y;
	glBegin(GL_POLYGON);
	glVertex2f(x, y);
	glVertex2f(x-50, y);
	glVertex2f(x-50, y+50);
	glVertex2f(x,y+50);
	glEnd();
	glFlush();
}
void drawPolygonUp(int x, int y){
	windowHeight = glutGet(GLUT_WINDOW_HEIGHT);
	y=windowHeight-y;
	glBegin(GL_POLYGON);
	glVertex2f(x, y+50);
	glVertex2f(x+50, y+50);
	glVertex2f(x+50, y+100);
	glVertex2f(x,y+100);
	glEnd();
	glFlush();
}
void drawPolygonDown(int x, int y){
	windowHeight = glutGet(GLUT_WINDOW_HEIGHT);
	y=windowHeight-y;
	glBegin(GL_POLYGON);
	glVertex2f(x, y-50);
	glVertex2f(x+50, y-50);
	glVertex2f(x+50, y-100);
	glVertex2f(x,y-100);
	glEnd();
	glFlush();
}
void movePolygon(GLint directionKey , GLint x , GLint y){
	switch(directionKey){
		case GLUT_KEY_RIGHT:
			glClearColor (0.0, 0.0, 0.0, 0.0);
			glClear(GL_COLOR_BUFFER_BIT);
			glColor3f(0.0,1.0,0.0);
			drawPolygonRight(x,y);
			break;
		case GLUT_KEY_LEFT:
			glClearColor (0.0, 0.0, 0.0, .0);
			glClear(GL_COLOR_BUFFER_BIT);
			glColor3f(0.0,1.0,1.0);
			drawPolygonLeft(x,y);
			break;
		case GLUT_KEY_UP:
			glClearColor (0.0, 0.0, 0.0, 0.0);
			glClear(GL_COLOR_BUFFER_BIT);
			glColor3f(1.0,1.0,1.0);
			drawPolygonUp(x,y);
			break;
		case GLUT_KEY_DOWN:
			glClearColor (0.0, 0.0, 0.0, 0.0);
			glClear(GL_COLOR_BUFFER_BIT);
			glColor3f(1.0,.0,.0);
			drawPolygonDown(x,y);
			break;
		default:
			break;
	}
}
void display(){
}
void winReshapeFcn(GLint newWidth , GLint newHeight){
	glViewport(0.0,0.0,newWidth,newHeight);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,GLdouble(newWidth) , 0.0 , GLdouble(newHeight));
    winWidth = newWidth;
	winHeight = newHeight;
}
int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize (600, 400);
	glutInitWindowPosition (200, 100);
	glutCreateWindow("POLYGON");
	glutDisplayFunc(display);
	glutReshapeFunc(winReshapeFcn);
	glutSpecialFunc(movePolygon);
	glutMainLoop();
	return 0;
}