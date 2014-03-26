/*********************
* CPE 101 Section 9  *
* Dr. Campbell       *
* Shiva Empranthiri  *
* Tests testCircle   *
* 1/22/2014          *
*********************/

#include "functions.h"
#include "checkit.h"

int main(){
   checkit_int(checkCircle(1, 2, 3, 4, 5), 1);
   checkit_int(checkCircle(1, 1, 1, 1, 2), 0);
   checkit_int(checkCircle(1, 1, 1, 2, 1), 0);
   checkit_int(checkCircle(1, 1, 3, 1, 2), -1);
   checkit_int(checkCircle(1, 1, 3, 2, 1), -1);
   checkit_int(checkCircle(1, 1, 3, 4, 4), 1);
   checkit_int(checkCircle(1, 1, 5, 1, 6), 0);
   return 0;
}   
