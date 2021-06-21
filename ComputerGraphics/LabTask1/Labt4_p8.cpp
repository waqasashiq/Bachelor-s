#include<stdio.h>
#include<math.h>
#include<GL/glut.h>
GLsizei  winWidth = 400,winHeight = 300;
void init(){
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glOrtho(-20.0, 20.0, -20.0, 20.0, -1.0, 1.0);
}
void displayFcn(){
}
void FullCircle(){
	int x; 
	GLfloat radius = 4.8f; 
	GLfloat twoPi = 2.0f * 3.14159f;
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(0.0, 0.0); 
	for(x = 0; x <= 100;x++) { 
		glVertex2f(radius * cos(x *  twoPi / 100), 
			radius* sin(x * twoPi / 100));
	}
	glEnd();
	glFlush();
}

void circle(GLint button , GLint xMouse , GLint yMouse){
	int q;
	printf("Enter The Number Of You Choice:\n1)Red\n2)Green\n3)CYAN\n5)White.\n");
	scanf("%d",&q);
	
	switch(q){
			case 1:			
			glClear(GL_COLOR_BUFFER_BIT);
			
			glColor3f(1.0,.0,.0);
			FullCircle();
			break;
			case 2:
			glClear(GL_COLOR_BUFFER_BIT);
			
			
			glColor3f(.0,1.0,.0);
			FullCircle();
			break;
			case 3:
			glClear(GL_COLOR_BUFFER_BIT);
			
			glColor3f(.0,1.0,1.0);
			FullCircle();
			case 4:
			glClear(GL_COLOR_BUFFER_BIT);
			
			glColor3f(1.0,1.0,1.0);
			FullCircle();
		
			break;
		
	}
}
int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize (winWidth, winHeight); 
   glutInitWindowPosition (100, 100);
   glutCreateWindow ("Problem7");
   init();
   glutDisplayFunc(displayFcn); 
   glutSpecialFunc(circle);
   glutMainLoop();
   return 0;
}