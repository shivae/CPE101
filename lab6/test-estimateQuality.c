#include <stdio.h>
#include <stdlib.h>
#include "grove.h"
#include "checkit.h"

int main(){
   checkit_double(estimateQuality(1, 1), 6.74676);
   checkit_double(estimateQuality(1, 10), 4.914785);
   checkit_double(estimateQuality(1, 20), 8.596673);
   checkit_double(estimateQuality(4, 10), 3.574389);
   checkit_double(estimateQuality(5, 5), 4.912385);
   checkit_double(estimateQuality(5, 15), 4.912385);
   checkit_double(estimateQuality(10, 10), 0.818731);
   checkit_double(estimateQuality(10, 1), 4.050035);
   checkit_double(estimateQuality(10, 20), 4.912385);
   checkit_double(estimateQuality(15, 5), 4.912385);
   checkit_double(estimateQuality(15, 15), 4.912385);
   checkit_double(estimateQuality(16,10), 3.574389);
   checkit_double(estimateQuality(20, 1), 4.042918);
   checkit_double(estimateQuality(20, 15), 4.609391);
   checkit_double(estimateQuality(20, 20), 5.465331);

   return 0;
}
