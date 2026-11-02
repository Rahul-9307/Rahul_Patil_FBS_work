/* 10. Sort the array. */

#include <stdio.h>
void short_of_third(int *);
int main()
{
    int arr[] = {2, 5, 7, 8, 9, 6, 3, 1, 4};

    short_of_third(arr);

    return 0;
}

void short_of_third(int *arr)
{
    for (int i = 0; i < 7; i++)
    {
        int temp;
        for (int j = 0; j < 7 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int j = 0; j < 8; j++)
    {
        printf("%d ", arr[j]);
    }
}