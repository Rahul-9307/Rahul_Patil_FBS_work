/* Accept a number and check if it is divisible by 3, 5, or both.
(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
both" or” Divisible by None”)*/
 #include <stdio.h>
 
 int main(){
    int num ;
    printf("Enter Your num : ");
    scanf("%d",&num);

    if (num % 5 == 0 && num % 3 == 0)
    {
        printf("The number %d  is divisible by 5 and 3",num);
    }else if (num % 3 == 0)
    {
       printf("The number %d  is divisible by 3",num);
    }else if (num % 5 == 0 )
    {
        printf("The number %d is divisible by  5 ",num);
    }else
    {
        printf("The number %d  is divisible by None",num);
    }
    
    

    
    return 0;
 }