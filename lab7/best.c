#include <stdio.h>
#include <stdlib.h>
#include "grove.h"

int main(){
   int i, j, x, y;
   double p, p1;

   p1 = 0;

   for (i = 1; i < 20; i++){
      for (j = 1; j < 20; j++){
         p = fieldProfit(i, j);
         if(p > p1){
            p1 = p;
            x = i;
            y = j;
         }
      }
   }
   printf("Most Profitable Field: %d, %d, Profits: %f\n", x, y, p1);

   p1 = 0;
   
   for(i = 1; i < 20; i++){
      for (j = 1; j < 20; j++){
         p = annualRevenue(i, j);
         if(p > p1){
            p1 = p;
            x = i;
            y = j;
         }
      }
   }
   printf("Best Annual Profit: %d, %d Annual: %f\n", x, y, p1);
  
   p1 = 0;
   
   for(i = 1; i < 20; i++){
      for (j = 1; j < 20; j++){
         p = roi(i, j);
         if(p > p1){
            p1 = p;
            x = i;
            y = j;
         }
      }
   }
   printf("Best Return on Investment: %d, %d Annual: %f\n", x, y, p1);   
     
   return 0; 

                 
}
      
        
