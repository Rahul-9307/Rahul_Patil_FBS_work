// 1. Write a user define functions for ::
// b. mystrlen 

#include <stdio.h>

int mystrlen(char*);

int main(){
  char arr[] = "Raulpatil";
   int count =  mystrlen(arr);

   printf("The array count is %d",count);
    return 0;
}

int mystrlen(char* arr){
   
    int count = 0;
    while (arr[count]!= '\0')
    {
        count++;
      
    }
    return count;
    
}