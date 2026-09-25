// 5. Write a program to check whether a person is eligible to vote (age ≥ 18).
#include <stdio.h>

int main(){
    int age;
    printf("Enter you age : ");
    scanf("%d",&age);
    if (age >= 18)
    {
        printf("You are eligible to vote");
    }else
    {
        printf("You did not  eligible to  vote");
    }
    
    
    return 0;
}