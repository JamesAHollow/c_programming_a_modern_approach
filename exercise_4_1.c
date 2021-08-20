#include <stdio.h>

int main()
{
   int i = 1;
   int j = 2;
   int k = 3;

   /*printf("%d %d", i / j, i % j);

   printf("%d", (i + 10) % j);

   printf("%d", (i + 10) % k / j);*/

   printf("%d", (i + 5) % (j + 2) / k);
   
 
   return 0;
}
