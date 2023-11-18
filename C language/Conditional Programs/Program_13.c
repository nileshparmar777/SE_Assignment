#include<stdio.h>
main()
{
	int a, b, c, min;
	printf("Enter value of a : ");
	scanf("%d", &a);
	printf("Enter value of b : ");
	scanf("%d", &b);
	printf("Enter value of c : ");
	scanf("%d", &c);
	min = (a<b)?((a<c)?a:c):((b<c)?b:c);
	printf("Minimum number is: %d", min);
}