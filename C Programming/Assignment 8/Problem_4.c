// Find odd and even among the numbers.

#include <stdio.h>
void even(int *);
void odd(int *);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    printf("This is even number : ");
    even(arr);
    printf("\n");

    printf("This is odd number : ");
    odd(arr);

    return 0;
}

void even(int *arr)
{
    for (int i = 0; i < 18; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}
void odd(int *arr)
{
    for (int i = 0; i < 18; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
}