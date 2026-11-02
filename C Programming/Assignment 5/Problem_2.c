/* 2. Print a right-angled triangle pattern
Input: n = 5
Output:
*
**
***
****
*****
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    for (int i = num; i >= 0; i--)
    {
        for (int j = num - i; j > 0; j--)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}