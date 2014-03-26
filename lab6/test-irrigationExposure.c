#include <stdio.h>
#include <stdlib.h>
#include "grove.h"
#include "checkit.h"

int main(){
   checkit_double(irrigationExposure(1, 1), 10);
   checkit_double(irrigationExposure(1, 10), 3);
   checkit_double(irrigationExposure(1, 20), 2);
   checkit_double(irrigationExposure(4, 10), 3);
   checkit_double(irrigationExposure(5, 5), 10);
   checkit_double(irrigationExposure(5, 15), 2);
   checkit_double(irrigationExposure(10, 10), 10);
   checkit_double(irrigationExposure(10, 1), 3);
   checkit_double(irrigationExposure(10, 20), 2);
   checkit_double(irrigationExposure(15, 5), 2);
   checkit_double(irrigationExposure(15, 15), 10);
   checkit_double(irrigationExposure(16,10), 3);
   checkit_double(irrigationExposure(20, 1), 2);
   checkit_double(irrigationExposure(20, 15), 3);
   checkit_double(irrigationExposure(20, 20), 10);

   return 0;
}
