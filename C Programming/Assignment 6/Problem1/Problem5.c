// Function Type 1 = Without Parameter and Without Return Value.

// 5. Write a program to check whether a person is eligible to vote (age ≥ 18).
#include <stdio.h>

void eligible();

int main(){
    
    eligible();
    return 0;
}
void eligible(){

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
}