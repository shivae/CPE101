/* CPE 101, Section 09
 * Dr. Campbell
 * Contains the defintions of genomics.h
 * March 5, 2014                         */

#include "genomics.h"

 char compl(char c){
   switch(c){
      case 'A': {c='T'; break;}
      case 'T': {c='A'; break;}
      case 'G': {c='C'; break;}
      case 'C': {c='G'; break;}
      default: {c='Z'; break;}
   }
   return c;
}

void complement(char s[], char comp[], int length){
   int i;
   char c;
   for(i=0; i<length; i++){
      c = s[i];
      c = compl(c);
      comp[i] = c;
   }
   return;
}

void reverse(char s[], char inv[], int length){
   int i;
   char c;
   for(i=0; i<length; i++){
      c = s[length - (i + 1)];
      inv[i] = c;
   }
}

void palindrome(char s[]){
   int i, length;
   length = 0;
   while(s[length] != '\0'){
      length++;}
      char comp[length];
      char rcomp[length];
      complement(s, comp, length);
      reverse(comp, rcomp, length);
      if(length%2 == 0){
         int counter, count, cdown;
         char temp[length], temp1[length/2-1], rc1[length/2-1],
         temp2[length/2], rc2[length/2];
         counter = 0;
         cdown = 0;
         count = 0;

         for(i=0; i<length/2; i++){
            temp1[i] = s[i];
            rc1[i] = rcomp[i];
         }
         for(i=length/2; i<length; i++){
            temp2[i-length/2] = s[i];
            rc2[i-length/2] = rcomp[i];
         }

         for(i=length/2; i>=0; i--){
            if(temp1[i] == rc1[i]){
               temp[i] = rc1[i];
               cdown++;
            }
            else{temp[i] = '\0';}
         }
         for(i=0; i<length/2; i++){
            if(temp2[i] == rc2[i]){
               temp[i+length/2] = rc2[i];
               counter++;
            }
            else{temp[i+length/2] = '\0';}
         }

         count = counter + cdown;
         if(count > 1){
            printf("Longest palindrome: %d characters long\n\n", count);
         }
         if(count > -1 && count < 2){
            printf("Longest palindrome: 0 characters long\n");
         }
         if(count > 1){
            for(i=length/2-cdown; i<length/2; i++){
               printf("%c", temp[i]);
            }
            for(i=length/2; i<length/2+counter; i++){
               printf("%c", temp[i]);
            }
            printf("\n");
            for(i=length/2+counter-1; i>=length/2; i--){
               printf("%c", temp[i]);
            }
            printf("\n");
         }
         else{printf("\n");}
      }

      if(length%2 != 0){
         int counter, count, cdown, midpt;
         midpt = ceil(length/2.0) - 1;
         char temp[length], temp1[midpt], rc1[midpt],
         temp2[midpt], rc2[midpt];
         counter = 0;
         cdown = 0;
         count = 0;

         for(i=0; i<midpt; i++){
            temp1[i] = s[i];
            rc1[i] = rcomp[i];
         }
         for(i=midpt; i<length; i++){
            temp2[i-midpt] = s[i];
            rc2[i-midpt] = rcomp[i];
         }
         for(i=midpt-1; i>=0; i--){
            if(temp1[i] == rc1[i]){
               temp[i] = rc1[i];
               cdown++;
            }
            else{temp[i] = '\0';}
         }
         for(i=0; i<midpt+1; i++){
            if(temp2[i] == rc2[i]){
               temp[i+midpt] = rc2[i];
               counter++;
            }
            else{temp[i+midpt] = '\0';}
         }

         count = counter + cdown + 1;
         if(count > 1){
            printf("Longest palindrome: %d characters long\n\n", count);
         }
         if(count > -1 && count < 2){
            printf("Longest palindrome: 0 characters long\n");
         }
         if(count > 1){
            for(i=midpt-cdown; i<midpt; i++){
               printf("%c", temp[i]);
            }
            for(i=midpt; i<midpt+1; i++){
               printf("%c", s[i]);
            }
            for(i=midpt; i<midpt+counter+1; i++){
               printf("%c", temp[i]);
            }
            printf("\n");

            for(i=midpt+counter; i>=midpt; i--){
               printf("%c", temp[i]);
            }
            printf("\n");
         }
         else{printf("\n");}
      }

      return;
   }

   void updateGCCount(char s[], int *gc, int *at){
      *gc = 0;
      *at = 0;
      int i, length = 0;
      while(s[length] != '\0'){
         length++;
      }
      for (i = 0; i < length; i++){
         switch (s[i]){
            case 'A': {(*at)++; break;}
            case 'T': {(*at)++; break;}
            case 'G': {(*gc)++; break;}
            case 'C': {(*gc)++; break;}
         }
      }
   }

   char geneticCode(char c1, char c2, char c3){

      char code;
      if(c1 == 'T'){
         if (c2 == 'T'){
            switch(c3){
               case 'T': code = 'F'; break;
               case 'A': code = 'L'; break;
               case 'G': code = 'L'; break;
               case 'C': code = 'F'; break;
               default: code = ' '; break;
            }
         }
         
         else if (c2 == 'A'){
            switch(c3){
               case 'T': code = 'Y'; break;
               case 'A': code = '#'; break;
               case 'G': code = '#'; break;
               case 'C': code = 'Y'; break;
               default: code = ' '; break;
            }
         }
         
         else if (c2 == 'G'){
            switch(c3){
               case 'T': code = 'C'; break;
               case 'A': code = '#'; break;
               case 'G': code = 'W'; break; 
               case 'C': code = 'C'; break;
               default: code = ' '; break;
            }
         }
         
         else if (c2 == 'C'){
            switch(c3){
               case 'T': code = 'S'; break;
               case 'A': code = 'S'; break;
               case 'G': code = 'S'; break;
               case 'C': code = 'S'; break;
               default: code = ' '; break;
            }
         }
         else {
            code = ' ';
         }
      }
      
      
      if(c1 == 'A'){
         if (c2 == 'T'){
            switch(c3){
               case 'T': code = 'I'; break;
               case 'A': code = 'I'; break;
               case 'G': code = 'M'; break;
               case 'C': code = 'I'; break;
               default: code = ' '; break;
            }
         }
         
         else if (c2 == 'A'){
            switch(c3){
               case 'T': code = 'N'; break;
               case 'A': code = 'K'; break;
               case 'G': code = 'K'; break;
               case 'C': code = 'N'; break;
               default: code = ' '; break;
            }
         }
         
         else if (c2 == 'G'){
            switch(c3){
               case 'T': code = 'S'; break;
               case 'A': code = 'R'; break;
               case 'G': code = 'R'; break; 
               case 'C': code = 'S'; break;
               default: code = ' '; break;
            }
         }
         
         else if (c2 == 'C'){
            switch(c3){
               case 'T': code = 'T'; break;
               case 'A': code = 'T'; break;
               case 'G': code = 'T'; break;
               case 'C': code = 'T'; break;
               default: code = ' '; break;
            }
         }
         else {
            code = ' ';
         }
         
      }
      if(c1 == 'G'){
         if (c2 == 'T'){
            switch(c3){
               case 'T': code = 'V'; break;
               case 'A': code = 'V'; break;
               case 'G': code = 'V'; break;
               case 'C': code = 'V'; break;
               default: code = ' '; break;
            }
         }
         
         else if (c2 == 'A'){
            switch(c3){
               case 'T': code = 'D'; break;
               case 'A': code = 'E'; break;
               case 'G': code = 'E'; break;
               case 'C': code = 'D'; break;
               default: code = ' '; break;
            }
         }
         
         else if (c2 == 'G'){
            switch(c3){
               case 'T': code = 'G'; break;
               case 'A': code = 'G'; break;
               case 'G': code = 'G'; break; 
               case 'C': code = 'G'; break;
               default: code = ' '; break;
            }
         }
         
         else if (c2 == 'C'){
            switch(c3){
               case 'T': code = 'A'; break;
               case 'A': code = 'A'; break;
               case 'G': code = 'A'; break;
               case 'C': code = 'A'; break;
               default: code = ' '; break;
            }
         }
         else {
            code = ' ';
         }  
      }
      

      if(c1 == 'C'){
         if (c2 == 'T'){
            switch(c3){
               case 'T': code = 'L'; break;
               case 'A': code = 'L'; break;
               case 'G': code = 'L'; break;
               case 'C': code = 'L'; break;
               default: code = ' '; break;
            }
         }
         
         else if (c2 == 'A'){
            switch(c3){
               case 'T': code = 'H'; break;
               case 'A': code = 'Q'; break;
               case 'G': code = 'Q'; break;
               case 'C': code = 'H'; break;
               default: code = ' '; break;
            }
         }
         
         else if (c2 == 'G'){
            switch(c3){
               case 'T': code = 'R'; break;
               case 'A': code = 'R'; break;
               case 'G': code = 'R'; break; 
               case 'C': code = 'R'; break;
               default: code = ' '; break;
            }
         }
         
         else if (c2 == 'C'){
            switch(c3){
               case 'T': code = 'P'; break;
               case 'A': code = 'P'; break;
               case 'G': code = 'P'; break;
               case 'C': code = 'P'; break;
               default: code = ' '; break;
            }
         }
         else {
            code = ' ';
         }
      }
      return code;
   }


   void convert2Amino(char s[], char amino[], int length, int frame){
      int i;
      int j=0;


      for (i=frame; i<length; i+=3){
         amino[j] = geneticCode(s[i-1], s[i], s[i+1]);
         j=j+1;
      }

      return;
   }
