/* Print table for given number.
Input: n = 5
Output: 5 10 15 20 25 30 35 40 45 50 */



#include <stdio.h>

int main(){
    int n = 5;
    while (n <= 50)
    {
      
        printf("%d " ,n);
        n = n + 5;
        
    }
    return 0;
}




        
        // #include <stdio.h>
        
        // int main(){
        //     int n = 5 ;
        //     int i = n;
        
        //     for (int i = 1; i <= 50; i++)
        //     {if (i % 5 == 0)
        //     {
        //         printf("%d ", i);
        //         /* code */
        //     }
            
        //     }
            
        //     return 0;
        // }