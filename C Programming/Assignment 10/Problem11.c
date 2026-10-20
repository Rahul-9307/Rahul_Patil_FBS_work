
// 1. Write a user define functions for ::
// mystrrcat

#include <stdio.h>

char* mystrcat(char*, char*, int);

int main()
{
    char arr[20] = "Rahul";
    char arr2[] = "Patil";

    char* new = mystrcat(arr, arr2, 4);

    printf("The new array is %s", new);

    return 0;
}

char* mystrcat(char* arr, char* arr2, int n)
{
    int i = 0;
    int j = 0;

    while (arr[i] != '\0')
    {
        i++;
    }

    while (arr2[j] != '\0' && j < n)
    {
        arr[i] = arr2[j];
        i++;
        j++;
    }

    arr[i] = '\0';

    return arr;
}