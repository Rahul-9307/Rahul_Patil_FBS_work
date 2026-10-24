//  1. Write a user define functions for
// mystrncmp

#include <stdio.h>
int mystrncmp(char *, char *, int);

int main()
{
    char str1[] = "Hello";
    char str2[] = "Help";

    int result = mystrncmp(str1, str2, 2);

    if (result == 0)
        printf("Strings are equal");
    else if (result < 0)
        printf("First string is smaller");
    else
        printf("First string is greater");

    return 0;
}

int mystrncmp(char* str1, char* str2, int no)
{
    int i = 0;
    while (str1[i] == str2[i]  && i <= no)
    {
            i++;

        if (str1[i] > str2[i])
        {
            return 1;
        }else if (str1[i] < str2[i])
        {
            return -1;
        }else
        {
            return 0;
            
        }
        
        
    }
}
