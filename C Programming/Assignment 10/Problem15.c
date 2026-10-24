// 1. Write a user define functions for ::
// mystrncat

#include <stdio.h>
#include <string.h>
char*  mystrncat(char* , char*,int);
int main(){
    char arr[20] = "Rahul";
    char arr2[] = "Patil";
    
   char* new =  mystrncat(arr,arr2,3);

   printf("The new arrry is %s",new);

   
    
    return 0;
}
char* mystrncat(char* arr,char* arr2,int n){
int i = 0;
int j = strlen(arr);

while (i < n )
{
    arr[i + j] = arr2[i];
    i++;
}
arr[i + j] = '\0';
return arr;

}