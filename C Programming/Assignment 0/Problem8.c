// Write a C program to input the length and width of a rectangle and find its perimeter.

#include <stdio.h>
int main(){

    int length,width,perimeter;
    printf("Enter length : ");
    scanf("%d",&length);

    printf("Enter width : ");
    scanf("%d",&width);
   
    perimeter = 2*(length + width);

    printf("Perimeter of the rectangle: %d\n",perimeter);

    return 0;

}