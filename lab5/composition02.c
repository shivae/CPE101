#include <stdio.h>
#include <stdlib.h>
#include "basic.h"
#include "checkit.h"

int main(){
   checkit_double(g(1,f(h(1),1)), -1.25);
   checkit_double(g(-1,f(h(-1),-1)), .75);
   checkit_double(g(20,f(h(20),20)), -48000);
   checkit_double(g(.11,f(h(.11),.11)), -.001368);
   checkit_double(g(-.11,f(h(-.11),-.11)), .001294);
   checkit_double(g(1.25,f(h(1.25),1.25)), -2.563477);
   checkit_double(g(-21,f(h(-21),-21)), -39359.25);
   checkit_double(g(.01,f(h(.01),.01)), 0);
   checkit_double(g(-.001,f(h(-.001),-.001)), 0);
   checkit_double(g(16,f(h(100),100)), -26009744);

   return 0;
} 
