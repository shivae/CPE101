#include <stdio.h>
#include <stdlib.h>
#include "grove.h"
#include "checkit.h"

int main(){
   checkit_double(estimateYield(1, 1), 151.632665);
   checkit_double(estimateYield(1, 10), 110);
   checkit_double(estimateYield(1, 20), 157.5);
   checkit_double(estimateYield(4, 10), 80);
   checkit_double(estimateYield(5, 5), 150);
   checkit_double(estimateYield(5, 15), 90);
   checkit_double(estimateYield(10, 10), 25);
   checkit_double(estimateYield(10, 1), 66.718373);
   checkit_double(estimateYield(10, 20), 90);
   checkit_double(estimateYield(15, 5), 90);
   checkit_double(estimateYield(15, 15), 150);
   checkit_double(estimateYield(16,10), 80);
   checkit_double(estimateYield(20, 1), 35.143);
   checkit_double(estimateYield(20, 15), 62.539505);
   checkit_double(estimateYield(20, 20), 101.166846);

   return 0;
}

