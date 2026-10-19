// strchr()	Find the first occurrence of a character 

#include <stdio.h>
#include <string.h>

int main(){
    char arr[] = "rahul patil";
   

    char *cmp = strchr(arr,'h');
    printf("%s",cmp);
    return 0;
}