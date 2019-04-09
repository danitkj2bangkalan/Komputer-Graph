#include <windows.h>
#include <iostream>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
float posx = 0.0,posy = 0.0,color1 = 1.0,color2= 0.0,color3=0.0,nilai_awal = 1.0,kelipatan = 2.0,kecepatan = 0.0;
bool maze = true,finish = false;
using namespace std;
void player(){
    //glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,1.0);

	glVertex2f(6.25+posx,12.75+posy);
	glVertex2f(6.75+posx,12.75+posy);
	glVertex2f(6.75+posx,12.25+posy);
	glVertex2f(6.25+posx,12.25+posy);

    glEnd();
    glFlush();
}

void layer1(){

    glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(4);
	//Bagian A1//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(1.0,11.0);
	glVertex2f(2.0,11.0);
	glVertex2f(2.0,10.0);
	glVertex2f(1.0,10.0);
    glEnd();

    //Bagian A2//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(1.0,9.0);
	glVertex2f(2.0,9.0);
	glVertex2f(2.0,2.0);
	glVertex2f(1.0,2.0);
    glEnd();

    //Bagian B1//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(2.0,12.0);
	glVertex2f(3.0,12.0);
	glVertex2f(3.0,9.0);
	glVertex2f(2.0,9.0);
    glEnd();

    //Bagian B2//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(2.0,7.0);
	glVertex2f(3.0,7.0);
	glVertex2f(3.0,6.0);
	glVertex2f(2.0,6.0);
    glEnd();

    //Bagian B3//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(2.0,5.0);
	glVertex2f(3.0,5.0);
	glVertex2f(3.0,4.0);
	glVertex2f(2.0,4.0);
    glEnd();

    //Bagian B4//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(2.0,3.0);
	glVertex2f(3.0,3.0);
	glVertex2f(3.0,2.0);
	glVertex2f(2.0,2.0);
    glEnd();

    //Bagian C1//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(3.0,11.0);
	glVertex2f(4.0,11.0);
	glVertex2f(4.0,10.0);
	glVertex2f(3.0,10.0);
    glEnd();

    //Bagian C2//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(3.0,9.0);
	glVertex2f(4.0,9.0);
	glVertex2f(4.0,6.0);
	glVertex2f(3.0,6.0);
    glEnd();

    //Bagian C3//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(3.0,5.0);
	glVertex2f(4.0,5.0);
	glVertex2f(4.0,2.0);
	glVertex2f(3.0,2.0);
    glEnd();

    //Bagian D1//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(4.0,12.0);
	glVertex2f(5.0,12.0);
	glVertex2f(5.0,8.0);
	glVertex2f(4.0,8.0);
    glEnd();

    //Bagian D2//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(4.0,7.0);
	glVertex2f(5.0,7.0);
	glVertex2f(5.0,5.0);
	glVertex2f(4.0,5.0);
    glEnd();

    //Bagian D3//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(4.0,2.0);
	glVertex2f(5.0,2.0);
	glVertex2f(5.0,1.0);
	glVertex2f(4.0,1.0);
    glEnd();

    //Bagian E1//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(5.0,9.0);
	glVertex2f(6.0,9.0);
	glVertex2f(6.0,8.0);
	glVertex2f(5.0,8.0);
    glEnd();

    //Bagian E2//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(5.0,6.0);
	glVertex2f(6.0,6.0);
	glVertex2f(6.0,3.0);
	glVertex2f(5.0,3.0);
    glEnd();

    //Bagian E3//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(5.0,2.0);
	glVertex2f(6.0,2.0);
	glVertex2f(6.0,1.0);
	glVertex2f(5.0,1.0);
    glEnd();

    //Bagian F1//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(6.0,12.0);
	glVertex2f(7.0,12.0);
	glVertex2f(7.0,8.0);
	glVertex2f(6.0,8.0);
    glEnd();

    //Bagian F2//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(6.0,7.0);
	glVertex2f(7.0,7.0);
	glVertex2f(7.0,5.0);
	glVertex2f(6.0,5.0);
    glEnd();

    //Bagian F3//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(6.0,2.0);
	glVertex2f(7.0,2.0);
	glVertex2f(7.0,1.0);
	glVertex2f(6.0,1.0);
    glEnd();

    //Bagian G1//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(7.0,10.0);
	glVertex2f(8.0,10.0);
	glVertex2f(8.0,9.0);
	glVertex2f(7.0,9.0);
    glEnd();

    //Bagian G2//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(7.0,7.0);
	glVertex2f(8.0,7.0);
	glVertex2f(8.0,6.0);
	glVertex2f(7.0,6.0);
    glEnd();

    //Bagian G3//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(7.0,5.0);
	glVertex2f(8.0,5.0);
	glVertex2f(8.0,1.0);
	glVertex2f(7.0,1.0);
    glEnd();

    //Bagian H1//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(8.0,11.0);
	glVertex2f(9.0,11.0);
	glVertex2f(9.0,8.0);
	glVertex2f(8.0,8.0);
    glEnd();

    //Bagian H2//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(8.0,7.0);
	glVertex2f(9.0,7.0);
	glVertex2f(9.0,5.0);
	glVertex2f(8.0,5.0);
    glEnd();

    //Bagian H3//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(8.0,4.0);
	glVertex2f(9.0,4.0);
	glVertex2f(9.0,3.0);
	glVertex2f(8.0,3.0);
    glEnd();

    //Bagian H4//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(8.0,2.0);
	glVertex2f(9.0,2.0);
	glVertex2f(9.0,1.0);
	glVertex2f(8.0,1.0);
    glEnd();

    //Bagian I1//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(9.0,12.0);
	glVertex2f(10.0,12.0);
	glVertex2f(10.0,10.0);
	glVertex2f(9.0,10.0);
    glEnd();

    //Bagian I2//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(9.0,9.0);
	glVertex2f(10.0,9.0);
	glVertex2f(10.0,8.0);
	glVertex2f(9.0,8.0);
    glEnd();

    //Bagian I3//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(9.0,7.0);
	glVertex2f(10.0,7.0);
	glVertex2f(10.0,6.0);
	glVertex2f(9.0,6.0);
    glEnd();

    //Bagian I4//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(9.0,4.0);
	glVertex2f(10.0,4.0);
	glVertex2f(10.0,3.0);
	glVertex2f(9.0,3.0);
    glEnd();

    //Bagian I5//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(9.0,2.0);
	glVertex2f(10.0,2.0);
	glVertex2f(10.0,1.0);
	glVertex2f(9.0,1.0);
    glEnd();

    //Bagian J1//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(10.0,10.0);
	glVertex2f(11.0,10.0);
	glVertex2f(11.0,9.0);
	glVertex2f(10.0,9.0);
    glEnd();

    //Bagian J2//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(10.0,8.0);
	glVertex2f(11.0,8.0);
	glVertex2f(11.0,5.0);
	glVertex2f(10.0,5.0);
    glEnd();

    //Bagian J3//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(10.0,3.0);
	glVertex2f(11.0,3.0);
	glVertex2f(11.0,1.0);
	glVertex2f(10.0,1.0);
    glEnd();

    //Bagian K1//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(11.0,12.0);
	glVertex2f(12.0,12.0);
	glVertex2f(12.0,7.0);
	glVertex2f(11.0,7.0);
    glEnd();

    //Bagian K2//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(11.0,6.0);
	glVertex2f(12.0,6.0);
	glVertex2f(12.0,2.0);
	glVertex2f(11.0,2.0);
    glEnd();

    //Bagian PINTU MASUK (START)//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(6.0,13.0);
	glVertex2f(7.0,13.0);
	glVertex2f(7.0,12.0);
	glVertex2f(6.0,12.0);
    glEnd();

    //Bagian PINTU KELUAR (FINISH)//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(6.0,1.0);
	glVertex2f(7.0,1.0);
	glVertex2f(7.0,0.0);
	glVertex2f(6.0,0.0);
    glEnd();

    glFlush();
}

void layer2(){
glPointSize(4);
	//Bagian A1//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(1.0,12.0);
	glVertex2f(2.0,12.0);
	glVertex2f(2.0,9.0);
	glVertex2f(1.0,9.0);
    glEnd();

    //Bagian A2//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(1.0,5.0);
	glVertex2f(2.0,5.0);
	glVertex2f(2.0,2.0);
	glVertex2f(1.0,2.0);
    glEnd();

    //Bagian B1//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(2.0,12.0);
	glVertex2f(3.0,12.0);
	glVertex2f(3.0,11.0);
	glVertex2f(2.0,11.0);
    glEnd();

    //Bagian B2//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(2.0,10.0);
	glVertex2f(3.0,10.0);
	glVertex2f(3.0,5.0);
	glVertex2f(2.0,5.0);
    glEnd();

    //Bagian B3//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(2.0,3.0);
	glVertex2f(3.0,3.0);
	glVertex2f(3.0,1.0);
	glVertex2f(2.0,1.0);
    glEnd();

    //Bagian C1//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(3.0,11.0);
	glVertex2f(4.0,11.0);
	glVertex2f(4.0,9.0);
	glVertex2f(3.0,9.0);
    glEnd();

    //Bagian C2//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(3.0,8.0);
	glVertex2f(4.0,8.0);
	glVertex2f(4.0,7.0);
	glVertex2f(3.0,7.0);
    glEnd();

    //Bagian C3//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(3.0,5.0);
	glVertex2f(4.0,5.0);
	glVertex2f(4.0,2.0);
	glVertex2f(3.0,2.0);
    glEnd();

    //Bagian D1//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(4.0,12.0);
	glVertex2f(5.0,12.0);
	glVertex2f(5.0,10.0);
	glVertex2f(4.0,10.0);
    glEnd();

    //Bagian D1//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(4.0,8.0);
	glVertex2f(5.0,8.0);
	glVertex2f(5.0,7.0);
	glVertex2f(4.0,7.0);
    glEnd();

    //Bagian D2//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(4.0,6.0);
	glVertex2f(5.0,6.0);
	glVertex2f(5.0,4.0);
	glVertex2f(4.0,4.0);
    glEnd();

    //Bagian D3//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(4.0,3.0);
	glVertex2f(5.0,3.0);
	glVertex2f(5.0,1.0);
	glVertex2f(4.0,1.0);
    glEnd();

    //Bagian E1//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(5.0,12.0);
	glVertex2f(6.0,12.0);
	glVertex2f(6.0,11.0);
	glVertex2f(5.0,11.0);
    glEnd();

    //Bagian E2//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(5.0,10.0);
	glVertex2f(6.0,10.0);
	glVertex2f(6.0,8.0);
	glVertex2f(5.0,8.0);
    glEnd();

    //Bagian E3//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(5.0,7.0);
	glVertex2f(6.0,7.0);
	glVertex2f(6.0,6.0);
	glVertex2f(5.0,6.0);
    glEnd();

    //Bagian E4//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(5.0,5.0);
	glVertex2f(6.0,5.0);
	glVertex2f(6.0,2.0);
	glVertex2f(5.0,2.0);
    glEnd();

    //Bagian F1//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(6.0,12.0);
	glVertex2f(7.0,12.0);
	glVertex2f(7.0,11.0);
	glVertex2f(6.0,11.0);
    glEnd();

    //Bagian F2//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(6.0,9.0);
	glVertex2f(7.0,9.0);
	glVertex2f(7.0,4.0);
	glVertex2f(6.0,4.0);
    glEnd();

    //Bagian F3//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(6.0,3.0);
	glVertex2f(7.0,3.0);
	glVertex2f(7.0,1.0);
	glVertex2f(6.0,1.0);
    glEnd();

    //Bagian G1//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(7.0,12.0);
	glVertex2f(8.0,12.0);
	glVertex2f(8.0,9.0);
	glVertex2f(7.0,9.0);
    glEnd();

    //Bagian G2//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(7.0,4.0);
	glVertex2f(8.0,4.0);
	glVertex2f(8.0,2.0);
	glVertex2f(7.0,2.0);
    glEnd();

    //Bagian H1//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(8.0,11.0);
	glVertex2f(9.0,11.0);
	glVertex2f(9.0,10.0);
	glVertex2f(8.0,10.0);
    glEnd();

    //Bagian H2//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(8.0,8.0);
	glVertex2f(9.0,8.0);
	glVertex2f(9.0,7.0);
	glVertex2f(8.0,7.0);
    glEnd();

    //Bagian H3//
	glBegin(GL_POLYGON);
    glColor3f(color1,color2,color3);
    glVertex2f(8.0,6.0);
	glVertex2f(9.0,6.0);
	glVertex2f(9.0,4.0);
	glVertex2f(8.0,4.0);
    glEnd();

    //Bagian H4//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(8.0,3.0);
	glVertex2f(9.0,3.0);
	glVertex2f(9.0,2.0);
	glVertex2f(8.0,2.0);
    glEnd();

    //Bagian I1//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(9.0,12.0);
	glVertex2f(10.0,12.0);
	glVertex2f(10.0,7.0);
	glVertex2f(9.0,7.0);
    glEnd();

    //Bagian I2//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(9.0,5.0);
	glVertex2f(10.0,5.0);
	glVertex2f(10.0,4.0);
	glVertex2f(9.0,4.0);
    glEnd();

    //Bagian I3//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(9.0,3.0);
	glVertex2f(10.0,3.0);
	glVertex2f(10.0,1.0);
	glVertex2f(9.0,1.0);
    glEnd();

    //Bagian J1//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(10.0,10.0);
	glVertex2f(11.0,10.0);
	glVertex2f(11.0,9.0);
	glVertex2f(10.0,9.0);
    glEnd();

    //Bagian J2//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(10.0,8.0);
	glVertex2f(11.0,8.0);
	glVertex2f(11.0,4.0);
	glVertex2f(10.0,4.0);
    glEnd();

    //Bagian J3//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(10.0,3.0);
	glVertex2f(11.0,3.0);
	glVertex2f(11.0,2.0);
	glVertex2f(10.0,2.0);
    glEnd();

    //Bagian K1//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(11.0,11.0);
	glVertex2f(12.0,11.0);
	glVertex2f(12.0,9.0);
	glVertex2f(11.0,9.0);
    glEnd();

    //Bagian K2//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(11.0,7.0);
	glVertex2f(12.0,7.0);
	glVertex2f(12.0,6.0);
	glVertex2f(11.0,6.0);
    glEnd();

    //Bagian K3//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(11.0,5.0);
	glVertex2f(12.0,5.0);
	glVertex2f(12.0,2.0);
	glVertex2f(11.0,2.0);
    glEnd();

    //Bagian PINTU MASUK (START)//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(6.0,13.0);
	glVertex2f(7.0,13.0);
	glVertex2f(7.0,12.0);
	glVertex2f(6.0,12.0);
    glEnd();

    //Bagian PINTU KELUAR (FINISH)//
	glBegin(GL_POLYGON);
	glColor3f(color1,color2,color3);
	glVertex2f(6.0,1.0);
	glVertex2f(7.0,1.0);
	glVertex2f(7.0,0.0);
	glVertex2f(6.0,0.0);
    glEnd();
    glFlush();
}

void win(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,0,0);
    glLineWidth(20);
    glBegin(GL_LINE_STRIP);
        glVertex2f(4.5,8);
        glVertex2f(4.0,5);
        glVertex2f(5.5,8);
        glVertex2f(5.0,5);
        glVertex2f(6.5,8);
    glEnd();
    glBegin(GL_LINE_STRIP);
        glVertex2f(7,5);
        glVertex2f(7,8);
        glEnd();
    glBegin(GL_LINE_STRIP);
        glVertex2f(8.5,5);
        glVertex2f(8.5,8);
        glVertex2f(9.5,5);
        glVertex2f(9.5,8);
    glEnd();
    glFlush();
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    if (maze == true && finish == false){
        layer1();
    }else if(maze == false && finish == false){
        layer2();
    }else {
        win();
    }
    player();

    glFlush();
}

void untukfinish(){
	if(12.25+posy <= 0.0&&12.75+posy <=0.0){
        finish = true;
	}
}

void arah(unsigned char key, int x, int y){
    if(key == 'w'| key == 'W'){
        posy+=0.1;
        posy+=kecepatan;
    }else if(key == 's'| key == 'S'){
        posy-=0.1;
        posy-=kecepatan;
    }else if(key == 'a'| key == 'A'){
        posx-=0.1;
        posx-=kecepatan;
    }else if(key == 'd'| key == 'D'){
        posx+=0.1;
        posx+=kecepatan;
    }else if(key == 'q'| key == 'Q'){
        color1-=0.5;
        color2+=0.2;
        color3+=0.2;
    }else if(key == 'e'| key == 'E'){
        color1+=0.5;
        color2-=0.2;
        color3-=0.2;
    }else if(key == 'c' | key == 'C'){
        posx = 0.0;
        posy = 0.0;
        if(maze == true){
            maze = false;
        }
        else{
            maze = true;
        }
    }else{
        cout<<"salah pencet"<<endl;
    }

    player();
    display();
    untukfinish();
}

void mymouse(int button, int state, int x, int y){
    if(button == GLUT_LEFT_BUTTON ){
        posx-=0.1;
    }else if(button == GLUT_RIGHT_BUTTON){
        posx+=0.1;
    }else if(button == GLUT_MIDDLE_BUTTON && GLUT_UP){
        posy+=0.1;
    }else if(button == GLUT_MIDDLE_BUTTON && GLUT_DOWN){
        posy-=0.1;
    }
    display();
}

void arrow(int key, int x, int y){
    if(key == GLUT_KEY_UP){ // restart
        maze = true;
        finish = false;
        posx=0;
        posy=0;
        display();
    }else if(key == GLUT_KEY_LEFT){ //untuk mengubah kecepatan
        nilai_awal *= kelipatan;
        kecepatan = nilai_awal;
        display();
        cout <<kecepatan<<endl;
    }else if(key == GLUT_KEY_RIGHT){ //untuk mengubah kecepatan
        nilai_awal /= kelipatan;
        kecepatan = nilai_awal;
        display();
        cout <<kecepatan<<endl;
    }
}

void myinit(){
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,13.0,0.0,13.0);
	glMatrixMode(GL_MODELVIEW);
	glClearColor(0.0,1.0,1.0,1.0);
	glColor3f(0.0,0.0,1.0);
}

int main(int argc, char* argv[]){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600,600);
	glutInitWindowPosition(400,100);
	glutCreateWindow("MAZE - MOH. ROMADHANI FIRDAUS - 170411100107");
	glutDisplayFunc(display);
	glutKeyboardFunc(arah);
	glutMouseFunc(mymouse);
	glutSpecialFunc(arrow);
	myinit();
	glutMainLoop();
	return 0;
}
