#include<stdlib.h>
#include<GL/glut.h>
#include<stdio.h>
#define dx 10
#define dy 10
GLfloat r=0.0,g=0.0,b=0.0;
void display()
{
GLint i,j;
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(r,g,b);
for(i=0;i<300;i+=dx)
for(j=0;j<300;j+=dy)
{
glBegin(GL_LINE_LOOP);
glVertex2i(i,j);
glVertex2i(i+dx,j);
glVertex2i(i+dx,j+dy);
glVertex2i(i,j+dy);
glEnd();
}
glFlush();
}
int main(int argc,char **argv)
{
printf("enter r g b\n");
scanf("%f%f%f",&r,&g,&b);
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(50,20);
glutInitWindowSize(500,250);
glutCreateWindow("sample");
glClearColor(1.0,0.0,0.0,0.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0,500,0.0,500);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
