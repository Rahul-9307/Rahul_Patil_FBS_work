// strncmp()	Compare a limited number of characters

#include <stdio.h>
#include <string.h>

int main(){
    char arr[] = "rahul patil";
    char arr2[]= "rahul patil";

    int cmp = strncmp(arr,arr2,5);
    printf("%d",cmp);
    return 0;
}