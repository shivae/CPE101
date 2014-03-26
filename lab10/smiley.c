#include <stdio.h>
#include "image.h"

int main(){
   char image[HEIGHT][WIDTH][COLORS];
   char white[COLORS], yellow[COLORS], black[COLORS];

   setColor(white, 255, 255, 255);
   setColor(yellow, 255, 255, 0);
   setColor(black, 0, 0, 0);

   blankImage(image, white);
   
   putCircle(image, 200, 300, 100, black);
   putCircle(image, 200, 300, 98, yellow);
  
   putEllipse(image, 168, 255, 20, 10, black);
   putEllipse(image, 168, 345, 20, 10, black);

   putArc(image, 230, 300, 40, 35, 0, 180, black);

   drawImage(image);
   return 0;
}
