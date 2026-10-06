// Function Type 1 = Without Parameter and Without Return Value.

// Write a program to check whether a given character is uppercase or lowercase.

#include <stdio.h>
void letter();

int main()
{
    letter();
    return 0;
}

void letter(){
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
}