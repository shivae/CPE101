nclude <stdio.h>
#define WHITE 255,255,255
#define BLUE 0,0,255

int main(){
   int y, x;

   printf("P6\n");
   printf("500 300\n");
   printf("255\n");

   for(y=1; y<=300; y++){
      for(x=1; x<=500; x++){
         if((y >=((.6*x)-30) && (y <= ((.6*x)+30))) ||
           (y>=((.6*(-x))+270) && y <=((.6*(-x))+330))){
            printf("%c%c%c", WHITE);
         }
         else {
            printf("%c%c%c", BLUE);
         }
      }
   }
   return 0;
}i
