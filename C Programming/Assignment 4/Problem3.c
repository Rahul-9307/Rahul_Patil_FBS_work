// Print perfect numbers in the given range 1 to n.

#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter you number = ");
    scanf("%d",&n);
    
    for (int k = 6; k <= n; k++)
    {
        int number = k;
        int sum = 0;

        for (int i = 1; i < number; i++)
        {
            if (number % i == 0)
            {
                sum = sum + i;
            }
        }

        if (sum == number)
        {
            printf("%d \n",k);
        }
        
    }

    return 0;
}