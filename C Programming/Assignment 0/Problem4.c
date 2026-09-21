//Write a C program to swap two numbers using a temporary third variable.

#include <stdio.h>

int main(){
    int a,b,c;
    
    a = 10;
    b = 20;
    c = a;
    a = b;
    b = c;
     printf("a is value of: %d\nb is value of: %d\n",a,b);

    return 0;
}