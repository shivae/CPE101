#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int roll();
int scoring();

int roll(){
   int x;
   x = ((((rand()) % 6) + 1) + (((rand()) % 6) + 1));
   return x;
}

int scoring() {
   int x;
   x = roll();
   if (x == 7){
      printf("BONUS!");
   }
   else {
      printf("%d BUSTED!", x);
   }
   return 0;
}
