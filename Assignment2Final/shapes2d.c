////////////////////////////////////////////
// 2DShapes.c
//
// solution to the 2D Shape calculations
// from CE4703 assignment 2.
// the header file "shapes2d.h" contains a
// pre-processor value for PI, which is used
// in calculations in this program.
//
// author: damian larkin (18230253)
// date:   16/11/2019
////////////////////////////////////////////


#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// call header file
#include "shapes2d.h"



/////////////////////////////////////////////////////
// function asquare(s)
// calculates the area of a square with sides s
//
// parameter: float s - length of sides of square
// return: float a - area of square
/////////////////////////////////////////////////////
int asquare(float s) {
  float a;
  a = (s*s);
  printf("\n\033[1;34mArea = %f\n", a);
  return a;
}

///////////////////////////////////////////////////////
// function psquare(s)
// calculates the perimeter of a square with sides s
//
// parameters: float s - length of sides of square
// return: float p - perimeter of square
///////////////////////////////////////////////////////
int psquare(float s)
{
  float p;
  p = (s*4);
  printf("Perimeter = %f\n\033[0m", p);
  return p;
}

///////////////////////////////////////////////////////////////
// function arec(l, w)
// calculates the area of a rectangle with sides l & w
//
// parameters: float l - length of one side of rectangle
//             float w - length of another side of rectangle
// return: float a - area of rectangle
///////////////////////////////////////////////////////////////
int arec(float l, float w)
{
  float a;
  a = (l*w);
  printf("\n\033[1;34mArea = %f\n", a);
  return a;
}

///////////////////////////////////////////////////////////////////
// function prec(l, w)
// calculates the perimeter of a rectangle
//
// parameters: float l - length of one side of rectangle
//             float w - length of another side of rectangle
// return: float p - perimeter of rectangle
///////////////////////////////////////////////////////////////////
int prec(float l, float w) {
  float p;
  p = ((l*2)+(w*2));
  printf("Perimeter = %f\n\033[0m", p);
  return p;
}

//////////////////////////////////////////////
// function acirc(r)
// calculates the area of a circle
//
// parameters: float r - radius of circle
// return: float a - area of circle
//////////////////////////////////////////////
int acirc(float r) {
  float a;
  a = (PI * (r*r));
  printf("\n\033[1;34mArea = %f\n", a);
  return a;
}

/////////////////////////////////////////////////
// function ccirc(r)
// calulcates the circumference of a circle
//
// parameters: float r - radius of circle
// return: float c - circumference of circle
/////////////////////////////////////////////////
int ccirc(float r) {
  float c;
  c = (2 * (PI * r));
  printf("Circumference = %f\n\\033[0m", c);
  return c;
}

////////////////////////////////////////////////////////////
// function atri(b, h)
// calculates the area of a triangle
//
// parameters: float b - base length of triangle
//             float h - perpendicular height of triangle
// return: float a - area of triangle
////////////////////////////////////////////////////////////
int atri(float b, float h)
{
  float a;
  a = ((b*h) / 2);
  printf("\n\033[1;34mArea = %f\n", a);
  return a;
}

///////////////////////////////////////////////
// function ptri(a, b, c)
// calculates the perimeter of a triangle
//
// parameters: float a - side length
//             float b - side length
//             float c - side length
// return: float p - perimeter of triangle
///////////////////////////////////////////////
int ptri(float a, float b, float c)
{
  float p;
  p = ((a+b)+c);
  printf("\nPerimeter = %f\n\033[0m", p);
  return p;
}

/////////////////////////////////////////////////
// function apar(b, h)
// calculates the area of a parallelogram
//
// parameters: float b - base length
//             float h - perpendicular height
// return: float a - area of parallelogram
/////////////////////////////////////////////////
int apar(float b, float h)
{
  float a;
  a = (b*h);
  printf("\n\033[1;34mArea = %f\n", a);
  return a;
}

/////////////////////////////////////////////////////
// function ppar(b, a)
// calculates the perimeter of a parallelogram
//
// parameters: float b - base length
//             float a - side length
// return: float p - perimeter of parallelogram
/////////////////////////////////////////////////////
int ppar(float b, float a)
{
  float p;
  p = ((a*2)+(b*2));
  printf("\n\033[1;34mPerimeter = %f\n\n\033[0m", p);
  return p;
}
