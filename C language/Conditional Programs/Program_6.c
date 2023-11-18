#include<stdio.h>
main()
{
	char ch;
	printf("Enter character : ");
	scanf("%c",&ch);
		
	if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
	{
		printf("Vovel Character");
	}
	else
	{
		printf("Consonant Character");
	}
}