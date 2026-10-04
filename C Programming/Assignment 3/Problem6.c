/* Check the given number is Perfect number or not.
Input: n = 28
Output: Perfect */

#include <stdio.h>

int main(){
    int num;
    int sum = 0;
    printf("Enter Your number : ");
    scanf("%d",&num);

    for (int  i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
        
    }
    
if (num <= 0)
{
    printf("Enter a positive number");
}else if (num == sum)
    {
       printf("The number is Perfect");
    }else
    {
        printf("The number is not Perfect");
    }
    
    


    

    return 0;
}