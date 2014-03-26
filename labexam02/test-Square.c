#include <stdio.h>
#include "functions.h"
#include "checkit.h"

int main(){
   checkit_int(inSquare(1,1,5), 1);
   checkit_int(inSquare(5,5,1), -1);
   checkit_int(inSquare(2,2,4), 0);
   
   return 0;
}
