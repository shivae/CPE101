/************************************************************
* CPE 101 Section 9                                         *
* Dr. Campbell                                              *
* Shiva Empranthiri                                         *
* Tests the computing of the log-odds ratio of x and y - z  *
* 1/13/2014                                                 * 
************************************************************/

#include <stdio.h>
#include "functions.h"
#include "checkit.h"

int main(){

   checkit_double(logit(4, 5), 2);
   checkit_double(logit(10, 20), 0);
   checkit_double(logit(5, 7), 1);
   checkit_double(logit(13, 18), 1);
   checkit_double(logit(21, 24), 2.807355);
   checkit_double(logit(12, 13), 3.584963);
   checkit_double(logit(10, 11), 3.321928);
   checkit_double(logit(6, 10), 0);
   checkit_double(logit(4, 8), 0);
   checkit_double(logit(2, 3), 1);

   return 0;
}
