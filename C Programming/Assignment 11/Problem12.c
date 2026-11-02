// 1. Write a user define functions for ::
// mystrchr

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *mystrchr(char *, char);
int main()
{
    char str[] = "programming";

    char *ptr = mystrchr(str, 'o');

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
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            return &str[i];
        }
        i++;
    }

    return NULL;
}
