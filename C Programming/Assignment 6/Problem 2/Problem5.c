// Write a C program to find the reverse of a number using a function.

#include <stdio.h>
int isreverse(int);

int main(){
    int number = 587;
    int x = isreverse(number);
    printf("%d",x);
    return 0;
}

int isreverse(int number){
    int rem;
    int sum = 0;
    while (number > 0)
    {
        rem = number % 10;
        sum = sum * 10 +rem;
        number = number / 10;
    }
    return sum;
}