#include<stdio.h>
main()
{
	int emp,sal;
	printf("Enter month of salary : ");
	scanf("%d",&sal);
	
	emp=sal*12;
	printf("Your annual salary is : %d",emp);
}