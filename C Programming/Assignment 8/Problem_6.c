// Accept array and print only prime numbers of array.
#include <stdio.h>
void isprime(int *);
int main()
{
    printf("start");
    int arr[] = {7, 40, 7, 3, 86, 59, 74, 52, 75};
    isprime(arr);
    return 0;
}
void isprime(int *arr)
{
    for (int i = 2; i < 9; i++)
    {

        if (arr[i - 2] % i == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}