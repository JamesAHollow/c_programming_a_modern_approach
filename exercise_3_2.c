#include <stdio.h>

int main()
{
   int y = 1234;
   float x = 5678;

   printf("%-8.1e\n", x);
   printf("%10.6e\n", x);
   printf("%-8.3d\n", y);
   printf("%6d\n", y);

   return 0;
}
