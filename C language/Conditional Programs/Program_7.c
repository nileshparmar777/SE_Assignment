#include<stdio.h>
main()
{
	int marks;
	printf("Enter marks : ");
	scanf("%d",&marks);
		
	if(marks>=35)
	{
		printf("Pass");
	}
	else
	{
		printf("Fail");
	}
}