// 1. Write a user define functions for ::
// mystrupper
#include <stdio.h>
#include <string.h>
void mystrupper(char*);
int main()
{

    char arr[] = "rahulpatiltheboss";

    mystrupper(arr);
    printf("The new arrry is %s",arr);

    return 0;
}

void mystrupper(char* arr){
    int i = 0;
    while (arr[i]!= '\0')
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] - 32;
        }
        
       i++;
    }
    
}