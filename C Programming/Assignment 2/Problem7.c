/* 7. Accept the age and check if the person is:
Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above) */

#include <stdio.h>

int main(){
    int age;
    printf("Enter Your age : ");
    scanf("%d",&age);
    
    if (age < 12)
    {
        printf("You are Child");
    }else if (age <= 19)
    {
        printf("You are Teenager");
    }else if ( age <= 59)
    {
        printf("You are Adult");
    }else
    {
        printf("You are Senior");
    }
    
    
    
    
    return 0;
}