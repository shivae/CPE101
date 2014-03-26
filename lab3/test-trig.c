/*********************
* CPE 101 Section 9  *
* Dr. Campbell       *
* Shiva Empranthiri  *
* Trig Tests         *
* 1/13/2014          *
*********************/

#include <stdio.h>
#include "checkit.h"
#include "functions.h"

int main(){

   checkit_double(trig(1, 2, 3), 2.406278);
   checkit_double(trig(100, 20, 5), 2.504740);
   checkit_double(trig(500, 10, 50), -3.055165);
   checkit_double(trig(32.3, 55.2, 12), -3.861082);
   checkit_double(trig(21.2, 412, 11.2), -2.465443);
   checkit_double(trig(11.2, 12412, -1.2), -2.546820);
   checkit_double(trig(-123, -11.2, 1.54), 0.975983);
   checkit_double(trig(-1.23, 1121, 600), -4.095420);
   checkit_double(trig(-1123, 109809, 94), -0.994348);
   checkit_double(trig(.1231, .9706, .12312), -0.419743);

  return 0;
}
