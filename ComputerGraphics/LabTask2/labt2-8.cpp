#include <GL/glut.h>
#include<math.h>
void display(void)
{
/* clear all pixels  */
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
       glColor3f(1.0f, 0.0f, 0.0f); // black

       int i;
       int sections = 20; //number of triangles to use to estimate a circle
                          // (a higher number yields a more perfect circle)
       GLfloat radius = 0.5f; //radius
       GLfloat twoPi = 0.5f * 3.14159f;

       glBegin(GL_TRIANGLE_FAN);
               glVertex2f(0.0, 0.0); // origin
               for(i = 0; i <= sections;i++) { // make $section number of circles
                       glVertex2f(radius * cos(i *  twoPi / sections), 
                               radius* sin(i * twoPi / sections));
               }
       glEnd();
       glFlush ();
 
}
void init (void) 
{
/* select clearing color 	*/
   glClearColor (0.0, 0.0, 0.0, 0.0);

/* initialize viewing values  */
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}
/* 
 * Declare initial window size, position, and display mode
 * (single buffer and RGBA).  Open window with "hello"
 * in its title bar.  Call initialization routines.
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
   return 0;   /* ANSI C requires main to return int. */
}