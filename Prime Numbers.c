/*Find Prime Numbers from 1 - 10*/

#include <stdio.h>
 
int main () {

   /* local variable definition */
   int i, j;
   
   for(i = 2; i<10; i++) {

      for(j = 2; j <= (i/j); j++) 
      if(!(i%j)) break; /* if factor found, not prime */
      if(j > (i/j)) printf("%d is prime\n", i); /* Ensure that 2 and 3 get printed since (2/2 and 3/2) > 2 */ 
   }
 
   return 0;
}
