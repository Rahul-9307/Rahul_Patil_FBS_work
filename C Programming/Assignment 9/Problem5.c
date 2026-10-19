// strncat()	Join a limited number of characters
// strncat(destination, source, n)

#include <stdio.h>
#include <string.h>

int main(){
    char arr[200] = "rhaul pati ";
    char arr2[]= "The_boss";

    strncat(arr,arr2,4);
    printf("%s",arr);
    return 0;
}