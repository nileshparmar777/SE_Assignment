#include <stdio.h>
main()
{
    int day;

    printf("Enter month number (1-12): ");
    scanf("%d", &day);


    if(day == 1)
    {
        printf("Sunday");
    }
    else if(day == 2)
    {
        printf("Monday");
    }
    else if(day == 3)
    {
        printf("Tuesday");
    }
    else if(day == 4)
    {
        printf("Wednesday");
    }
    else if(day == 5)
    {
        printf("Thursday");
    }
    else if(day == 6)
    {
        printf("Friday");
    }
    else if(day == 7)
    {
        printf("Saturday");
    }
    else
    {
        printf("Please enter number between 1 to 7.");
    }
}