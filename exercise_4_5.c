#include <stdio.h>

int main()
{
   int digit_first, digit_second, digit_third;

   printf("Enter a three-digit number: ");
   scanf("%1d%1d%1d", &digit_first, &digit_second, &digit_third);

   printf("The reversal is: %d%d%d\n\n", digit_third, digit_second, digit_first);

   return 0;
}
