// Write a program to check whether a given character is a vowel or consonant.
#include <stdio.h>

int main(){
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
    
    
    return 0;
}