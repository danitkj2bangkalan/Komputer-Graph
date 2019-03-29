#include <windows.h>
#include <iostream>
#include <stdio.h>
#include <math.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#include <GL/glu.h>
#endif
#include <stdlib.h>
using namespace std;
float eyecolor = 1.0;
void badan(void){
        /* bersihkan layar */
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 1.0, 0.0);

    //kepala
    glBegin(GL_POLYGON);
    for(float x=0; x<=3.14; x+=0.01){
    glVertex2f(5*cos(x),5+2*sin(x));
    }
    //ngubah posisi +/- ngubah lebar*
    glEnd();

    glBegin(GL_POLYGON);
    for(float x=0; x<=6.28; x+=0.01){
    glVertex2f(4.8+cos(x),-0.68+6*sin(x));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(float x=0; x<=6.28; x+=0.01){
    glVertex2f(-4.8+cos(x),-0.68+6*sin(x));
    }
    glEnd();

    glRectf(-5,-6.7,5,5);

    //kuping besar
    glBegin(GL_TRIANGLES);
    glColor3f (1.0, 1.0, 0.5);
    glVertex2f(3.0,4.0);
    glVertex2f(6.5,3.0);
    glVertex2f(6.0,7.0);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f (1.0, 1.0, 0.5);
    glVertex2f(-3.0,4.0);
    glVertex2f(-6.5,3.0);
    glVertex2f(-6.0,7.0);
    glEnd();

    //kuping kecil
    glBegin(GL_TRIANGLES);
    glColor3f (0.0, 1.0, 0.0);
    glVertex2f(3.5,3.85);
    glVertex2f(6.0,3.15);
    glVertex2f(5.6,5.8);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f (0.0, 1.0, 0.0);
    glVertex2f(-3.5,3.85);
    glVertex2f(-6.0,3.15);
    glVertex2f(-5.6,5.8);
    glEnd();



    // kaki
    glColor3f (1.0, 1.0, 0.0);
    float y=-4.4;
    for(float i=0;i<=4;i++){
    glBegin(GL_POLYGON);

    for(float x=0; x<=3.14; x+=0.01){
    glVertex2f(y-0.75*cos(x),-4.8-3.5*sin(x));//5.5sin=posi y, 3.5 tinggi/lebar y, 1cos=lebar/panjang x

    }
    y+=2.2;
    glEnd();
    }
    glColor3f (0.0, 0.0, 0.0);//
    float j=2.5;
    for(float i=0;i<=3;i++){
    glBegin(GL_POLYGON);//bawah
    for(float x=0; x<=3.14; x+=0.01){
    glVertex2f(-0.52*x-j,2*sin(x)-8.05);//panjang,posisix,tinggi, posisi y
    }
    glEnd();
    j-=2.2;
    }

    glFlush ();
}
void mata(float color){
    //glClear (GL_COLOR_BUFFER_BIT);

    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
    for(float t=0.0; t<=6.28; t+=0.1){
        glVertex2f(-1.3+cos(t)*1.2,2.1+sin(t)*1.2);
    }
    glEnd();

    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
    for(float t=0.0; t<=6.28; t+=0.1){
        glVertex2f(2.3+cos(t)*1.2,2.1+sin(t)*1.2);
    }
    glEnd();

    glColor3f(color,0,0);
    glBegin(GL_POLYGON);
    for(float t=0.0; t<=6.28; t+=0.1){
        glVertex2f(-1.3+cos(t),2.1+sin(t));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(float t=0.0; t<=6.28; t+=0.1){
        glVertex2f(2.3+cos(t),2.1+sin(t));
    }
    glEnd();
    glFlush();
}
void mulut (){
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
    for(float t=3.14; t<=6.28; t+=0.1){
        glVertex2f(cos(t),-2+sin(t));
    }
    glEnd();
    glFlush();
}
void display(){
    glClear (GL_COLOR_BUFFER_BIT);
        badan();
        mata(eyecolor);
        mulut();
    glFlush();
}
void kunci(unsigned char key, int x, int y){
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
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glColor3f(1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);
    glMatrixMode(GL_MODELVIEW);

}

int main(int argc, char *argv[]){
glutInitWindowSize(500,500);
glutInitWindowPosition(200,200);
glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
glutCreateWindow("tugas tambahan");
glutDisplayFunc(display);
glutKeyboardFunc(kunci);
myinit();
glutMainLoop();
return 0;
}
