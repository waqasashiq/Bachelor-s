#include<stdio.h>
#include<math.h>
#include<GL/glut.h>
GLsizei  winWidth = 400,winHeight = 300;
void init(){
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glOrtho(-10.0, 10.0, -10.0, 10.0, -1.0, 1.0);
}
void displayFcn(){
}
void eclipse(){
    double a,b;
	glBegin(GL_TRIANGLE_FAN);
	for(double z = 0 ; z<=360 ; z++){
		a = -2+4*cos(z);
		b = 3+3*sin(z);
		glVertex2f(a,b);
	}
	glEnd();
	glFlush();
}
void FullCircle(){
	int i;
	int sections = 100; 
	GLfloat radius = 4.8f; 
	GLfloat twoPi = 2.0f * 3.14159f;
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(0.0, 0.0); // origin
	for(i = 0; i <= sections;i++) { // make $section number of circles
		glVertex2f(radius * cos(i *  twoPi / sections), 
			radius* sin(i * twoPi / sections));
	}
	glEnd();
	glFlush();
}
void LowerEclipse(){
	
    double c,d;
	glBegin(GL_TRIANGLE_FAN);
	for(double z = 0 ; z<=360 ; z++){
		c = 4+3*cos(z);
		d = 1+8*sin(z);
		glVertex2f(c,d);
	}
	glEnd();
	glFlush();
}
void circle(GLint key , GLint xMouse , GLint yMouse){
	int q;
	printf("1");
	printf("Enter 1 For Full Circle:\n2)Eclipse\n3)Lower Eclipse\n");
	scanf("%d",&q);
	switch(q){
		case 1:
			glClear(GL_COLOR_BUFFER_BIT);
			glColor3f(1.0,1.0,0.0);	
			FullCircle();
			break;
		case 2:
			glClear(GL_COLOR_BUFFER_BIT);
			glColor3f(1.0,1.0,0.0);	
			eclipse();
			break;
		case 3:
			glClear(GL_COLOR_BUFFER_BIT);
			glColor3f(1.0,1.0,0.0);	
			LowerEclipse();
			break;
		default:
			break;
	}
}
int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize (winWidth, winHeight); 
   glutInitWindowPosition (100, 100);
   glutCreateWindow ("Problem No 7");
   init();
   glutDisplayFunc(displayFcn); 
   glutSpecialFunc(circle);
   glutMainLoop();
   return 0;
}