#include <stdio.h>

int main()
{
   int i, j, k;
   i = 2;
   j = 1;
   k = 0;

   i *= j *= k;

   printf("\n%d%d%d\n\n", i, j, k);

   return 0;
}
