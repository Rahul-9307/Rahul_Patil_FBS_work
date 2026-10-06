// Function Type 1 = Without Parameter and Without Return Value.

// 3. Write a program to check whether a given year is a leap year.

#include <stdio.h>

void leap_year();

int main()
{
    leap_year();
    return 0;
}

void leap_year(){


    int a;

    printf("Enter you no :");
    scanf("%d",&a);

    if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
    {
        printf("leap year is %d ", a);
    }
    else
    {
        printf("Not a leap year is %d ", a);
    }
}
