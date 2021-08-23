#include <stdio.h>

int main()
{
   int i = 10, j = 5, k = -5;
   printf("\na. %d\n", !i < j);

   i = 2, j = 1;
   printf("b. %d\n", !!i + !j);

   i = 5, j = 0;
   printf("c. %d\n", i && j || k); 

   i = 1, j = 2, k = 3;
   printf("d. %d\n", i < j || k);


   return 0;
}
