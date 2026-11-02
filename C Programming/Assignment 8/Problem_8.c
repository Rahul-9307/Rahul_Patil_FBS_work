/* 8. Merge two arrays */

#include <stdio.h>
void add_of_third(int *, int *, int *);
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int brr[5] = {10, 20, 30, 40, 50};
    int crr[10];
    add_of_third(arr, brr, crr);

    return 0;
}

void add_of_third(int *arr, int *brr, int *crr)
{
    for (int i = 0; i < 5; i++)
    {
        crr[i] = arr[i];
    }
    int j = 0;
    for (int i = 5; i < 10; i++)
    {
        crr[i] = brr[j];
        j++;
    }
    printf("crr : ");
    for (int j = 0; j < 11; j++)
    {
        printf("%d ", crr[j]);
    }
}
