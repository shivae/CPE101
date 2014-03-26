#include <stdio.h>
#define WHITE 255,255,255
#define BLUE 0,0,255

int main(){
   int y, x;

   printf("P6\n");
   printf("900 550\n");
   printf("255\n");

   for(y=1;y<=200;y++){
      for(x=1;x<=250;x++){
         printf("%c%c%c", WHITE);
      }
      for(x=1;x<=150;x++){
         printf("%c%c%c", BLUE);
      }
      for(x=1;x<=500;x++){
         printf("%c%c%c", WHITE);
      }
   }
   for(y=1;y<=150;y++){
      for(x=1;x<=900;x++){
         printf("%c%c%c", BLUE);
      }
   }
   for(y=1;y<=200;y++){
      for(x=1;x<=250;x++){
         printf("%c%c%c", WHITE);
      }
      for(x=1;x<=150;x++){
         printf("%c%c%c", BLUE);
      }
      for(x=1;x<=500;x++){
         printf("%c%c%c", WHITE);
      }
   }
   return 0;
}
