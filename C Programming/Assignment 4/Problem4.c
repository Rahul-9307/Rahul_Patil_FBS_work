// Print strong numbers in the given range 1 to n.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter you number : ");
    scanf("%d",&n);
    
    for (int k = 1; k <= n; k++)
    {
        
        int number = k;
        int new_number = number;
        int sum = 0;

        while (number > 0)
        {
            int res = 1;
            int rem = 1;
            rem = number % 10; // 5

            for (int i = 1; i <= rem; i++)
            {
                res = res * i;
            }

            sum = sum + res;
            number = number / 10;
        }

        // printf("%d \n",sum);

        if (sum == new_number)
        {
            printf("%d\n",k);
        }
        
    }
    return 0;
}