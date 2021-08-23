#include <stdio.h>

int main()
{
   int n;

   printf("\nEnter a number (1 to 999): \n");
   scanf("%d", &n);

   if (n > 0 && n < 10)
      printf("The number %d has 1 digit.\n", n);
   else if (n > 9 && n < 100)
      printf("The number %d has 2 digits.\n", n);
   else if (n > 99 && n < 1000)
      printf("The number %d has 3 digits.\n", n);
   else printf("The number entered was not within the specified range.\n");

   return 0;

}
