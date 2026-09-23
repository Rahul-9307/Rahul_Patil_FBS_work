// Write a C program to convert a given number of days into years, weeks, and remaining days.

#include <stdio.h>

int main()
{
    int days, years, weeks, remaining_days;

    printf("Enter you days : ");
    scanf("%d", &days);

    years = days / 365;
    days = days % 365;

    weeks = days / 7;
    remaining_days = days % 7;

    printf("The years is %d\n", years);
    printf("The weeks is %d\n", weeks);
    printf("The remaining days is %d\n", remaining_days);

    return 0;
}