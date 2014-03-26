/**********************
* CPE 101 Section 9   *
* Dr. Campbell        *
* Shiva Empranthiri   *
* List of Functions   *
* 1/13/2014           *
**********************/

#include <stdio.h>
#include <math.h>

double logBase (double x, double y);
double quad (double x);
double euclidean (double x1, double y1, double x2, double y2);
double sim (double x1, double y1, double z1, double x2, double y2, double z2);
double trig (double x, double y, double z);
double manhattan (double x1, double y1, double x2, double y2);
double logit (int x, int y);
double passerRating (int yards, int tds, int comps, int ints, int atts);
int fn (int x, int y, int z);
double takehome (int salary, int taxRate, int health);

double logBase (double x, double y){
   y = ((log(x)) / (log (y)));
   return y;
}

double quad (double x){
   x = ((x-1) * (x-2) * (x-3) * (x-4));
   return x;
}

double euclidean (double x1, double y1, double x2, double y2){
   x1 = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
   return x1;
}

double sim (double x1, double y1, double z1, double x2, double y2, double z2){
   x1 = (((x1 * x2) + (y1 * y2) + (z1 * z2)) / (sqrt((x1 * x1) + (y1 * y1) +
     (z1 * z1)) * (sqrt((x2 * x2) + (y2 * y2) + (z2 * z2)))));
   return x1;
} 

double trig (double x, double y, double z){
   x = ((sin(x * y) + (2 * (cos(y * z))) - (3 * (sin(z / x)))));
   return x;
}

double manhattan (double x1, double y1, double x2, double y2){
   x1 = (fabs(x1 - x2) + fabs(y1 - y2));
   return x1;
}

double logit (int x, int y){
   double z;
   z = (log2((x) / (y - x)));
   return z;
}

double passerRating (int yards, int tds, int comps, int ints, int atts){
   double z;
   z = (((8.4 * yards) + (330 * tds) + (100 * comps) - (200 * ints) )/ (atts));
   return z;
} 

int fn (int x, int y, int z){
   x = ((x * y) + (x / z) + ((z + 1) / (x + y)) - ((x * y * z)/(y + 1)));
   return x;
} 

double takehome (int salary, int taxRate, int health){
   double total;
   total = ((salary - health) * (1 - (taxRate / 100)));
   return total;
}
