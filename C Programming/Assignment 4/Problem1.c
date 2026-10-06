// Print armstrong numbers in the given range 1 to n.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter Your no = ");
    scanf("%d", &n);
    for (int k = 100; k <= n; k++)
    {
        int number = k;
        int count = 0;
        int rem;
        int sum = 0;
        int new_number = number;


        while (number > 0)
        {
            count++;
            number = number / 10;
        }

        number = new_number;
        while (number > 0)
        {
            rem = number % 10; // 3
            int res = 1;

            for (int i = 1; i <= count; i++)
            {
                res = res * rem;
            }

            sum = sum + res;
            number = number / 10;
        }

        if (new_number == sum)
        {
            printf("%d \n", k);
        }
    }

    return 0;
}
