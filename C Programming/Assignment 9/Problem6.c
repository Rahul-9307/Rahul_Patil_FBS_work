// strcmp()	Compare two strings

#include <stdio.h>
#include <string.h>

int main(){
    char arr[] = "rhaul patil";
    char arr2[]= "Rahul patil";

    int cmp = strcmp(arr,arr2);
    printf("%d",cmp);
    return 0;
}