/* Check the given number is Palindrome number or not.
Input: n = 121
Output: Palindrome 8*/

#include <stdio.h>

int main(){
    int num,new_num;
    int rev = 0;

    printf("Enter you number : ");
    scanf("%d",&num);
    int tem_num = num;

   while (num > 0)
   {
    new_num = num % 10;
    rev = rev * 10 + new_num;
    num = num / 10;
   }
   
   

if (tem_num == rev)
{
    printf("The number is palindrome");
}else
{
    printf("The number is not palindrome");
}




    return 0;
}