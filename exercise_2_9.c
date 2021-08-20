#include <stdio.h>

#define PI 3.14159

main(void)
{
   float radius, volume;

   printf("Enter the radius of the sphere: \n");
   scanf("%f", &radius);

   volume = (4.0 / 3.0) * (PI * (radius * radius * radius));

   printf("The volume of the sphere is: %.2f \n", volume); 
   
   return 0;
}
