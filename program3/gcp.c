#include "genomics.h"
#include <stdio.h>

int main(){
   int gc, at, length = 0;
   float gcf, lengthf, gcp;
   char s[] = "GCGGTATATATGGGCCCGAGAGTATATGAGAGAGAGAGAGAGAGTTAGACAGAGAGAGA";
   printf("Sequence: ");
   while (s[length] != '\0'){
      printf("%c", s[length]);
      length++;
   }
   updateGCCount(s, &gc, &at);
   gcf = gc * 1.0;
   lengthf = length * 1.0;
   gcp = gcf / lengthf * 100.0;
   printf("\nGC-content: %.2f\n", gcp);
   return 0;
}