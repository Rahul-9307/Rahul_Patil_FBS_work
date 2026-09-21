// Write a C program to input the base and height of a triangle and calculate its area.

#include <stdio.h>

int main(){
    int base,height,area;

    printf("Enter base : ");
    scanf("%d",&base);
     printf("Enter height : ");
    scanf("%d",&height);

    area = (base*height)/2;

    printf("Area of the triangle: %d\n", area);

    return 0;
}