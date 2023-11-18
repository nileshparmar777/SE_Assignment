#include<stdio.h>
main()
{
	int no1,no2,add,sub,mul,div,mod;
	printf("Enter first number : ");
	scanf("%d",&no1);
	
	printf("Enter second number : ");
	scanf("%d",&no2);
	
	add = no1+no2;
	sub = no1-no2;
	mul = no1*no2;
	div = no1/no2;
	mod = no1%no2;
	
	printf("Addition is : %d\n",add);
	printf("Substraction is : %d\n",sub);
	printf("Multiplication is : %d\n",mul);
	printf("Division is : %d\n",div);
	printf("Modules is : %d",mod);
}