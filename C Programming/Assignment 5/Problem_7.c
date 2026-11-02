/* 7. Print a Floyd’s triangle pattern
Input: n = 4
Output:
1
2 3
4 5 6
7 8 9 10
*/

#include <stdio.h>

int main(){
    int num = 1;
    for (int  i = 5; i > 0; i--)
    {
        for (int  j = 5 - i ; j > 0; j--)
        {
            printf("%d ",num);
            num++;
        }
        
        printf("\n");
    }
    
    return 0;
}

