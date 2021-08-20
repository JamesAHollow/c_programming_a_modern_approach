#include <stdio.h>

int main()
{
   int whole_number, digit_first, digit_second;

   printf("Enter a two-digit number: ");
   scanf("%d", &whole_number);

   digit_first = whole_number / 10; 
   digit_second = whole_number % 10;

   printf("The reversal is: %d%d\n\n", digit_second, digit_first);

   return 0;
}
