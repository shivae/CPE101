#include <stdio.h>
#define RED 255,0,0
#define WHITE 255,255,255

int main(){
   int y, x;

   printf("P6\n");
   printf("600 400\n");
   printf("255\n");

   for(y=1;y<=200;y++){
      for (x=1;x<=600;x++)
      {
         if (((x-200)*(x-200))+((y-200)*(y-200))<15625)
         {
            printf("%c%c%c", RED);
         }
         else {
            printf("%c%c%c", WHITE);
         }
      }
   }
   for(y=1;y<=200;y++){
      for (x=1;x<=600;x++)
      {
         if (((x-200)*(x-200))+((y*y))<15625)
         {
            printf("%c%c%c", WHITE);
         }
         else {
            printf("%c%c%c", RED);
         }
      }
   }
   return 0;
}
