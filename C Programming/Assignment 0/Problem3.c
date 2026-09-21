//Write a C program to convert temperature from Celsius to Fahrenheit using the
// formula: F = (C *9/5) + 32

#include <stdio.h>
int main(){
    int C, F;

    printf("Enter value of Celsisu:= ");
    scanf("%d",&C);
    F = (C*9/5)+32;

    printf("The value in Fahrenheit is : %d", F);

    return 0;
}