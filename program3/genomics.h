#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char compl(char c);
void complement(char s[], char compl[], int length);
void reverse(char s[], char inv[], int length);
void palindrome(char s[]);
void updateGCCount(char s[], int *gc, int *at);
char geneticCode(char c1, char c2, char c3);
void convert2Amino(char s[], char amino[], int length, int frame);