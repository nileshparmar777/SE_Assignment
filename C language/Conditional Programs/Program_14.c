#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter value of a : ");
	scanf("%d", &a);
	printf("Enter value of b : ");
	scanf("%d", &b);
	printf("Enter value of c : ");
	scanf("%d", &c);
		
	if(a>b||a>c)
	{
		printf("a is large");
	}
	else if(b>c)
	{
		printf("b is large");
	}
	else
	{
		printf("c is large");	
	}
}