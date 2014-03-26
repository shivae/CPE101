#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1415926545

typedef struct { int x;
                 int y;}center;

typedef struct { center theCenter;
                 double radius; }Circle;

void checkCircle(float maxArea, int numCircles, Circle inputCircles[], Circle outputCircles[]);

void checkCircle(float maxArea, int numCircles, Circle inputCircles[], Circle outputCircles[]){
   int i;
   float area;

   for (i = 0; i < numCircles; i++){
      area = PI * inputCircles[i].radius * inputCircles[i].radius;
      if (area < maxArea){
         outputCircles[i].theCenter = inputCircles[i].theCenter;
         outputCircles[i].radius = inputCircles[i].radius;
      }
      else {
         outputCircles[i].radius = -1;
      }
   }
   return; 
}
