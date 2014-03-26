#include <stdio.h>
#define GREEN 0,128,0
#define WHITE 255,255,255
#define RED 255,0,0
#define BLACK 0,0,0

int main(){
   int y, x;

   printf("P6\n");
   printf("1200 600\n");
   printf("255\n");

   for(y=1;y<=200;y++){
      for(x=1;x<=300;x++){
         printf("%c%c%c", RED);
      }
      for(x=1;x<=900;x++){
         printf("%c%c%c", GREEN);
      }
   }
   for(y=1;y<=200;y++){
      for(x=1;x<=300;x++){
         printf("%c%c%c", RED);
      }
      for(x=1;x<=900;x++){
         printf("%c%c%c", WHITE);
      }
   }
   for(y=1;y<=200;y++){
      for(x=1;x<=300;x++){
         printf("%c%c%c", RED);
      }
      for(x=1;x<=900;x++){
         printf("%c%c%c", BLACK);
      }
   }
   return 0;
}
