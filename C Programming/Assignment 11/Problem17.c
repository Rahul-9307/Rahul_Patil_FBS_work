// 1. Write a user define functions for ::
// mystrncasecmp

#include <stdio.h>

int mystrcasecmp(char* str1, char* str2,int);

int main()
{
    char str1[] = "rsddfd";
    char str2[] = "rahul";

    int result = mystrcasecmp(str1, str2,2);

    if (result == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}

int mystrcasecmp(char* str1, char* str2,int n)
{
    int i = 0;
    while (i < n && str1[i] != '\0' && str2[i] != '\0')
    {
        char ch1 = str1[i];
        char ch2 = str2[i];

        if (str1[i] >= 'A' && str2[i] <= 'Z')
        {
            ch1 = ch1 + 32;
        }
        
         if (str1[i] >= 'A' && str2[i] <= 'Z')
        {
            ch2 = ch2 + 32;
        }

        if (ch1 != ch2)
        {
            return ch1 - ch2;
        }
        
        i++;
        
    }
    return 0;
}