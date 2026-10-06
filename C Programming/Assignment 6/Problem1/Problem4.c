// Function Type 1 = Without Parameter and Without Return Value.


// Write a program to check whether a given character is a vowel or consonant.
#include <stdio.h>

void vowel_consonent();

int main(){
    
    vowel_consonent();
    return 0;
}

void vowel_consonent(){


char character;
 printf("Enter your character : ");
 scanf("%c",&character);

if (character == 'a'|| character == 'i' || character == 'e' || character == 'o'|| character == 'u'|| character == 'A'|| character == 'E' || character == 'I' || character == 'O'|| character == 'U' )
{
   printf("The character is vowel");
}
else
{
    printf("The character is consonant");
}
}