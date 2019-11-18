#include <stdio.h>

#include "shapes3d.h"

///////////////////////////////////////////////////////////
// function acube(s)
// calculates surface area of a cube with side lengths s
//
// all functions that require a value for PI are using a
// custom value set using the pre processor in the header
// file "shapes3d.h"
//
// parameters: float s - length of sides of cube
// return: float a - surface area of cube
///////////////////////////////////////////////////////////
int acube(float s)
{
  float a;
  a = (6 * (s*s));
  printf("\033[1;34m\nSurface area of cube = %f\n\033[0m", a);
  return a;
}

////////////////////////////////////////////////////////////
// function vcube(s)
// calculates the volume of a cube with side lengths s
//
// parameters: float s - length of sides of cube
// return: float v - volume of cube
////////////////////////////////////////////////////////////
int vcube(float s)
{
  float v;
  v = (s*(s*s));
  printf("\033[1;34mVolume of cube = %f\n\033[0m", v);
  return v;
}

//////////////////////////////////////////////////////
// function aprism(l, h, w)
// calulcates surface area of a rectangular prism
//
// parameters: float l - length of prism
//             float h - height of prism
//             float w - width of prism
// return: float a - surface area of prism
//////////////////////////////////////////////////////
int aprism(float l, float h, float w)
{
  float a;
  a = ((2*(l*w))+(2*(l*h))+(2*(w*h)));
  printf("\n\033[1;34mSurface area of rectangular prism = %f\n\033[0m", a);
  return a;
}

////////////////////////////////////////////////////
// function vprism(l, h, w)
// calulcates the volume of a rectangular prism
//
// parameters: float l - length of prism
//             float h - height of prism
//             float w - width of prism
// return: float v - volume of prism
////////////////////////////////////////////////////
int vprism(float l, float h, float w)
{
  float v;
  v = (l*(w*h));
  printf("\033[1;34mVolume of rectangular prism = %f\n\033[0m", v);
  return v;
}

////////////////////////////////////////////////
// function asphere(r)
// calulates the surface area of a sphere
//
// parameters: float r - radius of sphere
// return: float a - surface area of sphere
////////////////////////////////////////////////
int asphere(float r)
{
  float a;
  a = (4*(PI * (r*r)));
  printf("\n\033[1;34mSurface area of sphere = %f\n", a);
  return a;
}

//
// function vsphere(r)
// calculates the volume of a sphere
//
// parameters: float r - radius of sphere
// return: float v - volume of sphere
int vsphere(float r)
{
  float v;
  v = ((4 * (PI * (r*(r*r)))) / 3);
  printf("Volume of sphere = %f\n\033[0m", v);
  return v;
}

/////////////////////////////////////////////////////////////////
// function acyl(r, h)
// calulates the surface area of a right circular cylinder
//
// parameters: float r - radius of cylinder
//             float h - height of cylinder
// return: float a - surface area of cylinder
/////////////////////////////////////////////////////////////////
int acyl(float r, float h)
{
  float a;
  a = (2 * (PI * (r*h)))+(2 * (PI * (r*r)));
  printf("\n\033[1;34mSurface area of right circular cylinder = %f\n", a);
  return a;
}

//////////////////////////////////////////////////////////////
// function vcyl(r, h)
// calculates the volume of a right circular cylinder
//
//parameters: float r - radius of cylinder
//            float h - height of cylinder
// return: float v - volume of cylinder
//////////////////////////////////////////////////////////////
int vcyl(float r, float h)
{
  float v;
  v = (PI*(h*(r*r)));
  printf("Volume of right circular cylinder = %f\n\n\033[0m", v);
  return v;
}


