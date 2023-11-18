#include <stdio.h>
main()
{
		char value;
		printf("Enter value : ");
		scanf("%c", &value);

		if (value >= 65 && value < 90)
		{
			printf("\nThis is uppercase latter\n");
		}
		else
		{
			if (value >= 97 && value <= 122)
			{
				printf("\nThis is lowercase latter\n");
			}
			else
			{
				if (value >= 48 && value <= 57)
				{
					printf("\nThis is digit\n");
				}
				else
				{
					printf("\nThis is special character\n\n");
				}
			}
		}
}