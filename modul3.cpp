#include <windows.h>
#include <iostream>
#include <stdio.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#include <GL/glu.h>
#endif
#include <stdlib.h>
using namespace std;
float posY = 0.0, posX = 0.0,color1 = 0.1,color2 = 0.5,color3 = 0.1,nilai_awal = 1.0,kelipatan = 2.0,kecepatan = 0.0;
void display(){
glClear (GL_COLOR_BUFFER_BIT);
    //glPointSize(1);
    glColor3f(color1,color2,color3);
    glBegin(GL_POLYGON);
        glVertex2f(0.0+posX,3.0+posY);
        glVertex2f(-0.58+posX,2.07+posY);
        glVertex2f(0.64+posX,2.07+posY);
    glEnd();
    glColor3f(color1,color2,color3);
    glBegin(GL_POLYGON);
        glVertex2f(-1.52+posX,2.03+posY);
        glVertex2f(-0.86+posX,1.25+posY);
        glVertex2f(-0.58+posX,2.07+posY);
    glEnd();
    glColor3f(color1,color2,color3);
    glBegin(GL_POLYGON);
        glVertex2f(-0.86+posX,1.25+posY);
        glVertex2f(-1.48+posX,0.27+posY);
        glVertex2f(0.0+posX,0.67+posY);
    glEnd();
    glColor3f(color1,color2,color3);
    glBegin(GL_POLYGON);
        glVertex2f(0.0+posX,0.67+posY);
        glVertex2f(1.44+posX,0.31+posY);
        glVertex2f(0.92+posX,1.27+posY);
    glEnd();
    glColor3f(color1,color2,color3);
    glBegin(GL_POLYGON);
        glVertex2f(0.92+posX,1.27+posY);
        glVertex2f(1.54+posX,2.03+posY);
        glVertex2f(0.64+posX,2.07+posY);
    glEnd();
    glColor3f(color1,color2,color3);
    glBegin(GL_POLYGON);
        glVertex2f(-0.58+posX,2.07+posY);
        glVertex2f(-0.86+posX,1.25+posY);
        glVertex2f(0.0+posX,0.67+posY);
        glVertex2f(0.92+posX,1.27+posY);
        glVertex2f(0.64+posX,2.07+posY);
    glEnd();
glFlush();
}
void react(unsigned char key, int x, int y){
   if(key == 'i' || key == 'I'){
        posY +=0.2;
        posY +=kecepatan;
        display();
    }
    else if(key == 'k' || key == 'K'){
        posY -=0.2;
        posY -= kecepatan;
        display();
    }else if(key == 'l' || key == 'L'){
        posX+=0.2;
        posX+= kecepatan;
        display();
    }else if(key == 'j' || key == 'J'){
        posX -= 0.2;
        posX -= kecepatan;
        display();
    }else if(key == 'u' || key == 'U'){
        posX-=0.2;
        posY+=0.2;
        posX-=kecepatan;
        posY+=kecepatan;
        display();
    }else if(key == 'o' || key == 'O'){
        posX+=0.2;
        posY+=0.2;
        posX+=kecepatan;
        posY+=kecepatan;
        display();
    }else if(key == 'n' || key == 'N'){
        posX-=0.2;
        posY-=0.2;
        posX-=kecepatan;
        posY-=kecepatan;
        display();
    }else if(key == 'm' || key == 'M'){
        posX+=0.2;
        posY-=0.2;
        posX+=kecepatan;
        posY-=kecepatan;
        display();
    }else{
        cout <<"salah pencet"<<endl;
    }
}
void arah(int key, int x, int y){
    if(key == GLUT_KEY_LEFT){ //untuk mengubah kecepatan
        nilai_awal *= kelipatan;
        kecepatan = nilai_awal;
        display();
        cout <<kecepatan<<endl;
    }else if(key == GLUT_KEY_RIGHT){ //untuk mengubah kecepatan
        nilai_awal /= kelipatan;
        kecepatan = nilai_awal;
        display();
        cout <<kecepatan<<endl;
    }else if(key == GLUT_KEY_UP){//untuk mengubah warna
        color1 += 0.1;
        color3 -= 0.1;
        display();
    }else if(key == GLUT_KEY_DOWN){//untuk mengubah warna
        color3 += 0.1;
        color1 -= 0.1;
        display();
    }else {
        cout <<"salah pencet"<<endl;
    }
}
void myinit(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10.0,10.0,-10.0,10.0);
    glMatrixMode(GL_MODELVIEW);
    glClearColor(1.0,1.0,1.0,1.0);
    glColor3f (0.0, 1.0, 0.0);
}
int main(int argc, char* argv[]){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700,700);
    //glutInitWindowPosition(100,100);
    glutCreateWindow("Modul3");
    glutDisplayFunc(display);
    glutSpecialFunc(arah);
    glutKeyboardFunc(react);
    myinit();
    glutMainLoop();
    return 0;
}
