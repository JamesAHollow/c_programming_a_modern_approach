#include <stdio.h>

int main()
{
   int velocity;

   printf("Enter a wind velocity: ");
   scanf("%d", &velocity);

   if (velocity < 1)
      printf("\nWith a wind velocity of %d knots, you are experiencing CALM wind force.\n", velocity);
   else if (velocity >= 1 && velocity <= 3)
      printf("\nWith a wind velocity of %d knots, you are experiencing LIGHT AIR wind force.\n", velocity);
   else if (velocity >= 4 && velocity <= 27)
      printf("\nWith a wind velocity of %d knots, you are experiencing BREEZE wind force.\n", velocity);
   else if (velocity >= 28 && velocity <= 47)
      printf("\nWith a wind velocity of %d knots, you are experiencing GALE wind force.\n", velocity);
   else if (velocity >= 48 && velocity <= 63)
      printf("\nWith a wind velocity of %d knots, you are experiencing STORM wind force.\n", velocity);
   else if (velocity > 63)
      printf("\nWith a wind velocity of %d knots, you are experiencing HURRICANE wind force.\n", velocity);
   else
      printf("\nINVALID WIND VELOCITY\n");

   return 0;
}
