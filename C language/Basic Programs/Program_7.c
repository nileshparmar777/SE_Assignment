#include<stdio.h>

main() {
   float length, width, area;

   printf("Enter the length of the rectangle: ");
   scanf("%f", &length);

   printf("Enter the width of the rectangle: ");
   scanf("%f", &width);

   area = length * width;

   printf("The area of the rectangle is: %f\n", area);
   
}