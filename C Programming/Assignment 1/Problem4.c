// Write a program to check whether a given character is a vowel or consonant.
#include <stdio.h>

int main(){
    char a;
     printf("Enter your character : ");
     scanf("%c",&a);

    if (a == 'a'|| a == 'i' || a == 'e' || a == 'o'|| a == 'u' )
    {
       printf("The character is vowel");
    }else
    {
        printf("The character is consonant");
    }
    
    
    return 0;
}