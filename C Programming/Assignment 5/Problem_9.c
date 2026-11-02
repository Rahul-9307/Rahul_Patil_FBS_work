/* 9. Print a hollow square pattern
Input: n = 4
Output:

* * * *
*     *
*     *
* * * *
*/
#include <stdio.h>

int main()
{

    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {

            if (i == 1 || i == 4 || j == 1 || j == 4)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

    return 0;
}