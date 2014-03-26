#include <stdio.h>
#include <stdlib.h>
#include "grove.h"
#include "checkit.h"

int main(){
   checkit_double(harvestTime(1, 1), 96);
   checkit_double(harvestTime(1, 10), 92);
   checkit_double(harvestTime(1, 20), 91);
   checkit_double(harvestTime(4, 10), 92);
   checkit_double(harvestTime(5, 5), 103);
   checkit_double(harvestTime(5, 15), 91);
   checkit_double(harvestTime(10, 10), 103);
   checkit_double(harvestTime(10, 1), 81);
   checkit_double(harvestTime(10, 20), 91);
   checkit_double(harvestTime(15, 5), 91);
   checkit_double(harvestTime(15, 15), 103);
   checkit_double(harvestTime(16,10), 92);
   checkit_double(harvestTime(20, 1), 69);
   checkit_double(harvestTime(20, 15), 75);
   checkit_double(harvestTime(20, 20), 92);

   return 0;
}
