/* Find factorial of given number.
Input: n = 5
Output: 120 */

// #include <stdio.h>

// int main(){

//     int num;
//     int sum = 1;

//     printf("Enter Your number : ");
//     scanf("%d",&num);



//     for (int i = num; num > 1; num--)
//     {
//         sum = sum * num;
//     }
//     printf("%d",sum);
    

//     return 0;
// }

#include <stdio.h>

int main(){

    int num;
    int sum = 1;

    printf("Enter Your number : ");
    scanf("%d",&num);



    for (int i = 1; i <= num; i++)
    {
        sum = sum * i;
    }
    printf("%d",sum);
    

    return 0;
}