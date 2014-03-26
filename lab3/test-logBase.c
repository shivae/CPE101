/******************************************************
* CPE 101 Section 9                                   *
* Dr. Campbell                                        *
* Shiva Empranthiri                                   *
* Tests the computing of the                          *
*   log of the 1st value w/ the base of the 2nd value *
* 1/13/2014                                           *
******************************************************/

#include <stdio.h>
#include "checkit.h"
#include "functions.h"

int main(){

   checkit_double(logBase(2, 3), .630930);
   checkit_double(logBase(50, 60), .955470);
   checkit_double(logBase(5.12, .90), -15.500631);
   checkit_double(logBase(20, 5), 1.861353);
   checkit_double(logBase(20.9, 150), .606659);
   checkit_double(logBase(500, 12), 2.500942);
   checkit_double(logBase(142, 250), 0.897557);
   checkit_double(logBase(92083, 234), 2.095284);
   checkit_double(logBase(123, 121), 1.003418);
   checkit_double(logBase(110, 50), 1.201547);

   return 0;
}
