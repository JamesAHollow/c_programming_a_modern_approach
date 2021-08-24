#include <stdio.h>

int main()
{
   
   int number, tens, ones;

   printf("\n\nEnter a two-digit number: ");
   scanf("%d", &number);

   if (number > 99 || number < 10)
      printf("\nILLEGAL NUMBER\n\n");

   tens = number / 10;
   ones = number % 10;

   printf("You entered the number ");

   if (tens == 1){
      switch(ones){
         case 1: printf("ELEVEN\n");break;
         case 2: printf("TWELVE\n");break;
         case 3: printf("THIRTEEN\n"); break; 
         case 4: printf("FOURTEEN\n"); break;
         case 5: printf("FIFTEEN\n"); break;
         case 6: printf("SIXTEEN\n"); break;
         case 7: printf("SEVENTEEN\n"); break;
         case 8: printf("EIGHTEEN\n"); break;
         case 9: printf("NINETEEN\n"); break;
         }
   } else {
      switch(tens){
         case 2: printf("TWENTY"); break;
         case 3: printf("THIRTY"); break;
         case 4: printf("FORTY"); break;
         case 5: printf("FIFTY"); break;
         case 6: printf("SIXTY"); break;
         case 7: printf("SEVENTY"); break;
         case 8: printf("EIGHTY"); break;
         case 9: printf("NINETY"); break;
      }
      switch(ones){
         case 1: printf("-ONE\n"); break;
         case 2: printf("-TWO\n"); break;
         case 3: printf("-THREE\n"); break;
         case 4: printf("-FOUR\n"); break;
         case 5: printf("-FIVE\n"); break;
         case 6: printf("-SIX\n"); break;
         case 7: printf("-SEVEN\n"); break;
         case 8: printf("-EIGHT\n"); break;
         case 9: printf("-NINE\n"); break; 
      }
   }

   return 0; 
}
