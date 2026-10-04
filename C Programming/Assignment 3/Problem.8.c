/* Check the given number is Strong number or not.
Input: n = 145
Output: Strong */

#include <stdio.h>

int main()
{
    int num;
    int new_sum = 0;
    int new_num = num;
    
    int old_num = num;

    printf("Enter Your number : ");
    scanf("%d",&num);
    
    while (new_num > 0)
    {
        int sum = 1;
        num = new_num % 10; // 5
        for (int i = 1; i <= num; i++)
        {
            sum = sum * i;
        }
        new_sum = new_sum + sum;
        new_num = new_num / 10;
    }

    if (new_sum == old_num)
    {
        printf("The number is Strong number");
    }else
    {
       printf("The number not is Strong number");
    }
    
    

    return 0;
}