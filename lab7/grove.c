#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "grove.h"

double soilQuality(int x, int y){
   double z;
   int q;
   q = (x+y)%2;  
   if ((q=0)){
      z = (1+sqrt(((x-10)*(x-10))+((y-10)*(y-10))));
   }
   if ((q=1)){
      z = (1+((fabs(x-10)+fabs(y-10))/2));
   }
   if (x > 20 || x < 1 || y > 20 || y < 1){
      return -1;
   }
   else {
   return z;
   }
}

double sunExposure(int x, int y){
   double z;
   z = (10*(exp(-.5*((((x-8)*(x-8))/70)+(((y-12)*(y-12))/70)))));
   if (x > 20 || x < 1 || y > 20 || y < 1){
      return -1;
   }
   else {
   return z;
   }
}

double irrigationExposure(int x, int y){
   double z;
   z = fmin(((10/(1+abs(x-y)))+2),10);
   if (x > 20 || x < 1 || y > 20 || y < 1){
      return -1;
   }
   else {
   return z;
   }
}

double estimateYield(int x, int y){
   double z;
   z = soilQuality(x, y) * sunExposure(x, y) *
       (((7 - fabs(irrigationExposure(x,y)-7))+1)/2);
   if (x > 20 || x < 1 || y > 20 || y < 1){
      return -1;
   }
   else {
   return z;
   }
}

double estimateQuality(int x, int y){
   double z;
   z = soilQuality(x, y)*exp((-.5*((((sunExposure(x, y)-10)*(
       sunExposure(x, y)-10))/40)+(((irrigationExposure(x, y)-6)*
       (irrigationExposure(x, y)-6))/40))));
   if (x > 20 || x < 1 || y > 20 || y < 1){
      return -1;
   }
   else {
   return z;
   }
}

double harvestTime(int x, int y){
   double z;
   z = (60+3*(sqrt((sunExposure(x, y)*(sunExposure(x, y))) + 
       ((irrigationExposure(x, y)*irrigationExposure(x, y))))));
   if (x > 20 || x < 1 || y > 20 || y < 1){
      return -1;
   }
   else {
   return z;
   }
}

double fieldScore(int x, int y){
   double z;
   z = ((estimateYield(x, y)*estimateQuality(x, y))/100)*
       ((365/(harvestTime(x, y))));
   if (x > 20 || x < 1 || y > 20 || y < 1){
      return -1;
   }
   else {
   return z;
   }
}

void outputScores(int x, int y){
   double a, b, c, d, e, f, g;
   a = soilQuality(x, y);
   b = sunExposure(x, y);
   c = irrigationExposure(x, y);
   d = estimateYield(x, y);
   e = estimateQuality(x, y);
   f = harvestTime(x, y);
   g = fieldScore(x, y);
   if (x > 20 || x < 1 || y > 20 || y < 1){
      printf("Field %d, %d is invalid!\n", x, y);
   }
   else {
      printf("------------------------------\n");
      printf("\n");
      printf("Field: %d,%d\n", x, y);
      printf("\n");
      printf("Soil quality: %f\n", a);
      printf("Sun exposure: %f\n", b);
      printf("Irrigation exposure: %f\n", c);
      printf("\n");
      printf("Estimated yield: %f\n", d);
      printf("Estimated quality: %f\n", e);
      printf("Time to harvest: %f\n", f);
      printf("\n");
      printf("Overall score: %f\n", g);
      printf("\n");
      printf("------------------------------\n");
   }
}  

double plantingCost(int x, int y){
   double z;
   z = ((10-(soilQuality(x, y)/2))*
       ((sunExposure(x, y)+irrigationExposure(x, y))/2));
   if (x > 20 || x < 1 || y > 20 || y < 1){
      return -1;
   }
   else {
   return z;
   }
}

double pricePerUnit(int x, int y){
   double z, r;
   z = estimateQuality(x, y);
   if (z < 2){
      r = 0.5;
   }
   if (2 < z && z < 4){
      r = 0.75;
   }
   if (4 <= z && z < 5){
      r = 1;
   }
   if (5 <= z && z < 6){
      r = 2;
   }
   if (z > 6){
      r = z/2;
   }
   if (x > 20 || x < 1 || y > 20 || y < 1){
      return -1;
   }
   else {
   return r;
   }
}

double revenue(int x, int y){
   double z;
   z = (pricePerUnit(x, y)*estimateYield(x, y));
   if (x > 20 || x < 1 || y > 20 || y < 1){
      return -1;
   }
   else {
   return z;
   }
}

double fieldProfit(int x, int y){
   double z;
   z = (revenue(x, y) - plantingCost(x, y));
   if (x > 20 || x < 1 || y > 20 || y < 1){
      return -1;
   }
   else {
   return z;
   }
}

double roi(int x, int y){
   double z;
   z = ((fieldProfit(x, y)/plantingCost(x, y))*100);
   if (x > 20 || x < 1 || y > 20 || y < 1){
      return -1;
   }
   else {
   return z;
   }
}

double annualRevenue(int x, int y){
   double z;
   z = (revenue(x, y)*(365/harvestTime(x, y)));
   if (x > 20 || x < 1 || y > 20 || y < 1){
      return -1;
   }
   else {
   return z;
   }
}

double compareProfits(int x1, int y1, int x2, int y2){
   double z1, z2;
   if (x1>20||y1>20||x2>20||y2>20||x1<1||y1<1||x2<1||y2<1){
      printf("Invalid Input!");
      return -1;
   }
   else {
      z1 = fieldProfit(x1, y1);
      z2 = fieldProfit(x2, y2);
      if (z1 > z2){
         return z1;
      }
      else {
         return z2;
      }
   }
}

double compareAnnual(int x1, int y1, int x2, int y2){
   double z1, z2;
   int aArray[2];
   if (x1>20||y1>20||x2>20||y2>20||x1<1||y1<1||x2<1||y2<1){
      printf("Invalid Input!");
      return -1;
   }
   else {
      z1 = annualRevenue(x1, y1);
      z2 = annualRevenue(x2, y2);
      if (z1 > z2){
         aArray[0] = x1;
         aArray[1] = y1;
         return z1;
      }
      if (z2 > z1){
         aArray[0] = x2;
         aArray[1] = y2;
         return z2;
      }
      else {
         return -1;
      }
   }
}

double betterInvestment(int x1, int y1, int x2, int y2){
   double z1, z2;
   int iArray[2];
   if (x1>20||y1>20||x2>20||y2>20||x1<1||y1<1||x2<1||y2<1){
      printf("Invalid Input!");
      return -1;
   }
   else {
      z1 = fieldProfit(x1, y1);
      z2 = fieldProfit(x2, y2);
      if (z1 > z2){
         iArray[0] = x1;
         iArray[1] = y1;
         return z1;
      }
      if (z2 > z1){
         iArray[0] = x2;
         iArray[1] = y2;
         return z2;
      }
      else {
         return -1;
      }
   }
}
