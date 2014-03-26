#include <stdio.h>
#include "functions.h"

int main(){
   double array1[] = {0,1,2,3,4,5,6,7,8,9};
   double array2[] = {0,1,2,3,4,5,6,7,8,9};
   double array3[10];
   int i = 0;
   sumArray(array1, array2, array3);
   while (i < 10){
      printf("%f\n", array3[i]);
   }
   return 0;
}
