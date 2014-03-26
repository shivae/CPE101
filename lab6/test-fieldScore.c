#include <stdio.h>
#include <stdlib.h>
#include "grove.h"
#include "checkit.h"

int main(){
   checkit_double(fieldScore(1, 1), 38.896425);
   checkit_double(fieldScore(1, 10), 21.448765);
   checkit_double(fieldScore(1, 20), 54.307828);
   checkit_double(fieldScore(4, 10), 11.344801);
   checkit_double(fieldScore(5, 5), 26.111947);
   checkit_double(fieldScore(5, 15), 17.733168);
   checkit_double(fieldScore(10, 10), 0.725332);
   checkit_double(fieldScore(10, 1), 12.176207);
   checkit_double(fieldScore(10, 20), 17.733168);
   checkit_double(fieldScore(15, 5), 17.733168);
   checkit_double(fieldScore(15, 15), 26.111947);
   checkit_double(fieldScore(16,10), 11.344801);
   checkit_double(fieldScore(20, 1), 7.515841);
   checkit_double(fieldScore(20, 15), 14.029092);
   checkit_double(fieldScore(20, 20), 21.936117);

   return 0;
}
