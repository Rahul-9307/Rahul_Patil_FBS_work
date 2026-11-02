// strcat()	Join two strings

#include <stdio.h>
#include <string.h>

int main()
{
    char arr[20] = "Rahul ";
    char arr2[] = "patil";
    strcat(arr, arr2);
    printf("The final arr is %s", arr);
    return 0;
}

