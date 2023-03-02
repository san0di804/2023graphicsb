#include <GL/glut.h>
#include <stdio.h>
float X=0,Y=0,Z=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glVertex2f(-0.06,-0.53);
glVertex2f(-0.14,-0.44);
glVertex2f(-0.26,-0.29);
glVertex2f(-0.39,-0.02);
glVertex2f(-0.39,0.23);
glVertex2f(-0.29,0.27);
glVertex2f(-0.19,0.22);
glVertex2f(-0.04,-0.14);
glVertex2f(-0.03,-0.19);
glVertex2f(0.08,0.19);
glVertex2f(0.15,0.39);
glVertex2f(0.24,0.38);
glVertex2f(0.33,0.29);
glVertex2f(0.41,0.11);
glVertex2f(0.40,-0.09);
glVertex2f(0.36,-0.21);
glVertex2f(0.23,-0.38);
glVertex2f(0.04,-0.60);
glVertex2f(-0.04,-0.63);
glVertex2f(-0.08,-0.61);
    glEnd();
    glutSwapBuffers();
}
void mouse(int button,int state,int x,int y)
{
    X=(x-150)/150.0;
    Y=-(y-150)/150.0;
    if(state==GLUT_DOWN) printf("glVertex2f(%.2f,%.2f);\n",X,Y);
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("week03");
    glutMouseFunc(mouse);
    glutDisplayFunc(display);

    glutMainLoop();
}
