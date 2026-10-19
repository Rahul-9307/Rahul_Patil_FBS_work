// 1. Write a user define functions for ::
// a. mystrcpy

#include <stdio.h>
#include <string.h>

char *mystrcpy(char *, char *);

int main()
{
    char arr[] = "Rahul_patil";
    char copy[20];

    mystrcpy(copy, arr);

    printf("The copy arr is %s", copy);
    return 0;
}

char *mystrcpy(char *copy, char *arr)
{
    int i = 0;
    while (arr[i] != '\0')
    {
        copy[i] = arr[i];
        i++;
    }
    copy[i] = '\0';
    return copy;
}