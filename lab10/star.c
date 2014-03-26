#include <stdio.h>
#include "image.h"

int main(){
   char image[HEIGHT][WIDTH][COLORS];
   char white[COLORS], red[COLORS];
   
   setColor(white, 255, 255, 255);
   setColor(red, 255, 0, 0);

   blankImage(image, white);

   putLine(image, 100, 300, 300, 400, red);
   putLine(image, 300, 400, 200, 150, red);
   putLine(image, 200, 150, 200, 450, red);
   putLine(image, 200, 450, 300, 200, red);
   putLine(image, 300, 200, 100, 300, red);

   drawImage(image);
   
   return 0;
}
