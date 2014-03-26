#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define WIDTH 400
#define HEIGHT 300
#define COLORS 3
#define PI 3.14159
#define EPSILON .00001

int main(){
   unsigned char image[WIDTH][HEIGHT][COLORS];
   int i, j;
   float a, x;

   a = (3.0)/(10.0*PI);
   x = 10.0 * PI;
   
   printf("P6\n");
   printf("400 300\n");
   printf("255\n");

   for (j = 0; j < 300; j++){
      for (i = 0; i < 400; i++){
         image[i][j][0] = 151;
         image[i][j][1] = 255;
         image[i][j][2] = 255;
      }
   }

   for (j = 149; j < 150; j++){
      for (i = 0; i < 400; i++){
         image[i][j][0] = 47;
         image[i][j][1] = 47;
         image[i][j][2] = 79;
      }
   }

   for (j = 0; j < 300; j++){
      for (i = 49; i < 50; i++){
         image[i][j][0] = 47;
         image[i][j][1] = 47;
         image[i][j][2] = 79;
      }
   }

   for (j = 0; j < 300; j++){
      for (i = 49; i < 400; i++){
         if (abs(j - (60 * sin(i * PI/35.0 + 30) + 95)) < EPSILON){
            image[i][j+50][0] = 0;
            image[i][j+50][1] = 0;
            image[i][j+50][2] = 0;
         }
      }
   }

   for (j = 0; j < 300; j++){
      for (i = 49; i < 400; i++){
         if (abs(j - (60 * cos(i * PI/35.0 +30) + 95)) < EPSILON){
            image[i][j+50][0] = 205;
            image[i][j+50][1] = 186;
            image[i][j+50][2] = 150;
         }
      }
   }
   
   for (j = 0; j < 300; j++){
      for (i = 49; i < 400; i++){
         if (abs(j - (75*exp(-3.0/(10.0*PI)*(i*PI/35.0))*sin((i+3)*PI/35.0) + 75)) < EPSILON){
            image[i][j+75][0] = 255;
            image[i][j+75][1] = 0;
            image[i][j+75][2] = 0;
         }
      }
   }

   for (j = 0; j < 300; j++){
      for (i = 0; i < 400; i++){
         printf("%c%c%c", image[i][j][0], image[i][j][1], image[i][j][2]);
      }
   }
   return 0;
}
