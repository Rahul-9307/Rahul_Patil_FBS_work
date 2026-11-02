/* 4. pyramid pattern
Input: n = 5
Output:
*
**
***
****
*****
*/
#include <stdio.h>

int main(){
    int num;
    printf("Enter your number : ");
    scanf("%d",&num);
    for (int   i = num; i > 0; i--)
    {
        for (int  j = 1 -i ; j < num; j++)
        {
            printf(" ");
           
        }
        for (int  k = i; k < num; k++)
        {
            printf("* ");
        }
        
        
        printf("\n");
    }
    
    return 0;
}