#include<stdio.h>
main()
{
	char emp1,emp2,emp3,emp4,emp5;
	int esal1,esal2,esal3,esal4,esal5,tot,avg;
	
	printf("Enter Name of Employee 1 : ");
	scanf("%s",&emp1);
	printf("Enter Salary of Employee 1 : ");
	scanf("%d",&esal1);

	printf("Enter Name of Employee 2 : ");
	scanf("%s",&emp2);
	printf("Enter Salary of Employee 2 : ");
	scanf("%d",&esal2);
	
	printf("Enter Name of Employee 3 : ");
	scanf("%s",&emp3);
	printf("Enter Salary of Employee 3 : ");
	scanf("%d",&esal3);
	
	printf("Enter Name of Employee 4 : ");
	scanf("%s",&emp4);
	printf("Enter Salary of Employee 4 : ");
	scanf("%d",&esal4);
	
	printf("Enter Name of Employee 5 : ");
	scanf("%s",&emp5);
	printf("Enter Salary of Employee 5 : ");
	scanf("%d",&esal5);
	
	tot = esal1+esal2+esal3+esal4+esal5;
	avg = tot/5;
	printf("Total salary : %d\n",tot);
	printf("Average salary : %d",avg);
}