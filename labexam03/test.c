#include "quiz3.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
   //float mArea = 5;
   int nCircles = 2;
   Circle inputCircles[nCircles];
   Circle oCircles[nCircles];

   inputCircles[0].theCenter.x = 1;
   inputCircles[0].theCenter.y = 2;
   inputCircles[0].radius = 1;
   inputCircles[1].theCenter.x = 5;
   inputCircles[1].theCenter.y = 6;
   inputCircles[1].radius = 3;

   checkCircle(5, nCircles, inputCircles, oCircles);

   printf("%f %f", inputCircles[0].radius, inputCircles[1].radius);

   return 0;
}
