#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include "game.h"
#include <time.h>

int main(){
   srand(time(0));
   roll();
   scoring();
   return 0;
}
