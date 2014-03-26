#include <stdio.h>
#define WIDTH 700
#define HEIGHT 700
#define COLORS 3

int main(){
   unsigned char image[WIDTH][HEIGHT][COLORS];
   int x, y;

   printf("P6\n");
   printf("700 700\n");
   printf("255\n");

   for (y = 0; y < 700; y++){
      for (x = 0; x < 700; x++){
         image[x][y][0] = 85;
         image[x][y][1] = 26;
         image[x][y][2] = 139;
      }
   }

   for (y = 49; y < 650; y++){
      for (x = 49; x < 650; x++){
         image[x][y][0] = 0;
         image[x][y][1] = 0;
         image[x][y][2] = 255;
      }
   }

   for (y = 99; y < 600; y++){
      for (x = 99; x < 600; x++){
         image[x][y][0] = 0;
         image[x][y][1] = 178;
         image[x][y][2] = 255;
      }
   }

   for (y = 149; y < 550; y++){
      for (x = 149; x < 550; x++){
         image[x][y][0] = 0;
         image[x][y][1] = 255;
         image[x][y][2] = 0;
      }
   }

   for (y = 199; y < 500; y++){
      for (x = 199; x < 500; x++){
         image[x][y][0] = 255;
         image[x][y][1] = 255;
         image[x][y][2] = 0;
      }
   }

   for (y = 249; y < 450; y++){
      for (x = 249; x < 450; x++){
         image[x][y][0] = 255;
         image[x][y][1] = 128;
         image[x][y][2] = 0;
      }
   }

   for (y = 299; y < 400; y++){
      for (x = 299; x < 400; x++){
         image[x][y][0] = 255;
         image[x][y][1] = 0;
         image[x][y][2] = 0;
      }
   }

   for (y = 0; y < WIDTH; y++){
      for (x = 0; x < HEIGHT; x++){
         printf("%c%c%c", image[x][y][0], image[x][y][1], image[x][y][2]);
      }
   }
   return 0;
}           
