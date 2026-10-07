// Write a C program to find the sum of three numbers using a function.

#include <stdio.h>
int sum(int);

int main(){
    int number = 526;
    
    int x = sum(number);
    printf("%d",x);
    return 0;
}

int sum(int number){
    
    int rem;
    int res = 0;
    while (number > 0)
    {
        rem = number % 10;
        res = res + rem; 
        number = number / 10;
    }
    return res;
    
}