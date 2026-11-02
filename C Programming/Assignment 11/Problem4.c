// 1. Write a user define functions for ::
// mystrncpy
#include <stdio.h>
char *mystrncpy(char *, char *, int);

int main()
{
    char arr1[] = "Rahul patil";
    char arr2[20];
    mystrncpy(arr2, arr1, 6);

    printf("%s", arr2);
    return 0;
}
char *mystrncpy(char *arr2, char *arr1, int number)
{
    int i = 0;
    while (i < number && arr1[i] != '\0')
    {
        arr2[i] = arr1[i];
        i++;
    }
    arr2[i] = '\0';
    return arr2;
}