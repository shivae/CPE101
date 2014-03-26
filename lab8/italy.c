#include <stdio.h>
#define GREEN 0,128,0
#define WHITE 255,255,255
#define RED 255,0,0

int main(){
   int y, x;

   printf("P6\n");
   printf("600 400\n");
   printf("255\n");
 
   for (y=1;y<400;y++){
      for (x=1;x<=200;x++){
         printf("%c%c%c", GREEN);
      }
      for (x=1;x<=200;x++){
         printf("%c%c%c", WHITE);
      }
      for (x=1;x<=200;x++){
         printf("%c%c%c", RED);
      }            
   }
   return 0;            
}
