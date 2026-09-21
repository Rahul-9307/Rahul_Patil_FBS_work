// Write a C program to convert given minutes into hours and remaining minutes.
#include <stdio.h>

int main(){
    int minutes,hours;

    printf("Enter minutes a :");
    scanf("%d",&minutes);

    hours = minutes/60;
    minutes = minutes % 60;

    printf("The hours is %d and minutes is %d",hours,minutes);

    return 0;
}