// 2. Search the given number in array.

// Search the given number in array

#include <stdio.h>

int mySearch(int*, int);

int main()
{
    int arr[] = {20, 40, 45, 411, 70, 20, 630};

    int Search;

    printf("Enter Search number: ");
    scanf("%d", &Search);

    int num = mySearch(arr, Search);

    if (num != -1)
    {
        printf("The %d is found at index %d", Search, num);
    }
    else
    {
        printf("The %d is not found in the array", Search);
    }

    return 0;
}

int mySearch(int* arr, int search)
{
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == search)
        {
            return i;
        }
    }

    return -1;
}