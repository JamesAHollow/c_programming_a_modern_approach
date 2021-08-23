#include <stdio.h>

int main()
{
   int i = 2, j = 3;
   int k = i * j == 6;

   printf("\na. %d\n", k); 
   
   i = 5, j = 10, k = 1;

   printf("b. %d\n", (k > i) < j);

   i = 3, j = 2, k = 1;
   
   printf("c. %d\n", (i < j) == (j < k));

   i = 3, j = 4, k = 5;

   printf("d. %d\n", ((i % j) + i) < k); 
   printf("extra. %d\n", i%j);

   return 0;
}

