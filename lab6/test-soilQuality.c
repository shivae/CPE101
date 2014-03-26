#include <stdio.h>
#include <stdlib.h>
#include "grove.h"
#include "checkit.h"

int main(){
   checkit_double(soilQuality(1, 1), 10);
   checkit_double(soilQuality(1, 10), 5.5);
   checkit_double(soilQuality(1, 20), 10.5);
   checkit_double(soilQuality(4, 10), 4);
   checkit_double(soilQuality(5, 5), 6);
   checkit_double(soilQuality(5, 15), 6);
   checkit_double(soilQuality(10, 10), 1);
   checkit_double(soilQuality(10, 1), 5.5);
   checkit_double(soilQuality(10, 20), 6);
   checkit_double(soilQuality(15, 5), 6);
   checkit_double(soilQuality(15, 15), 6);
   checkit_double(soilQuality(16,10), 4);
   checkit_double(soilQuality(20, 1), 10.5);
   checkit_double(soilQuality(20, 15), 8.5);
   checkit_double(soilQuality(20, 20), 11);

   return 0;
}
