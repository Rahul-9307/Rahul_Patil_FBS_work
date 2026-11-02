// Find sum of all numbers.

#include <stdio.h>

int funsum(int*);

int main(){
     int arr[]= {20,30,40,50,40,70};
     
    int sum =  funsum(arr);

    printf("%d",sum);

    return 0;
}

int funsum(int* arr){
    int sum = 0;
    for (int  i = 0; i < 6; i++)
    {
       sum = sum + arr[i];
    }
    return sum;
    
}