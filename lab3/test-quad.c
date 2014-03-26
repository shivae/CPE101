/********************
* CPE 101 Section 9 *
* Dr. Campbell      *
* Shiva Empranthiri *
* Quad Tests        *
* 1/13/2014         *
********************/

#include <stdio.h>
#include <math.h>
#include "checkit.h"
#include "functions.h"

int main() {

   checkit_double(quad(10.0), 3024);
   checkit_double(quad(9.0), 1680);
   checkit_double(quad(25.3), 268934.5881);
   checkit_double(quad(-41.2), 3642142.233600);
   checkit_double(quad(100.0), 90345024);
   checkit_double(quad(54.32), 7204189.967094);
   checkit_double(quad(4.36), 3.882334);
   checkit_double(quad(6.7), 267.63205);
   checkit_double(quad(9.9), 2862.320100);
   checkit_double(quad( -5.1), 3192.380100); 

   return 0;

}

