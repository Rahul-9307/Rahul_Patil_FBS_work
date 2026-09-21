//Write a C program to find the square and cube of a given number.

#include <stdio.h>
int main(){
    int number, cube ,square;
    printf("Enter you Square of tha no :");
    scanf("%d",&number);


    square = number*number;
    cube = number*number*number;
    
    printf("Square is %d \n",square);
    printf(" Cude is %d ",cube);

    return 0;
}