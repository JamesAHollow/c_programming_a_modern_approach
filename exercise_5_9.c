#include <stdio.h>

int main()
{
   float income, tax_due;

   printf("Enter your income: ");
   scanf("%f", &income);

   if (income <= 750.00)
      tax_due = (income * .01);
   else if (income > 750.00 && income <= 2250.00)
      tax_due = 7.50 + ((income - 750.00) * .02); 
   else if (income > 2250.00 && income <= 3750.00)
      tax_due = 37.50 + ((income - 2250.00) * .03);
   else if (income > 3750.00 && income <= 5250.00)
      tax_due = 82.50 + ((income - 3750.00) * .04);
   else if (income > 5250.00 && income <= 7000.00)
      tax_due = 142.50 + ((income - 5250.00) * .05);
   else if (income > 7000.00)
      tax_due = 230.00 + ((income - 7000.00) * .06); 


   printf("Tax Due: $%.2f\n", tax_due);
}
