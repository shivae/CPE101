#include <stdio.h>
#include "image.h"

int main(){
   char image[HEIGHT][WIDTH][COLORS];
   char lblue[COLORS], gray[COLORS], black[COLORS], red[COLORS],
        yellow[COLORS], green[COLORS];

   setColor(lblue, 0, 191, 255);
   setColor(gray, 128 ,128, 128);
   setColor(black, 0, 0, 0);
   setColor(red, 255, 0, 0);
   setColor(yellow, 255, 255, 0);
   setColor(green, 0, 255, 0);

   blankImage(image, lblue);

   putRectangle(image, 210, 0, 180, 600, gray);
   putRectangle(image, 15, 0, 3, 600, gray);
   putRectangle(image, 50, 265, 150, 70, black);

   putLine(image, 18, 310, 49, 310, gray);
   putLine(image, 18, 290, 49, 290, gray);

   putCircle(image, 78, 300, 20, red);
   putCircle(image, 123, 300, 20, yellow);
   putCircle(image, 170, 300, 20, green);

   drawImage(image);

   return 0;
} 
