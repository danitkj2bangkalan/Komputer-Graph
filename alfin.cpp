#include <windows.h>
#include <iostream>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

float posx = 0.0,posy = 0.0;

bool maze = true;
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
	glColor3f(1.0,0.0,0.0);
	glVertex2f(1.0,11.0);
	glVertex2f(2.0,11.0);
	glVertex2f(2.0,10.0);
	glVertex2f(1.0,10.0);
    glEnd();

    //Bagian A2//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(1.0,9.0);
	glVertex2f(2.0,9.0);
	glVertex2f(2.0,2.0);
	glVertex2f(1.0,2.0);
    glEnd();

    //Bagian B1//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(2.0,12.0);
	glVertex2f(3.0,12.0);
	glVertex2f(3.0,9.0);
	glVertex2f(2.0,9.0);
    glEnd();

    //Bagian B2//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(2.0,7.0);
	glVertex2f(3.0,7.0);
	glVertex2f(3.0,6.0);
	glVertex2f(2.0,6.0);
    glEnd();

    //Bagian B3//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(2.0,5.0);
	glVertex2f(3.0,5.0);
	glVertex2f(3.0,4.0);
	glVertex2f(2.0,4.0);
    glEnd();

    //Bagian B4//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(2.0,3.0);
	glVertex2f(3.0,3.0);
	glVertex2f(3.0,2.0);
	glVertex2f(2.0,2.0);
    glEnd();

    //Bagian C1//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(3.0,11.0);
	glVertex2f(4.0,11.0);
	glVertex2f(4.0,10.0);
	glVertex2f(3.0,10.0);
    glEnd();

    //Bagian C2//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(3.0,9.0);
	glVertex2f(4.0,9.0);
	glVertex2f(4.0,6.0);
	glVertex2f(3.0,6.0);
    glEnd();

    //Bagian C3//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(3.0,5.0);
	glVertex2f(4.0,5.0);
	glVertex2f(4.0,2.0);
	glVertex2f(3.0,2.0);
    glEnd();

    //Bagian D1//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(4.0,12.0);
	glVertex2f(5.0,12.0);
	glVertex2f(5.0,8.0);
	glVertex2f(4.0,8.0);
    glEnd();

    //Bagian D2//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(4.0,7.0);
	glVertex2f(5.0,7.0);
	glVertex2f(5.0,5.0);
	glVertex2f(4.0,5.0);
    glEnd();

    //Bagian D3//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(4.0,2.0);
	glVertex2f(5.0,2.0);
	glVertex2f(5.0,1.0);
	glVertex2f(4.0,1.0);
    glEnd();

    //Bagian E1//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(5.0,9.0);
	glVertex2f(6.0,9.0);
	glVertex2f(6.0,8.0);
	glVertex2f(5.0,8.0);
    glEnd();

    //Bagian E2//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(5.0,6.0);
	glVertex2f(6.0,6.0);
	glVertex2f(6.0,3.0);
	glVertex2f(5.0,3.0);
    glEnd();

    //Bagian E3//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(5.0,2.0);
	glVertex2f(6.0,2.0);
	glVertex2f(6.0,1.0);
	glVertex2f(5.0,1.0);
    glEnd();

    //Bagian F1//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(6.0,12.0);
	glVertex2f(7.0,12.0);
	glVertex2f(7.0,8.0);
	glVertex2f(6.0,8.0);
    glEnd();

    //Bagian F2//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(6.0,7.0);
	glVertex2f(7.0,7.0);
	glVertex2f(7.0,5.0);
	glVertex2f(6.0,5.0);
    glEnd();

    //Bagian F3//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(6.0,2.0);
	glVertex2f(7.0,2.0);
	glVertex2f(7.0,1.0);
	glVertex2f(6.0,1.0);
    glEnd();

    //Bagian G1//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(7.0,10.0);
	glVertex2f(8.0,10.0);
	glVertex2f(8.0,9.0);
	glVertex2f(7.0,9.0);
    glEnd();

    //Bagian G2//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(7.0,7.0);
	glVertex2f(8.0,7.0);
	glVertex2f(8.0,6.0);
	glVertex2f(7.0,6.0);
    glEnd();

    //Bagian G3//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(7.0,5.0);
	glVertex2f(8.0,5.0);
	glVertex2f(8.0,1.0);
	glVertex2f(7.0,1.0);
    glEnd();

    //Bagian H1//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(8.0,11.0);
	glVertex2f(9.0,11.0);
	glVertex2f(9.0,8.0);
	glVertex2f(8.0,8.0);
    glEnd();

    //Bagian H2//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(8.0,7.0);
	glVertex2f(9.0,7.0);
	glVertex2f(9.0,5.0);
	glVertex2f(8.0,5.0);
    glEnd();

    //Bagian H3//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(8.0,4.0);
	glVertex2f(9.0,4.0);
	glVertex2f(9.0,3.0);
	glVertex2f(8.0,3.0);
    glEnd();

    //Bagian H4//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(8.0,2.0);
	glVertex2f(9.0,2.0);
	glVertex2f(9.0,1.0);
	glVertex2f(8.0,1.0);
    glEnd();

    //Bagian I1//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(9.0,12.0);
	glVertex2f(10.0,12.0);
	glVertex2f(10.0,10.0);
	glVertex2f(9.0,10.0);
    glEnd();

    //Bagian I2//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(9.0,9.0);
	glVertex2f(10.0,9.0);
	glVertex2f(10.0,8.0);
	glVertex2f(9.0,8.0);
    glEnd();

    //Bagian I3//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(9.0,7.0);
	glVertex2f(10.0,7.0);
	glVertex2f(10.0,6.0);
	glVertex2f(9.0,6.0);
    glEnd();

    //Bagian I4//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(9.0,4.0);
	glVertex2f(10.0,4.0);
	glVertex2f(10.0,3.0);
	glVertex2f(9.0,3.0);
    glEnd();

    //Bagian I5//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(9.0,2.0);
	glVertex2f(10.0,2.0);
	glVertex2f(10.0,1.0);
	glVertex2f(9.0,1.0);
    glEnd();

    //Bagian J1//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(10.0,10.0);
	glVertex2f(11.0,10.0);
	glVertex2f(11.0,9.0);
	glVertex2f(10.0,9.0);
    glEnd();

    //Bagian J2//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(10.0,8.0);
	glVertex2f(11.0,8.0);
	glVertex2f(11.0,5.0);
	glVertex2f(10.0,5.0);
    glEnd();

    //Bagian J3//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(10.0,3.0);
	glVertex2f(11.0,3.0);
	glVertex2f(11.0,1.0);
	glVertex2f(10.0,1.0);
    glEnd();

    //Bagian K1//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(11.0,12.0);
	glVertex2f(12.0,12.0);
	glVertex2f(12.0,7.0);
	glVertex2f(11.0,7.0);
    glEnd();

    //Bagian K2//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(11.0,6.0);
	glVertex2f(12.0,6.0);
	glVertex2f(12.0,2.0);
	glVertex2f(11.0,2.0);
    glEnd();

    //Bagian PINTU MASUK (START)//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(6.0,13.0);
	glVertex2f(7.0,13.0);
	glVertex2f(7.0,12.0);
	glVertex2f(6.0,12.0);
    glEnd();

    //Bagian PINTU KELUAR (FINISH)//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(6.0,1.0);
	glVertex2f(7.0,1.0);
	glVertex2f(7.0,0.0);
	glVertex2f(6.0,0.0);
    glEnd();


    //BAGIAN NIM//
    //ANGKA 0 KIRI //
    glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(1.25,10.75);
	glVertex2f(1.375,10.75);
	glVertex2f(1.375,10.25);
	glVertex2f(1.25,10.25);
    glEnd();

    //ANGKA 0 BAWAH //
    glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(1.25,10.375);
	glVertex2f(1.75,10.375);
	glVertex2f(1.75,10.25);
	glVertex2f(1.25,10.25);
    glEnd();

    //ANGKA 0 KANAN //
    glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(1.625,10.75);
	glVertex2f(1.75,10.75);
	glVertex2f(1.75,10.25);
	glVertex2f(1.625,10.25);
    glEnd();

    //ANGKA 0 ATAS //
    glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(1.25,10.75);
	glVertex2f(1.75,10.75);
	glVertex2f(1.75,10.625);
	glVertex2f(1.25,10.625);
    glEnd();

    //ANGKA 9 //
    //ANGKA 9 BAGIAN BAWAH//
    glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(2.25,10.25);
	glVertex2f(2.75,10.25);
	glVertex2f(2.75,10.375);
	glVertex2f(2.25,10.375);
    glEnd();

    //ANGKA 9 BAGIAN KANAN//
    glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(2.5,10.25);
	glVertex2f(2.75,10.25);
	glVertex2f(2.75,10.75);
	glVertex2f(2.5,10.75);
    glEnd();

    //ANGKA 9 BAGIAN A//
    glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(2.25,10.70);
	glVertex2f(2.75,10.70);
	glVertex2f(2.75,10.75);
	glVertex2f(2.25,10.75);
    glEnd();

    //ANGKA 9 BAGIAN L//
    glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(2.25,10.5);
	glVertex2f(2.75,10.5);
	glVertex2f(2.75,10.55);
	glVertex2f(2.25,10.55);
    glEnd();

    //ANGKA 9 BAGIAN F//
    glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(2.25,10.5);
	glVertex2f(2.375,10.5);
	glVertex2f(2.375,10.75);
	glVertex2f(2.25,10.75);
    glEnd();

    //ANGKA 1 //
    glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(3.25,10.25);
	glVertex2f(3.5,10.25);
	glVertex2f(3.5,10.75);
	glVertex2f(3.25,10.75);
    glEnd();

    glFlush();
}

void layer2(){
glPointSize(4);
	//Bagian A1//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(1.0,12.0);
	glVertex2f(2.0,12.0);
	glVertex2f(2.0,9.0);
	glVertex2f(1.0,9.0);
    glEnd();

    //Bagian A2//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(1.0,5.0);
	glVertex2f(2.0,5.0);
	glVertex2f(2.0,2.0);
	glVertex2f(1.0,2.0);
    glEnd();

    //Bagian B1//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(2.0,12.0);
	glVertex2f(3.0,12.0);
	glVertex2f(3.0,11.0);
	glVertex2f(2.0,11.0);
    glEnd();

    //Bagian B2//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(2.0,10.0);
	glVertex2f(3.0,10.0);
	glVertex2f(3.0,5.0);
	glVertex2f(2.0,5.0);
    glEnd();

    //Bagian B3//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(2.0,3.0);
	glVertex2f(3.0,3.0);
	glVertex2f(3.0,1.0);
	glVertex2f(2.0,1.0);
    glEnd();

    //Bagian C1//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(3.0,11.0);
	glVertex2f(4.0,11.0);
	glVertex2f(4.0,9.0);
	glVertex2f(3.0,9.0);
    glEnd();

    //Bagian C2//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(3.0,8.0);
	glVertex2f(4.0,8.0);
	glVertex2f(4.0,7.0);
	glVertex2f(3.0,7.0);
    glEnd();

    //Bagian C3//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(3.0,5.0);
	glVertex2f(4.0,5.0);
	glVertex2f(4.0,2.0);
	glVertex2f(3.0,2.0);
    glEnd();

    //Bagian D1//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(4.0,12.0);
	glVertex2f(5.0,12.0);
	glVertex2f(5.0,10.0);
	glVertex2f(4.0,10.0);
    glEnd();

    //Bagian D1//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(4.0,8.0);
	glVertex2f(5.0,8.0);
	glVertex2f(5.0,7.0);
	glVertex2f(4.0,7.0);
    glEnd();

    //Bagian D2//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(4.0,6.0);
	glVertex2f(5.0,6.0);
	glVertex2f(5.0,4.0);
	glVertex2f(4.0,4.0);
    glEnd();

    //Bagian D3//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(4.0,3.0);
	glVertex2f(5.0,3.0);
	glVertex2f(5.0,1.0);
	glVertex2f(4.0,1.0);
    glEnd();

    //Bagian E1//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(5.0,12.0);
	glVertex2f(6.0,12.0);
	glVertex2f(6.0,11.0);
	glVertex2f(5.0,11.0);
    glEnd();

    //Bagian E2//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(5.0,10.0);
	glVertex2f(6.0,10.0);
	glVertex2f(6.0,8.0);
	glVertex2f(5.0,8.0);
    glEnd();

    //Bagian E3//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(5.0,7.0);
	glVertex2f(6.0,7.0);
	glVertex2f(6.0,6.0);
	glVertex2f(5.0,6.0);
    glEnd();

    //Bagian E4//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(5.0,5.0);
	glVertex2f(6.0,5.0);
	glVertex2f(6.0,2.0);
	glVertex2f(5.0,2.0);
    glEnd();

    //Bagian F1//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(6.0,12.0);
	glVertex2f(7.0,12.0);
	glVertex2f(7.0,11.0);
	glVertex2f(6.0,11.0);
    glEnd();

    //Bagian F2//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(6.0,9.0);
	glVertex2f(7.0,9.0);
	glVertex2f(7.0,4.0);
	glVertex2f(6.0,4.0);
    glEnd();

    //Bagian F3//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(6.0,3.0);
	glVertex2f(7.0,3.0);
	glVertex2f(7.0,1.0);
	glVertex2f(6.0,1.0);
    glEnd();

    //Bagian G1//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(7.0,12.0);
	glVertex2f(8.0,12.0);
	glVertex2f(8.0,9.0);
	glVertex2f(7.0,9.0);
    glEnd();

    //Bagian G2//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(7.0,4.0);
	glVertex2f(8.0,4.0);
	glVertex2f(8.0,2.0);
	glVertex2f(7.0,2.0);
    glEnd();

    //Bagian H1//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(8.0,11.0);
	glVertex2f(9.0,11.0);
	glVertex2f(9.0,10.0);
	glVertex2f(8.0,10.0);
    glEnd();

    //Bagian H2//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(8.0,8.0);
	glVertex2f(9.0,8.0);
	glVertex2f(9.0,7.0);
	glVertex2f(8.0,7.0);
    glEnd();

    //Bagian H3//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(8.0,6.0);
	glVertex2f(9.0,6.0);
	glVertex2f(9.0,4.0);
	glVertex2f(8.0,4.0);
    glEnd();

    //Bagian H4//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(8.0,3.0);
	glVertex2f(9.0,3.0);
	glVertex2f(9.0,2.0);
	glVertex2f(8.0,2.0);
    glEnd();

    //Bagian I1//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(9.0,12.0);
	glVertex2f(10.0,12.0);
	glVertex2f(10.0,7.0);
	glVertex2f(9.0,7.0);
    glEnd();

    //Bagian I2//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(9.0,5.0);
	glVertex2f(10.0,5.0);
	glVertex2f(10.0,4.0);
	glVertex2f(9.0,4.0);
    glEnd();

    //Bagian I3//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(9.0,3.0);
	glVertex2f(10.0,3.0);
	glVertex2f(10.0,1.0);
	glVertex2f(9.0,1.0);
    glEnd();

    //Bagian J1//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(10.0,10.0);
	glVertex2f(11.0,10.0);
	glVertex2f(11.0,9.0);
	glVertex2f(10.0,9.0);
    glEnd();

    //Bagian J2//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(10.0,8.0);
	glVertex2f(11.0,8.0);
	glVertex2f(11.0,4.0);
	glVertex2f(10.0,4.0);
    glEnd();

    //Bagian J3//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(10.0,3.0);
	glVertex2f(11.0,3.0);
	glVertex2f(11.0,2.0);
	glVertex2f(10.0,2.0);
    glEnd();

    //Bagian K1//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(11.0,11.0);
	glVertex2f(12.0,11.0);
	glVertex2f(12.0,9.0);
	glVertex2f(11.0,9.0);
    glEnd();

    //Bagian K2//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(11.0,7.0);
	glVertex2f(12.0,7.0);
	glVertex2f(12.0,6.0);
	glVertex2f(11.0,6.0);
    glEnd();

    //Bagian K3//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(11.0,5.0);
	glVertex2f(12.0,5.0);
	glVertex2f(12.0,2.0);
	glVertex2f(11.0,2.0);
    glEnd();

    //Bagian PINTU MASUK (START)//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(6.0,13.0);
	glVertex2f(7.0,13.0);
	glVertex2f(7.0,12.0);
	glVertex2f(6.0,12.0);
    glEnd();

    //Bagian PINTU KELUAR (FINISH)//
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(6.0,1.0);
	glVertex2f(7.0,1.0);
	glVertex2f(7.0,0.0);
	glVertex2f(6.0,0.0);
    glEnd();


    //BAGIAN NIM//
    //ANGKA 0 KIRI //
    glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(1.25,2.75);
	glVertex2f(1.375,2.75);
	glVertex2f(1.375,2.25);
	glVertex2f(1.25,2.25);
    glEnd();

    //ANGKA 0 BAWAH //
    glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(1.25,2.375);
	glVertex2f(1.75,2.375);
	glVertex2f(1.75,2.25);
	glVertex2f(1.25,2.25);
    glEnd();

    //ANGKA 0 KANAN //
    glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(1.625,2.75);
	glVertex2f(1.75,2.75);
	glVertex2f(1.75,2.25);
	glVertex2f(1.625,2.25);
    glEnd();

    //ANGKA 0 ATAS //
    glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(1.25,2.75);
	glVertex2f(1.75,2.75);
	glVertex2f(1.75,2.625);
	glVertex2f(1.25,2.625);
    glEnd();

    //ANGKA 9 //
    //ANGKA 9 BAGIAN BAWAH//
    glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(2.25,2.25);
	glVertex2f(2.75,2.25);
	glVertex2f(2.75,2.375);
	glVertex2f(2.25,2.375);
    glEnd();

    //ANGKA 9 BAGIAN KANAN//
    glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(2.5,2.25);
	glVertex2f(2.75,2.25);
	glVertex2f(2.75,2.75);
	glVertex2f(2.5,2.75);
    glEnd();

    //ANGKA 9 BAGIAN A//
    glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(2.25,2.70);
	glVertex2f(2.75,2.70);
	glVertex2f(2.75,2.75);
	glVertex2f(2.25,2.75);
    glEnd();

    //ANGKA 9 BAGIAN L//
    glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(2.25,2.5);
	glVertex2f(2.75,2.5);
	glVertex2f(2.75,2.55);
	glVertex2f(2.25,2.55);
    glEnd();

    //ANGKA 9 BAGIAN F//
    glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(2.25,2.5);
	glVertex2f(2.375,2.5);
	glVertex2f(2.375,2.75);
	glVertex2f(2.25,2.75);
    glEnd();

    //ANGKA 1 //
    glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(3.25,2.25);
	glVertex2f(3.5,2.25);
	glVertex2f(3.5,2.75);
	glVertex2f(3.25,2.75);
    glEnd();

    glFlush();
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    if (maze == true){
        layer1();
    }else{
        layer2();
    }

    player();
}

void arah(unsigned char key, int x, int y){
    if(key == 'c' | key == 'C'){
        if(maze == true){
            maze = false;
        }
        else{
            maze = true;
        }
    }else if(key == 'w'| key == 'W'){
        posy+=0.1;
    }else if(key == 's'| key == 'S'){
        posy-=0.1;
    }else if(key == 'a'| key == 'A'){
        posx-=0.1;
    }else if(key == 'd'| key == 'D'){
        posx+=0.1;
    }else{
        cout<<"salah pencet"<<endl;
    }

    display();
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

void myinit(){
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,13.0,0.0,13.0);
	//gluOrtho2D(KIRI,KANAN,BAWAH,ATAS);
	glMatrixMode(GL_MODELVIEW);
	glClearColor(0.0,1.0,1.0,1.0);
	glColor3f(0.0,0.0,1.0);
}

int main(int argc, char* argv[]){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600,600);
	glutInitWindowPosition(400,100);
	glutCreateWindow("MAZE - ALFIN NIAM 170411100091");
	glutDisplayFunc(display);
	glutKeyboardFunc(arah);
	glutMouseFunc(mymouse);
	myinit();
	glutMainLoop();

	return 0;
}
