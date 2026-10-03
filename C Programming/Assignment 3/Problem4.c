/* Check the given number is prime or not.
Input: n = 7
Output: Prime */ 

#include <stdio.h>

int main(){
    int num = 9;
    // int i = 2;
    int flag = 0;

    // while (i < num)
    // {
    //     if (num % i == 0)
    //     {
    //         flag = 1;
    //         break;
    //     }
        
    //     i++;
    // }
    for (int  i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    
    if (flag == 0)
    {
        printf("The no %d is prime ",num);
    }else 
    {
        printf("The no %d is not prime",num);
    }
    
    
    
    return 0;
}