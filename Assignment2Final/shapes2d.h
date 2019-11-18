/////////////////////////////////////
// shapes2d.h
//
// header file for shapes2d.c
//
// author: damian larkin (18230253)
// date: 16/11/2019
/////////////////////////////////////

#ifndef SHAPES2D_H
#define SHAPES2D_H

// pre-processor macro to define PI for use in functions
#define PI (3.14159)

//public function declarations
int asquare(float s);
int psquare(float s);

int arec(float l, float w);
int prec(float l, float w);

int acirc(float r);
int ccirc(float r);

int atri(float b, float h);
int ptri(float a, float b, float c);

int apar(float b, float h);
int ppar(float b, float a);

#endif
