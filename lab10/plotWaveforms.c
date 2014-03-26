#include <stdio.h>
#include "image.h"

int main(){
   char image[HEIGHT][WIDTH][COLORS];
   char lblue[COLORS], white[COLORS], red[COLORS], black[COLORS], green[COLORS];

   setColor(lblue, 0, 191, 255);
   setColor(white, 255, 255, 255);
   setColor(red, 255, 0, 0);
   setColor(black, 0, 0, 0);
   setColor(green, 0, 0, 255);

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
   //exp
   putEllipse(image, 200, 319, 100, 25, green);
   putEllipse(image, 200, 319, 99, 24, lblue);
   putRectangle(image, 100, 294, 200, 25, lblue);
   putRectangle(image, 200, 319, 100, 25, lblue); 
   putEllipse(image, 200, 367, 50, 25, green);
   putEllipse(image, 200, 367, 49, 24, lblue);
   putRectangle(image, 150, 344, 50, 50, lblue);
   putEllipse(image, 200, 415, 25, 25, green);
   putEllipse(image, 200, 415, 24, 24, lblue);
   putRectangle(image, 200, 393, 25, 50, lblue);
   putEllipse(image, 200, 464, 13, 25, green);
   putEllipse(image, 200, 464, 12, 24, lblue);
   putRectangle(image, 150, 442, 13, 50, lblue);
   putEllipse(image, 200, 513, 7, 25, green);
   putEllipse(image, 200, 513, 6, 24, lblue);
   putRectangle(image, 200, 491, 7, 50, lblue);
   putEllipse(image, 200, 562, 3, 25, green);
   putEllipse(image, 200, 562, 2, 24, lblue);
   putRectangle(image, 150, 540, 3, 50, lblue);
   //axes
   putLine(image, 0, 100, 400, 100, white);
   putLine(image, 200, 0, 200, 600, white);
   putLine(image, 100, 90, 100, 110, white);
   putLine(image, 300, 90, 300, 110, white);
   drawImage(image);

   return 0;
}
