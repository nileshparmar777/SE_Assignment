#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter value of a : ");
	scanf("%d",&a);
	
	printf("Enter value of b : ");
	scanf("%d",&b);
	
	/* Using third variable
	c=a;
	a=b;
	b=c;
	*/
	
	/* Without third variable */
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("a is : %d",a);
	printf("b is : %d",b);
}