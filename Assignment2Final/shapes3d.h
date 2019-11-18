/////////////////////////////////////
// shapes3d.h
//
// header file for shapes3d.c
//
// author: damian larkin (18230253)
// date: 16/11/2019
/////////////////////////////////////

#ifndef SHAPES3D_H
#define SHAPES3D_H

// pre-processor macro to define PI for use in functions
#define PI (3.14159)

//public function declarations
int acube(float s);
int vcube(float s);

int aprism(float l, float h, float w);
int vprism(float l, float h, float w);

int asphere(float r);
int vsphere(float r);

int acyl(float r, float h);
int vcyl(float r, float h);

#endif
