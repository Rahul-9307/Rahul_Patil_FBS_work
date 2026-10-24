//  1. Write a user define functions for ::
// mystrnstr

#include <stdio.h>

char* mystrstr(char* , char* ,int);

int main()
{
    char str[] = "the string is Rahul patil";
    char sub[] = "Rahul";

    char* result = mystrstr(str, sub,30);

    if (result != NULL)
        printf("Substring found: %s\n", result);
    else
        printf("Substring not found\n");

    return 0;
}

char* mystrstr(char* str,char* sub,int n){
    int i = 0;
    
    while ( i < n && str[i] != '\0')
    {
        int j = 0;
       while (str[i] != '\0' && str[i + j] == sub[j])
       {
        j++;
       }

       while (sub[j] == '\0')
       {
        return &str[i];
       }

       i++;
       
       
    }
     if (sub[0] == '\0')
    {
        return str;
    }

    return NULL;
    
}