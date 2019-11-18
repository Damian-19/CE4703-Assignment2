#include <stdio.h>
#include <stdlib.h>

#include "shapes2d.h"

int main()
{
  /////////////////////////////
  // START 2D SHAPE FUNCTIONS//
  /////////////////////////////
  
  //square functions
  float s;
  printf("\n\033[1;32mPlease enter a square side s: \n");
  scanf("%f", &s);
  asquare(s);
  psquare(s);
  //rectangle functions
  float l, w;
  printf("\n\033[1;32mPlease enter a rectangle length and width: \n");
  scanf("%f %f", &l, &w);
  arec(l, w);
  prec(l, w);
  //circle functions
  float r;
  printf("\n\033[1;32mPlease enter a circle radius: \n");
  scanf("%f", &r);
  acirc(r);
  ccirc(r);
  //triangle functions
  float a, b, c, h;
  printf("\n\033[1;32mPlease enter a triangle base and height: \n");
  scanf("%f %f", &b, &h);
  atri(b, h);
  printf("\n\033[1;32mPlease enter three triangle side lengths: \n");
  scanf("%f %f %f", &a, &b, &c);
  ptri(a, b, c);
  //parallelogram functions
  //all variables already declared
  printf("\n\033[1;32mPlease enter a parallelogram base and height: \n\033[0m");
  scanf("%f %f", &b, &h);
  apar(b, h);
  printf("\n\033[1;32mPlease enter a parallelogram base and side length: \n\033[0m");
  scanf("%f %f", &b, &a);
  ppar(b, a);

  ///////////////////////////
  // END 2D SHAPE FUNCTIONS//
  ///////////////////////////

  #include "shapes3d.h"
  
  /////////////////////////////
  // START 3D SHAPE FUNCTIONS//
  /////////////////////////////
  
  //get value for s (cube)
  // all variables already declared
  printf("\n\033[1;32mPlease enter a cube side length: \033[0m");
  scanf("%f", &s);
  acube(s);
  vcube(s);
  //get value for l, h, w (prism)
  // all variables already declared
  printf("\n\033[1;32mPlease enter a rectangular prism length, height and width: \033[0m");
  scanf("%f %f %f", &l, &h, &w);
  aprism(l, h, w);
  vprism(l, h, w);
  //get value for r (sphere)
  // r already declared
  printf("\n\033[1;32mPlease enter a sphere radius: \033[0m");
  scanf("%f", &r);
  asphere(r);
  vsphere(r);
  //get value for r, h (cylinder)
  // r & h already declared
  printf("\n\033[1;32mPlease enter a cylinder radius and height: \033[0m");
  scanf("%f %f", &r, &h);
  acyl(r, h);
  vcyl(r, h);
  
  ///////////////////////////
  // END 3D SHAPE FUNCTIONS//
  ///////////////////////////
  return EXIT_SUCCESS;
}
