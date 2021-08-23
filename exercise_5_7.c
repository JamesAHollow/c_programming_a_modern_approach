/* Calculates a broker's commission */

#include <stdio.h>

int main()
{
   float commission, pps, value, rival_commission;
   int num_shares;

   printf("Enter the price per share: ");
   scanf("%f", &pps);

   printf("Enter the number of shares: ");
   scanf("%d", &num_shares);

   value = pps * num_shares;

   if (value < 2500.00)
      commission = 30.00 + .017 * value;
   else if (value < 6250.00)
      commission = 56.00 + .0066 * value;
   else if (value < 20000.00)
      commission = 76.00 + .0034 * value;
   else if (value < 50000.00)
      commission = 100.00 + .0022* value;
   else if (value < 500000.00)
      commission = 155.00 + .0011 * value;
   else
      commission = 255.00 + .0009 * value;
   
   if (commission < 39.00)
      commission = 39.00;

   if (num_shares < 2000)
      rival_commission = 33.00 + .03 * num_shares;
   else if (num_shares >= 2000)
      rival_commission = 33.00 + .02 * num_shares;

   printf("Commission: $%.2f\n", commission);
   printf("Rival Commission: $%.2f\n", rival_commission);

   return 0;
}
