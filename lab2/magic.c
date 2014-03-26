/************************************************/
/* CSC 101      Winter 2012       Alex Dekhtyar */
/*                                              */
/* Lab 1.                                       */
/*                                              */
/************************************************/


/*
   This program introduces you to the testing environment
   we will be using in the first half of the course.
 
   Study it carefully.

   Good luck!
*/

/* PREPROCESSOR DIRECTIVES  */

#include <stdio.h>    /* Standard C library input/output (I/O) functions */
#include <math.h>     /* Standard C library mathematical functions       */

#include "checkit.h"  /* checkit.h: testing macros (by Dr. Aaron Keen)   */
                   
/* function main() */

int main() {

/* In this program we use main() to test our function compute() */

/* for this, we use the checkit_int() macro defined in the checkit.h file */
/* Examples below illustrate how check_int() is used                    */

checkit_int(5, 5);  /* checkit_int()  requires two parameters. Both should be integer expressions */
checkit_int(2+3, 5); /* checkit_int() evaluates both expressions and compares them */
checkit_int(5, 1+4); /* checkit_int() reports if the two expressions yield the same result*/               

/* The three tests above should all succeed */
/* The two tests below should fail */

checkit_int(4, 4);
checkit_int(2+3,5);

/* Complete the checkit_int() calls to make all tests below  successfully pass       */
/* Missing parameters are represented as "<?>". Replace "<?>" with integer constants */
/* to make the ALL tests pass. Remove comments around checkit_int() calls below      */

/* test #1 */
checkit_int(5*5, 25);

/* test #2 */
checkit_int((5*5)/5, 5);

/* test #3 */
checkit_int(2+3*4, 14);

/* test #4 */
checkit_int(6/2/3, 1);

/* test #5 */
checkit_int(6/2*3, 9);

/* test #6 */
checkit_int(5/5-1, 0);

/* test #7 */
checkit_int(5/(5+5), .5);

/* test #8 */
checkit_int(20%5, 0);

/* test #9 */
checkit_int(25%10, 5);

/* test #10 */
checkit_int(10*5%3, 2);


 return 0;   /* According to ANSI C standards, main() must return an int value. */
             /* We are not interested in what main() returns, so we return 0    */
}



