#include <stdio.h>
main() {
  	float height;
  	printf("Enter  the Height (in centimeters)\n");
    scanf("%f", &height);

  	if (height < 150)
  	{
	 	printf("This person is Short\n"); 	
	}    	
  	else if((height >= 150) && (height <= 165.0))
 	{
  		printf("This person is Average Height\n");	
  	}    	
  	else if ((height >= 165.0) && (height <= 195.0))
  	{
	 	printf("This person is Tall\n"); 	
  	}    	
  	else
  	{
	 	printf("This person is of Abnormal height\n"); 	
  	}    	
}