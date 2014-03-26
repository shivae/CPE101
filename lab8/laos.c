#include <stdio.h>
#define RED 255,0,0
#define BLUE 0,0,255
#define WHITE 255,255,255

int main(){
   int y, x;

   printf("P6\n");
   printf("600 400\n");
   printf("255\n");

   for(y=1;y<=100;y++){
      for (x=1;x<=600;x++)
      {
         printf("%c%c%c", RED);
      }
   }
   for(y=1;y<=200;y++){
      for (x=1;x<=600;x++)
      {
         if (((x-300)*(x-300))+((y-100)*(y-100))<6400)
         {
            printf("%c%c%c", WHITE);
         }
         else {
            printf("%c%c%c", BLUE);
         }
      }
   }
   for(y=1;y<=100;y++){
      for (x=1;x<=600;x++)
      {
         printf("%c%c%c", RED);
      }
   }
}
