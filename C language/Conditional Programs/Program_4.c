#include<stdio.h>
main()
{
	int no,a,b,add,sub,mul,div,mod;
	printf("Choose no for you want : \n");
	printf("Addition for 1\n");
	printf("Substraction for 2\n");
	printf("Multiplication for 3\n");
	printf("Division for 4\n");
	printf("Modules for 5\n");
	scanf("%d",&no);
	
	printf("Enter value of a : ");
	scanf("%d",&a);

	printf("Enter value of b : ");
	scanf("%d",&b);
			
	if(no==1)
	{
		add = a+b;
		printf("Addition is : %d",add);
	}
	else if(no==2)
	{
		sub = a-b;
		printf("Substraction is : %d",sub);
	}
	else if(no==3)
	{
		mul = a*b;
		printf("Multiplication is : %d",mul);
	}
	else if(no==4)
	{
		div = a/b;
		printf("Division is : %d",div);
	}
	else if(no==5)
	{
		mod = a%b;
		printf("Modules is : %d",mod);
	}
	else
	{
		printf("Input between 1 to 5");
	}
}