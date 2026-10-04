/* Check the given number is Strong number or not.
Input: n = 145
Output: Strong */

#include <stdio.h>

int main()
{
    int num = 145;
    // int fact = num,b;
    int sum = 1;
    int new_sum = 0;

    while (num <= 0)
    {
        num = num % 10; // 5
        for (int i = 1; i <= num; i++)
        {
            sum = sum * i;
            new_sum = new_sum + sum;
        }
        num = num / 10;
    }
    printf("%d", new_sum);

    return 0;
}