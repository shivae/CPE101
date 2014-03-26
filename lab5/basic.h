#include <stdio.h>
#include <stdlib.h>

double f(double x,double y);
double g(double x,double y);
double h(double x);

double f(double x,double y){
   x = x + y;
   return x;
}

double g(double x,double y){
   x = ((x * x) - (y * y));
   return x;
}

double h(double x){
   x = ((x * x) - ((x * x)/2));
   return x;
}
