//  3	strncpy()	Copy a limited number of characters
#include <stdio.h>
#include <string.h>

int main(){
    char arr[]= "Rahul patil";
    char copy[10];
    strncpy(copy,arr,(sizeof(arr)-5));
    copy[sizeof(arr)-5]='\0';
     printf("Copy a limited number of characters  is : %s",copy );
    return 0;
}