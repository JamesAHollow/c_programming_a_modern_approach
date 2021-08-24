#include <stdio.h>

int main()
{
   int grade, grade_tens;

   printf("\n\nEnter numerical grade: ");
   scanf("%d", &grade);

   grade_tens = grade / 10;

   if (grade < 0 || grade > 100)
      printf("ILLEGAL GRADE\n\n");
   else
      switch (grade_tens) {
         case 9: case 10: printf("Letter grade: A\n\n"); break;
         case 8: printf("Letter grade: B\n\n"); break;
         case 7: printf("Letter grade: C\n\n"); break;
         case 6: printf("Letter grade: D\n\n"); break;
         case 0: case 1: case 2: case 3: case 4: case 5: printf("Letter grade: F\n\n"); break;
         };

   return 0;
   
}
