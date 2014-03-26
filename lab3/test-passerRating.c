/***********************************
* CPE 101 Section 9                *
* Dr. Campbell                     *
* Shiva Empranthiri                *
* Tests the computing of the       *
*   college football passer rating *
* 1/13/2014                        *
***********************************/

#include <stdio.h>
#include <math.h>
#include "checkit.h"
#include "functions.h"

int main() {

   checkit_double(passerRating(5100 ,34 ,178 ,12 ,210), 330.761905);
   checkit_double(passerRating(4800, 22, 65, 2, 130), 412.923077);
   checkit_double(passerRating(1200, 13, 25, 12, 50), 289.4);
   checkit_double(passerRating(50, 3, 5, 1, 20), 85.5);
   checkit_double(passerRating(10000, 100, 200, 2, 201), 679.60199);
   checkit_double(passerRating(6000, 65, 100, 12, 170), 467.352941);
   checkit_double(passerRating(2000, 12, 60, 1, 120), 221.333333);
   checkit_double(passerRating(1500, 1, 25, 12, 50), 260.6);
   checkit_double(passerRating(3000, 15, 60, 3, 150), 237);
   checkit_double(passerRating(4000, 35, 170, 15, 250), 236.6);

   return 0;

}
