#include <stdio.h>
#include <stdlib.h>
#include "basic.h"
#include "checkit.h"

int main(){
   checkit_double(f(1,2), 3);
   checkit_double(f(-3,2), -1);
   checkit_double(f(-2,-2), -4);
   checkit_double(f(2,-3), -1);
   checkit_double(f(55,25), 80);  
   
   checkit_double(g(2,1), 3);
   checkit_double(g(-2,-1), 3);
   checkit_double(g(-5,2), 21);
   checkit_double(g(3,-2), 5);
   checkit_double(g(4,3), 7);
   
   checkit_double(h(4), 8);
   checkit_double(h(-4), 8);
   checkit_double(h(3), 4.5);
   checkit_double(h(5), 12.5);
   checkit_double(h(10), 50);

   return 0;
} 
