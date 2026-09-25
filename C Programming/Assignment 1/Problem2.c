// Write a program to check given 3 digit number is pallindrome or not.
#include <stdio.h>

int main()
{
    
    int a,b,c;


    printf("Enter Your numbers : ");
    scanf("%d",&a);

    b = a % 10;
    c = a / 100;

   if (b == c)
{
    printf("%d is a palindrome number.", a);
}
else
{
    printf("%d is not a palindrome number.", a);
}

    return 0;
}