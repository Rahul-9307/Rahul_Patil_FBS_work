
// 1. Write a user define functions for ::
// mystrcat

#include <stdio.h>
#include <string.h>
char*  mystrcat(char* , char* );
int main(){
    char arr[20] = "Rahul";
    char arr2[] = "Patil";
    
   char* new =  mystrcat(arr,arr2);

   printf("The new arrry is %s",new);

   
    
    return 0;
}

 char* mystrcat(char* arr, char* arr2){


  int i = 0;
  int j = strlen(arr);

  while (arr2[i] != '\0')
  {
     arr[j + i] = arr2[i];
      
    i++;
  }
  arr[i + j] = '\0';
    return arr;
    
}