//  1. Write a user define functions for ::
// mystrrev

#include <stdio.h>
#include <string.h>
char *mystrrev(char *);
int main()
{
    char arr[] = "Rahul";
    mystrrev(arr);

    printf("The revers order is %s", arr);
    return 0;
}

char *mystrrev(char *arr)
{

    int i = 0;
    int j = strlen(arr) - 1;
    while (i >= 0)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j++;
        i--;
    }

    return arr;
}