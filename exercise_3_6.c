#include <stdio.h>

int main()
{
   int language, publisher, book_number, check_digit;

   printf("Enter ISBN: ");
   scanf("%d-%d-%d-%d", &language, &publisher, &book_number, &check_digit);

   printf("\nLanguage: %d\n", language);
   printf("Publisher: %d\n", publisher);
   printf("Book Number: %d\n", book_number);
   printf("Check Digit: %d\n", check_digit);

   return 0;
}
