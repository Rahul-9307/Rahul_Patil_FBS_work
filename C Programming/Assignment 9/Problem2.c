// strcpy()	Copy a string

#include <stdio.h>
#include <string.h>
int main(){

    char arr[] = "Rahul Patil";
    char dup[sizeof(arr)];
    
    strcpy(dup,arr); 
    
    printf("The copy the orginal arr is : %s\n", dup);
    return 0;
}
