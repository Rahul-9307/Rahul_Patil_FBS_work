//Write a C program to calculate the simple interest using the formula: SI = (P × R × T) / 100
#include <stdio.h>

int main(){
    int P,R,T;
    float SI;
    printf("Enter You P :");
    scanf("%d",&P);
    printf("Enter You R :");
    scanf("%d",&R);
    printf("Enter You T :");
    scanf("%d",&T);

    SI = (P * R * T) / 100;

    printf("simple interest is : %.2f", SI);


    return 0;
}