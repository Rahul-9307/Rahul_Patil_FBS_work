// Write a C program to input five numbers and find their average.

#include <stdio.h>

int main(){
    int sum,num1,num2,num3,num4,num5;
    float avg;
   

    printf("Enter your 5 numbers : ");
    scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);

    sum = num1+num2+num3+num4+num5;
    avg = sum/5.0;

    printf("This is you avg in 5 no : %.2f ",avg);

    return 0;
}