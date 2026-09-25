// 3. Write a program to check whether a given year is a leap year.

#include <stdio.h>

int main()
{
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

    return 0;
}