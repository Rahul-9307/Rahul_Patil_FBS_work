/* 9. Reverse the given array. */

#include <stdio.h>
void rev_of_third(int *, int *);
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int crr[5];
    rev_of_third(arr, crr);

    return 0;
}

void rev_of_third(int *arr, int *crr)
{
    int j = 0;
    for (int i = 4; i >= 0; i--)
    {
        crr[j] = arr[i];
        j++;
    }

    printf("crr : ");
    for (int j = 0; j < 5; j++)
    {
        printf("%d ", crr[j]);
    }
}
