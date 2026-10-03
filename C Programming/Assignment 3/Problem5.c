/* Check the given number is Armstrong number or not..
Input: n = 153
Output: Armstrong */

// #include <stdio.h>

// int main(){
//     int num = 158,rem;
//     int sum = 0;
//     int i = 1;
//     int temp = num;
    
//    while (i <= num)
//     {
//         rem = num  % 10;//5
//         sum = sum + (rem * rem * rem);

//         num = num / 10;

//     }
   
//    if (num = temp)
//    {
//     printf("The no is armbstrong");
//    }else
//    {
//     printf("The is not armbstrong");
//    }
   
   


//     return 0;
// }

#include <stdio.h>

int main(){
    int num = 234;
    int sum = 0;
    int count = 0;
    int i = 1;

    while (num >= 0);
    {
        count = count+ 1;
        num = num / 10;
        
    }
    printf("%d",count);
    
    return 0;
}