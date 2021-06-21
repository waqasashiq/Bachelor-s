#include<stdio.h>
#include <GL/glut.h>
#include<time.h>
#include<math.h>
double a1=-10;
GLfloat gfPosX = 5;
GLfloat gfDeltaX = 70;
double a2=10;
void Draw() {
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(.0, 1.0, 1.0);
glBegin(GL_POINTS);
double a,b;
double c;
if(a1>13){
a1=-10;

}
b=10*sin(a1);	
glBegin(GL_POLYGON);	
for (double z=0;z<=360 ;z=z+0.1){

a=a1+2*cos(z);

c=b+2*sin(z);
glVertex3f (a,c, 0.0);
}
glEnd();


glutSwapBuffers();
a1=a1+0.1;
}
void Timer(int iUnused)
{
glutPostRedisplay();
glutTimerFunc(40, Timer, 0);
}
void Initialize() {
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-12, 12, -12, 12 , -1.0, 1.0);
}
int main(int iArgc, char** cppArgv) {
glutInit(&iArgc, cppArgv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(250, 250);
glutInitWindowPosition(200, 200);
glutCreateWindow("Bouncing Ball");
Initialize();
glutDisplayFunc(Draw);
Timer(0);
glutMainLoop();
return 0;
}