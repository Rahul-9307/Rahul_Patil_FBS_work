// input two integers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main(){
    int a , b,e,d,c;
    float f;
    printf("Enter your 1st no : ");
    scanf("%d",&a);
    printf("Enter your 2nd no : ");
    scanf("%d",&b);

    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;


    printf("%d  +  %d = %d \n", a,b,c);
    printf("%d  -  %d = %d \n", a,b,d);
    printf("%d  *  %d = %d \n", a,b,e);
    printf("%d  /  %d = %.2f \n", a,b,f);


    return 0;
}