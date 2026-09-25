/*Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
respectively.*/

#include <stdio.h>

int main()
{
    int da, ta, hra, total_salary, basic_salary;

    printf("Enter your basic salary : ");
    scanf("%d", &basic_salary);

    if (basic_salary <= 5000)
    {
        da = basic_salary * 10 / 100;
        ta = basic_salary * 20 / 100;
        hra = basic_salary * 25 / 100;
    }
    else
    {
        da = basic_salary * 15 / 100;
        ta = basic_salary * 25 / 100;
        hra = basic_salary * 30 / 100;
    }
    total_salary = da + ta + hra + basic_salary;
    printf("The  basic salary is %d and total salary is %d", basic_salary, total_salary);

    return 0;
}