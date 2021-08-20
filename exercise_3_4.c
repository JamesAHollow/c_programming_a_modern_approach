#include <stdio.h>

int main()
{
   int day;
   int month;
   int year;

   printf("Enter a date (mm/dd/yy): ");
   scanf("%d/%d/%d", &month, &day, &year);

   printf("\n%.4d%.2d%.2d\n", year, month, day);

   return 0;

}
