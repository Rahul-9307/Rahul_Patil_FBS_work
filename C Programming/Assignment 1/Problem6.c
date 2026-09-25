// Write a program to check whether a given character is uppercase or lowercase.

#include <stdio.h>

int main()
{
     char a ;
    
    printf("Enter you character : ");
    scanf("%c", &a);

    if (a >= 65 && a <= 90)
    {
        printf("The letter %C is UPPERCASE ",a);
    }
    else
    {
        printf("The letter %C is lowercase ",a);
    }

    return 0;
}