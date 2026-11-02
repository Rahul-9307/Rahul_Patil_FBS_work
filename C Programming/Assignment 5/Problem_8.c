/* 8. Print a pattern of stars in diamond shape
Input: n = 4
Output:

*
**
***
****
***
**
*

*/

#include <stdio.h>

int main(){
    for (int  i = 5; i >= 0; i--)
    {
        for (int  j = 5- i; j >= 0 ; j--)
        {
            printf("* ");
        }
        
        printf("\n");
    }
     for (int  l = 0; l <= 5; l++)
    {
        for (int  j = 4- l; j >= 0 ; j--)
        {
            printf("* ");
        }
        
        printf("\n");
    }
    
    
    return 0;
}