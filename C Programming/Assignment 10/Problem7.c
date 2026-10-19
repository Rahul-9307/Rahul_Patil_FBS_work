// 1. Write a user define functions for ::
// mystrlower
#include <stdio.h>
char* mystrlower(char* );
int main(){
    char arr[] = "RAHULPATILTHEBOSS";
    mystrlower(arr);
    printf("The converted string is %s",arr);
    return 0;
}

char* mystrlower(char* arr){
    int i = 0;
    while ( arr[i] != '\0')
    {
        if (arr[i]>= 'A' && arr[i] <= 'Z')
        {
            arr[i] = arr[i] + 32;
            /* code */
        }
        
        i++;
    }
    return arr;
    
}