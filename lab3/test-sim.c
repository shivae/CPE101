/********************************
* CPE 101 Section 9             *
* Dr. Campbell                  * 
* Shiva Empranthiri             *
* Tests the computing of the    *
*   cosine similarity between   *
*   two vectors in 3 dimensions *
* 1/13/2014                     *
********************************/

#include <stdio.h>
#include "checkit.h"
#include "functions.h"

int main() {

   checkit_double(sim(1, 2, 3, 4, 5, 6), 0.974632);
   checkit_double(sim(50, 60, 10, 90, 9, 1), 0.709032);
   checkit_double(sim(.123, 1023, .109823, .912, .1, .98978), 0.074256);
   checkit_double(sim(.129381, 959, 902, 638, 123, 142), 0.281088);
   checkit_double(sim(.81919, 912093, 124124, 12, 1, 1231), 0.135643);
   checkit_double(sim(312, 523, 457, 7696, 12412, 765), 0.830024);
   checkit_double(sim(9084, 59540, 2029, 18101, 29110, 1919), 0.919065);
   checkit_double(sim(.34534, .23234, .789656, .1243532, .434534, 12.412), 00.897028);
   checkit_double(sim(.345234, 123643, 57456, 23423, .23423, .123123), 0);
   checkit_double(sim(94309, 19023120, 1928312, 12829, 871, 9128), 0.117342);

   return 0;
}
