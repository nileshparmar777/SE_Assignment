#include<stdio.h>

main()
{
    int number_of_days, years, months, days;

    printf("Enter number of year: ");
    scanf("%d", &years);
    
    months = years * 12;

    days = months * 30;

    printf("\nMonths = %d", months);
    printf("\nDays = %d", days);

}