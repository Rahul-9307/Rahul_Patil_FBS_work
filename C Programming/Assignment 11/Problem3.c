// 1. Write a user define functions for ::
// c. mystrcmp

#include <stdio.h>
#include <string.h>
int mystrcmp(char *, char *);
int main()
{
    char arr[] = "az";
    char newarr[] = "ba";

    int result = mystrcmp(arr, newarr);

    printf("%d", result);

    return 0;
}

int mystrcmp(char *arr, char *newarr)
{
    int i = 0;
   

    while (arr[i] == newarr[i] && arr[i]!= '\0')
    {
        
        i++;
    }
    if (arr[i] > newarr[i])
        {
            return 1;
        }
        else if (arr[i] < newarr[i])
        {
            return -1;
        }
        else
        {
           return 0;
        }

  
}