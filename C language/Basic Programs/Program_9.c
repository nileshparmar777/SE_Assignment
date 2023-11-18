#include <stdio.h> 

float findPerimeter(float a, float b, float c) 
{ 
	return (a + b + c); 
} 
main() 
{ 
	float a = 2.0, b = 3.0, c = 5.0; 
	printf("%f", findPerimeter(a, b, c));  
} 
