#include <stdio.h>
#include <stdlib.h>
#include "basic.h"
#include "checkit.h"

int main(){
   checkit_double(h(g(1,f(1,g(2,1)))), 112.5);
   checkit_double(h(g(-3,f(-3,g(2,-3)))), 1512.5);
   checkit_double(h(g(.15,f(.15,g(2,.15)))), 144.733951);
   checkit_double(h(g(-.23,f(-.23,g(.12,-.23)))), .000184);
   checkit_double(h(g(4,f(4,g(1,4)))), 5512.5);
   checkit_double(h(g(12,f(12,g(6,12)))), 41150592);
   checkit_double(h(g(.01,f(.01,g(1,.01)))), .519994);
   checkit_double(h(g(-2,f(-2,g(1,-2)))), 220.5);
   checkit_double(h(g(-.11,f(-.11,g(.21,-.11)))), 0);
   checkit_double(h(g(1.32,f(1.32,g(.01,1.32)))), 1.223146);

   return 0;
}
