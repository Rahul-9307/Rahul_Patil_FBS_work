/* 10 Find Sum of first and last digit of given number.
Input: n = 12345
Output: 6 (1 + 5) */

#include <stdio.h>

int main()
{
    int n,last,sum;
    printf("Enter Your number : ");
    scanf("%d",&n);

    int first = 0;

    last = n % 10;

    while (n >= 10)
    {
        n = n / 10;
    }
    first = n;

    sum = first + last;


    printf(" %d ( %d + %d)", sum, first, last);

    return 0;
}