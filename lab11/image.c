#include "image.h"

int getMin(int i, int j){
   if (i <= j){return j;}
   else {return i;}
}

int getMax(int i, int j){
   if (i >= j){return i;}
   else {return j;}
}

float getAngle(int i, int j){
}

void printHeader(int h, int w){
   printf("P6");
   printf("%d %d", w, h);
   printf("255");
}

void setColor(char color[], char r, char g, char b);
   color[0] = r;
   color[1] = g;
   color[2] = b;
}
