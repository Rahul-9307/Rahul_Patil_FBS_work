// 1. Write a user define functions for ::
// mystrrchr

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *mystrchr(char *, char);
int main()
{
    char str[] = "programming";

    char *ptr = mystrchr(str, 'm');

    if (ptr != NULL)
    {
        printf("%s", ptr);
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}
char *mystrchr(char *str, char ch)
{
    int len = strlen(str) - 1;
    int i = len;

    while (i >= 0)
    {
        if (str[i] == ch)
        {
            return &str[i];
        }
        i--;
    }

    return NULL;
}
