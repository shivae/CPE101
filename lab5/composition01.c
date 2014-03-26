#include <stdio.h>
#include <stdlib.h>
#include "basic.h"
#include "checkit.h"

int main(){
   checkit_double(f(g(1,2),h(2)), -1);
   checkit_double(f(g(5,4),h(4)), 17);
   checkit_double(f(g(-1,2),h(2)), -1);
   checkit_double(f(g(-1,-2),h(-2)), -1);
   checkit_double(f(g(3,6),h(6)), -9);
   checkit_double(f(g(5,4),h(4)), 17);
   checkit_double(f(g(.1,.2),h(.2)), -.01);
   checkit_double(f(g(.01,1.1),h(1.1)), -.6049);
   checkit_double(f(g(13,1),h(1)), 168.5);
   checkit_double(f(g(12,4),h(4)), 136);

   return 0;
}
