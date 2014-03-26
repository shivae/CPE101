#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void convertTime(int seconds);
void stats(double a, double b, double c, double d);
void encode3letters(char c1, char c2, char c3);

void convertTime(int seconds){
   int days, hours, minutes;
   days = (seconds / 86400);
   hours = ((seconds / 3600) - (24 * days));
   minutes = ((seconds / 60) - (1440 * days) - (60 * hours));
   seconds = ((seconds) - (86400 * days) - (3600 * hours) - (60 * minutes));
   
   printf("%d days, %d hours, %d minutes, %d seconds\n", days, hours, minutes, seconds);
}
   
void stats(double a, double b, double c, double d){
   double AV, STDEV;
   AV = ((a + b + c + d) / 4.0);
   STDEV = (sqrt(.25*(((a-AV)*(a-AV))+((b-AV)*(b-AV))+((c-AV)*(c-AV))
            +((d-AV)*(d-AV)))));

   printf("Average = %f\n", AV);
   printf("Standard Deviation = %f\n", STDEV);
}

void encode3letters(char c1, char c2, char c3){
   char c11, c21, c31;    
   switch (c1){
      case 'w': {c11 = c1 - 26 + 4; break;}
      case 'x': {c11 = c1 - 26 + 4; break;}
      case 'y': {c11 = c1 - 26 + 4; break;}
      case 'z': {c11 = c1 - 26 + 4; break;}
      default: {c11 = c1 + 4; break;}
      }
   switch (c2){
      case 'i': {c21 = (c2 + 16) - 26; break;}
      case 'j': {c21 = (c2 + 16) - 26; break;}
      case 'k': {c21 = (c2 + 16) - 26; break;}
      case 'l': {c21 = (c2 + 16) - 26; break;}
      case 'n': {c21 = (c2 + 16) - 26; break;}
      case 'm': {c21 = (c2 + 16) - 26; break;}
      case 'o': {c21 = (c2 + 16) - 26; break;}
      case 'p': {c21 = (c2 + 16) - 26; break;}
      case 'q': {c21 = (c2 + 16) - 26; break;}
      case 'r': {c21 = (c2 + 16) - 26; break;}
      case 's': {c21 = (c2 + 16) - 26; break;}
      case 't': {c21 = (c2 + 16) - 26; break;}
      case 'u': {c21 = (c2 + 16) - 26; break;}
      case 'v': {c21 = (c2 + 16) - 26; break;}
      case 'w': {c21 = (c2 + 16) - 26; break;}
      case 'x': {c21 = (c2 + 16) - 26; break;}
      case 'y': {c21 = (c2 + 16) - 26; break;}
      case 'z': {c21 = (c2 + 16) - 26; break;}
      default: {c21 = c2 + 16; break;}
   }
   if (c1 < 110){
      c31 = c3 + (c1 - 97);
   }
   if (c1 > 110){
      c31 = c3 + (c1 - 97) - 26;
   }
      printf("%c%c%c --> %c%c%c\n", c1,c2,c3,c11,c21,c31);
 }
