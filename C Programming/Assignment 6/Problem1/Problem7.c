// Function Type 1 = Without Parameter and Without Return Value.

/*Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
respectively.*/

#include <stdio.h>
void check_salary();

int main()
{
    check_salary();
    return 0;
}

void check_salary(){


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
}