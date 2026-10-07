/* Sum of numbers in given range.
Find sum of numbers from start to end.
Input: start = 1, end = 5
Output: 15 */

#include <stdio.h>

int main(){
    int start = 1;
    int sum = 0;
    int end = 5;

    for (int start = 1; start <= end; start++)
    {
        sum = sum + start;
    }
    printf("The number star is %d and number end is  %d and The range start to end is %d ",start,end,sum);
    
    return 0;
}

// #include <stdio.h>

// int main(){
//     int sum = 0;
//     int start = 1;
//     int end = 5;
//     while (start <= end)
//     {
//         sum = sum + start;
//         start++;
//     }
//     printf("The sum is %d ",sum);
//     return 0;
// }