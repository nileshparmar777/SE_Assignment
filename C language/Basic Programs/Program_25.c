#include<stdio.h>
main()
{
	int esal1,esal2,esal3,esal4,esal5,tot,avg;
	
	printf("Enter Expense 1 : ");
	scanf("%d",&esal1);

	printf("Enter Expense 2 : ");
	scanf("%d",&esal2);
	
	printf("Enter Expense 3 : ");
	scanf("%d",&esal3);
	
	printf("Enter Expense 4 : ");
	scanf("%d",&esal4);
	
	printf("Enter Expense 5 : ");
	scanf("%d",&esal5);
	
	tot = esal1+esal2+esal3+esal4+esal5;
	avg = tot/5;
	printf("Average expense : %d",avg);
}