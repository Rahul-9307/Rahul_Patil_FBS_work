// Write a C program to reverse a three-digit number.
#include <stdio.h>

int main(){

    int a,b,c,d,e;
    a = 365;
    b = a % 10 ;
    c = a/10;
    d = c%10;
    e = c/10;

    printf("%d ", b);
    printf("%d ", d);
    printf("%d ", e);

    return 0;
}