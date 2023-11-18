#include<stdio.h>
main()
{
	int year;
	printf("Enter year : ");
	scanf("%d",&year);
		
	if(year%2==0)
	{
		printf("Leap year");
	}
	else
	{
		printf("Not leap year");
	}
}