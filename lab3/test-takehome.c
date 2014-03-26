/******************************************
* CPE 101 Section 9                       *
* Dr. Campbell                            *
* Shiva Empranthiri                       *
* Tests a simplified takehome pay formula *
* 1/13/2014                               *
******************************************/

#include <stdio.h>
#include "checkit.h"
#include "functions.h"

int main(){

   checkit_double(takehome(20, 50, 1), 19);
   checkit_double(takehome(100, 60, 1), 99);
   checkit_double(takehome(1000, 200, 500), -500);
   checkit_double(takehome(6000, 100, 50), 0);
   checkit_double(takehome(5000000, 2222, 150), -104996850);
   checkit_double(takehome(6124, 5648, 1231), -269115);
   checkit_double(takehome(552187, 940385, 10293), -799920092);
   checkit_double(takehome(309459, 123456, 124241), -228373794);
   checkit_double(takehome(1293084, 1231231, 1242543), -622210251);
   checkit_double(takehome(123657, 1209187, 120795), -34601580);

   return 0;
}
