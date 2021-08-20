#include <stdio.h>

int main()
{
   float dollar;
   float tax = 0.05;

   printf("Please enter a dollar amount: \n"); 
   scanf("%f", &dollar);

   printf("With tax added: %.2f \n", (dollar * tax) + dollar);
   return 0;



}
