#include<stdio.h>
main()
{
	int no;
	printf("Enter number : ");
	scanf("%d",&no);
		
	if(no>0)
	{
		printf("no is positive");
	}
	else if(no==0)
	{
		printf("no is zero");
	}
	else
	{
		printf("no is negative");	
	}
}