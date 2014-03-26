#include <stdio.h>
#define GREEN 0,128,0
#define YELLOW 255,255,0
#define RED 255,0,0

int main(){
   int y, x;

   printf("P6\n");
   printf("900 600\n");
   printf("255\n");

   for(y=1; y<=600; y++){
      for(x=1; x<=900; x++){
         if(y <= (-x + 600)){
            printf("%c%c%c", GREEN);
         }
         if (y > (-x + 600) && y <= (-x + 900)){
            printf("%c%c%c", YELLOW);
         }
         if (y > (-x + 900)){
            printf("%c%c%c", RED);
         }
      }
   }
   return 0;
}
