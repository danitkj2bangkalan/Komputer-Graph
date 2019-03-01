#include <windows.h>

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void display(){
/* bersihkan layar */
glClear (GL_COLOR_BUFFER_BIT);
    glPointSize(1);
// untuk angka satu
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2f (-20.0, 15.0);
        glVertex2f (-20.0, -7.0);
        glVertex2f (-15.0, -5.0);
        glVertex2f (-15.0, 20.0);
    glEnd();

    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2f (-20.0, -8.0);
        glVertex2f (-20.0, -20.0);
        glVertex2f (-15.0, -15.0);
        glVertex2f (-15.0, -6.0);
    glEnd();
// untuk angka nol
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2f (-10.0, 20.0);
        glVertex2f (-10.0, -20.0);
        glVertex2f (-5.0, -15.0);
        glVertex2f (-5.0, 15.0);
    glEnd();

    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2f (-4.0, -15.0);
        glVertex2f (-9.0, -20.0);
        glVertex2f (15.0, -20.0);
        glVertex2f (10.0, -15.0);
    glEnd();

    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2f (-9.0, 20.0);
        glVertex2f (-4.0, 15.0);
        glVertex2f (10.0, 15.0);
        glVertex2f (15.0, 20.0);
    glEnd();

    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2f (16.0, 20.0);
        glVertex2f (11.0, 15.0);
        glVertex2f (11.0, -15.0);
        glVertex2f (16.0, -20.0);
    glEnd();
// untuk angka tujuh
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2f (21.0, 20.0);
        glVertex2f (26.0, 15.0);
        glVertex2f (40.0, 15.0);
        glVertex2f (45.0, 20.0);
    glEnd();

    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2f (46.0, 20.0);
        glVertex2f (41.0, 15.0);
        glVertex2f (21.0, -15.0);
        glVertex2f (26.0, -20.0);
    glEnd();
glFlush();
}

void kunci(unsigned char key, int x, int y)
{
switch (key)
{
/* aplikasi berhenti ketika tombol q ditekan */
case 27 :
case 'q':
exit(0);
break;
}
glutPostRedisplay();
}

void myinit(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100.0,100.0,-100.0,100.0);
    glMatrixMode(GL_MODELVIEW);
    glClearColor(1.0,1.0,1.0,1.0);
    glColor3f (0.0, 1.0, 0.0);
}
int main(int argc, char* argv[]){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1260,720);
    //glutInitWindowPosition(100,100);
    glutCreateWindow("Project NIM");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
