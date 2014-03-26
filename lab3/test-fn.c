/********************
* CPE 101 Section 9 *
* Dr. Campbell      *
* Shiva Empranthiri *
* Fn Tests          *
* 1/13/2014         *
********************/

#include <stdio.h>
#include <math.h>
#include "checkit.h"
#include "functions.h"

int main(){

   checkit_int(fn(1, 2, 3), 1);
   checkit_int(fn(5, 7, 9), -4);
   checkit_int(fn(150, 200, 401), -29849);
   checkit_int(fn(5000, 3000, 2000), 15021585);
   checkit_int(fn(120, 400, 30), 44413);
   checkit_int(fn(50, 23, 150), -6035);
   checkit_int(fn(40, 12, 1), 484);
   checkit_int(fn(500, 130, 65), 32756);
   checkit_int(fn(20, 30, 40), -174);
   checkit_int(fn(700, 450, 150), 210237);

   return 0;
}
