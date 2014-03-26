#include <stdio.h>
#include "image.h"

int main(){
   char image[HEIGHT][WIDTH][COLORS];
   char lblue[COLORS], white[COLORS], red[COLORS], black[COLORS];

   setColor(lblue, 0, 191, 255);
   setColor(white, 255, 255, 255);
   setColor(red, 255, 0, 0);
   setColor(black, 0, 0, 0);

   blankImage(image, lblue);
   //axes
   putLine(image, 0, 100, 400, 100, white);
   putLine(image, 200, 0, 200, 600, white);
   putLine(image, 100, 90, 100, 110, white);
   putLine(image, 300, 90, 300, 110, white);
   //sin
   putEllipse(image, 200, 125, 100, 25, red);
   putEllipse(image, 200, 125, 99, 24, lblue);
   putRectangle(image, 200, 100, 100, 50, lblue);
   putEllipse(image, 200, 173, 100, 25, red);
   putEllipse(image, 200, 173, 99, 24, lblue);
   putRectangle(image, 100, 150, 100, 49, lblue);
   //cos
   putEllipse(image, 200, 210, 100, 12, black);
   putEllipse(image, 200, 210, 99, 11, lblue);
   putEllipse(image, 200, 245, 100, 24, black);
   putEllipse(image, 200, 245, 99, 23, lblue);
   putEllipse(image, 200, 280, 100, 12, black);
   putEllipse(image, 200, 280, 99, 11, lblue);
   putRectangle(image, 100, 198, 100, 12, lblue);
   putRectangle(image, 200, 198, 100, 24, lblue);
   putRectangle(image, 100, 281, 100, 12, lblue);
   putRectangle(image, 200, 269, 100, 24, lblue);
   putRectangle(image, 100, 223, 100, 45, lblue);
   //axes
   putLine(image, 0, 100, 400, 100, white);
   putLine(image, 200, 0, 200, 600, white);
   putLine(image, 100, 90, 100, 110, white);
   putLine(image, 300, 90, 300, 110, white);
   drawImage(image);

   return 0;
}
