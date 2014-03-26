/***************************
* CPE 101 Section 9        *
* Dr. Campbell             *
* Shiva Empranthiri        *
* Tests the computing of   *
*   the Manhattan distance *
*   between two points     *  
* 1/13/2014                *
***************************/

#include <stdio.h>
#include "functions.h"
#include "checkit.h"

int main() {

   checkit_double(manhattan(2, 3, 4, 5), 4);
   checkit_double(manhattan(1.1, 12.2, -123, 1), 135.3);
   checkit_double(manhattan(25, -1.231, -543, 12), 581.231);
   checkit_double(manhattan(.121, .5323, -.012, -9), 9.6653);
   checkit_double(manhattan(-.091, 12312, 90, 12), 12390.091);
   checkit_double(manhattan(.91, 912, 901, 123), 1689.09);
   checkit_double(manhattan(21, 22, 23, 24), 4);
   checkit_double(manhattan(9291, 91312, 12, 24), 100567);
   checkit_double(manhattan(910, 1231, 4323, 12), 4632);
   checkit_double(manhattan(98128, 123, 543, 123), 97585);

  return 0;

}
