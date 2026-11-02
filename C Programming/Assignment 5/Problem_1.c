/*1. Print a solid square pattern
Input: n = 4
Output:

* * * *
* * * *
* * * *
* * * *
*/

#include <stdio.h>

int main(){

    int num;
    printf("Enter your number : ");
    scanf("%d",&num); 
    for (int  i = 1; i < num; i++)
    {
        for (int j = 1; j < num; j++)
        {
          printf("* ");
        }
        printf("\n");
        
    }
    
    return 0;
}