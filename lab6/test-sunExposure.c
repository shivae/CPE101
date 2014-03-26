#include <stdio.h>
#include <stdlib.h>
#include "grove.h"
#include "checkit.h"

int main(){
   checkit_double(sunExposure(1, 1), 6.065307);
   checkit_double(sunExposure(1, 10), 10);
   checkit_double(sunExposure(1, 20), 10);
   checkit_double(sunExposure(4, 10), 10);
   checkit_double(sunExposure(5, 5), 10);
   checkit_double(sunExposure(5, 15), 10);
   checkit_double(sunExposure(10, 10), 10);
   checkit_double(sunExposure(10, 1), 6.065307);
   checkit_double(sunExposure(10, 20), 10);
   checkit_double(sunExposure(15, 5), 10);
   checkit_double(sunExposure(15, 15), 10);
   checkit_double(sunExposure(16,10), 10);
   checkit_double(sunExposure(20, 1), 2.231302);
   checkit_double(sunExposure(20, 15), 3.678794);
   checkit_double(sunExposure(20, 20), 3.678794);

   return 0;
}
