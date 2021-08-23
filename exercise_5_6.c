#include <stdio.h>

int main()
{
   int hours, minutes;

   printf("Enter a 24-hour time: \n");
   scanf("%d:%d", &hours, &minutes);
   
   if (hours < 13)
      printf("Equivalent 12-hour time: %d:%.2d AM\n", hours, minutes);
   else if (hours >= 13)
      printf("Equivalent 12-hour time: %d:%.2d PM\n", hours - 12, minutes);

   return 0;      
}

