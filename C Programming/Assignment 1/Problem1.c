// 1. Write a program to check whether a number is even or odd.

#include <stdio.h>

int main(){
    int a;
    printf("Enter Your number : ");
    scanf("%d",&a);

    if(a%2 == 0){
        printf("The no is %d even ",a);
    }else{
        printf("The no is %d odd ",a);
    }


    return 0;
}