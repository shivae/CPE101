/**********************
* CPE 101 Section 9   *
* Dr. Campbell        *
* Shiva Empranthiri   *
* List of Functions   *
* 1/22/2014           *
**********************/

#include <stdio.h>
#include <math.h>
#define EPSILON .00001

int checkCircle(float x1, float y1, float r, float x2, float y2);
int onOrOff(int wager, int on_off, int roll1, int roll2);

int checkCircle(float x1, float y1, float r, float x2, float y2){
   int a = (((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));

   if (a > (r * r)){
      return 1;
   }
   if (a < (r * r)){
      return -1;
   }
   if ((a == (r * r))){
      if (a < EPSILON){
      return 0;
      }
   }

   return 0;
}

int onOrOff(int wager, int on_off, int roll1, int roll2){
   int sum = roll1 + roll2;
   double results = 0;

   if ((sum == 2 || sum == 3 || sum == 12) && (on_off == 0)){
      results = wager + (wager * -1);
   }
   if ((sum == 2 || sum == 3 || sum == 12) && (on_off == 1)){
      results = wager + (wager * 0);
   }
   if ((sum == 4 || sum == 5 || sum == 6 || sum == 8 || sum == 9 || sum == 10) 
        && (on_off == 0)){
      results = wager + (wager * 0);
   }
   if ((sum == 4 || sum == 10) && (on_off == 1)){
      results = wager + (wager * 2);
   }
   if ((sum == 5 || sum == 9) && (on_off == 1)){
      results = wager + (wager * 1.5);
   }
   if ((sum == 6 || sum == 8) && (on_off == 1)){
      results = wager + (wager * 1.2);
   }
   if ((sum == 7 || sum == 11) && (on_off == 0)){
      results = wager + wager;
   }
   if ((sum == 7) && (on_off == 1)){
      results = wager + (wager * -1);
   }
   if ((sum == 11) && (on_off == 1)){
      results = wager + wager;
   }
   
   printf("wager = %d, On/Off = %d, Roll1 = %d, Roll2 = %d, results = %.0f;\n",
           wager, on_off, roll1, roll2, results);
  
   return 0;
}
