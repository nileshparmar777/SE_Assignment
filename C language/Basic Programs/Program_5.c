#include<stdio.h>
main(){
    int side;
    float area;
    
    printf("Enter the side of the cube: ");
    scanf("%d", &side);
    
    area = 6 * side * side;
    
    printf("Area of Cube: %.2f", area);    
}