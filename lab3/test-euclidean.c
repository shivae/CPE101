/**************************************************************************
* CPE 101 Section 9                                                       *
* Dr. Campbell                                                            *
* Shiva Empranthiri                                                       *
* Tests the computing of the Euclidean distance between two points in 2D  *
* 1/13/2014                                                               *
**************************************************************************/

#include <stdio.h>
#include <math.h>
#include "checkit.h"
#include "functions.h"

int main(){

   checkit_double(euclidean(1.0, 2.0, 3.0, 4.0), 2.828427);
   checkit_double(euclidean(2, 3, 4, 5), 2.828427);
   checkit_double(euclidean(5, 50, 23, 45), 18.681452);
   checkit_double(euclidean(23, 78, 90, 500), 427.285619);
   checkit_double(euclidean(-50, -80, 50, 70), 180.277564);
   checkit_double(euclidean(100, 200, 500, 1000), 894.427191);
   checkit_double(euclidean(500, 10, 20, 1), 480.084368);
   checkit_double(euclidean(100, 20, 10, 5), 91.241438);
   checkit_double(euclidean(70, 19, 10, 2), 62.361847);
   checkit_double(euclidean(90, 2, 50, 1), 40.012498);

   return 0;
}
