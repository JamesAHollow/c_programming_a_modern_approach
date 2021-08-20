#include <stdio.h>

int main()
{
   int whole_number, digit_first, digit_second, digit_third;

   printf("Enter a three-digit number: ");
   scanf("%d", &whole_number);

   digit_second = (whole_number / 10) % 10;
   digit_first = (whole_number / 10) / 10;
   digit_third = whole_number % 10;

   printf("The reversal is: %d%d%d\n\n", digit_third, digit_second, digit_first);

   return 0;
}
