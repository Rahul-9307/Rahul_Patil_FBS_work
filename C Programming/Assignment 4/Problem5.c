/* Write a menu driven program to take a number for user and perform operations as follows.

Press 1.To check number is even or odd.
2.To check number is prime or not.
3.To check number is pallindrome or not.
4.To check number is positive, negative or zero.
5.To reverse a number.
6.To find sum of digits. this quesion is my assignment and you ccabn say me properly whtat is the meaning of this question */

#include <stdio.h>

int main()
{
    printf("......... Menu ..........\n");
    printf("Press 1.To check number is even or odd.\n");
    printf("2.To check number is prime or not.\n");
    printf("3.To check number is pallindrome or not.\n");
    printf("4.To check number is positive, negative or zero.\n");
    printf("5.To reverse a number.\n");
    printf("6.To find sum of digits.\n");

    int number;
    printf("Enter Your chose to prefrom the code Press no :  ");
    scanf("%d", &number);

    if (number == 1)
    {
        int number;
        printf("Enter Your number to check odd and even : ");
        scanf("%d", &number);
        if (number % 2 == 0)
        {
            printf("The number %d is even ", number);
        }
        else
        {
            printf("The number %d is odd  ", number);
        }
    }
    else if (number == 2)
    {
        int number;
        printf("Enter Your number to check priem or not  : ");
        scanf("%d", &number);
        int i = 2;
        int flag = 0;
        while (i < number)
        {
            if (number % i == 0)
            {
                flag = 1;
                break;
            }
            i++;
        }
        if (flag == 0)
        {
            printf("The number is prime ");
        }
        else
        {
            printf("The number is not prime");
        }
    }
    else if (number == 3)
    {
        int number; // 125
        printf("Enter Your number to check pallindrome or not : ");
        scanf("%d", &number);
        int rem;
        int new_number = number;
        int sum = 0;

        while (number > 0)
        {
            rem = number % 10; // 5
            sum = sum * 10 + rem;
            number = number / 10;
        }
        if (new_number == sum)
        {
            printf("The number %d is pallindrome ", new_number);
        }
        else
        {
            printf("The number %d is not pallindrome", new_number);
        }
    }
    else if (number == 4)
    {
        int number;
        printf("Enter Your number to check positve, negative, or zero : ");
        scanf("%d", &number);

        if (0 <= number)
        {
            if (number == 0)
            {
                printf("The number is zero");
            }
            else
            {
                printf("The number is positive");
            }
        }
        else
        {
            printf("The number is negative");
        }
    }
    else if (number == 5)
    {
        int number;
        printf("Enter Your number to check reverse  : ");
        scanf("%d", &number);
        int rem;
        int rev = 0;
        int new_number = number;

        while (number > 0)
        {
            rem = number % 10;
            rev = rev * 10 + rem;
            number = number / 10;
        }
        printf("The old number is %d and The reverse number is %d ", new_number, rev);
    }
    else if (number == 6)
    {
        int number; // 555
        printf("Enter Your number to check sum of digits : ");
        scanf("%d", &number);
        int rem;
        int sum = 0;
        int new_number = number;

        while (number > 0)
        {
            rem = number % 10; // 5
            sum = sum + rem;
            number = number / 10;
        }
        printf("The number of %d and the sum of digits is %d ", new_number, sum);
    }
    else
    {
        printf("Please Enter The Valid number.....");
    }

    return 0;
}