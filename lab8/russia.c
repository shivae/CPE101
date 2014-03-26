#include <stdio.h>
#define WHITE 255,255,255
#define BLUE 0,0,255
#define RED 255,0,0

int main(){
   int i, j;
   
   printf("P6\n");
   printf("800 600\n");
   printf("255\n");
   
   for(i=1;i<=800;i++){
      for (j=1;j<=200;j++){
         printf("%c%c%c",WHITE);
      }
   }
   
   for (i=1;i<=800;i++){
      for (j=1;j<=200;j++){
         printf("%c%c%c", BLUE);
      }
   }
   
   for (i=1;i<=800;i++){
      for (j=1;j<=200;j++){
         printf("%c%c%c", RED);
      }
   }

return 0;
}   
   
