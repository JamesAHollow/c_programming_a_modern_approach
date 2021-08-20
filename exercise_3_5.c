#include <stdio.h>

int main()
{
   int item_number, month, day, year;
   float unit_price;

   printf("Enter the item number: ");
   scanf("%d", &item_number);

   printf("\nEnter the price: ");
   scanf("%f", &unit_price);

   printf("\nEnter the date (mm/dd/yy): ");
   scanf("%d/%d/%d", &month, &day, &year);

   printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%-d\t\t$%7.2f\t%-.2d/%.2d/%-.2d\n", item_number, unit_price, month, day, year); 
}
