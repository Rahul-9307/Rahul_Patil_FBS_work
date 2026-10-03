// // 3. Write a program to find greatest of three numbers using nested if-else.


#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter Your 1st numbers ");
    scanf("%d", &num1);
    printf("Enter Your 2st numbers ");
    scanf("%d", &num2);
    printf("Enter Your s3t numbers ");
    scanf("%d", &num3);
    
    if (num1 >= num2)
    {
        if (num1 >= num3)
        {
            printf("The %d is Greater then %d and %d",num1 , num2,num3);
        }else
        {
            printf("The %d is Greater then %d and %d",num3 , num1,num2);
            /* code */
        }
        
        
    }else
    {
        if (num2 >= num1)
        {
            if ( num2 >= num3)
            {
                printf("The %d is Greater then %d and %d",num2 , num1,num3);
                /* code */
            }else
            {
                printf("The %d is Greater then %d and %d",num3 , num1,num2);
                /* code */
            }
            
            
        }

        
    }
    
    

    return 0;
}




            // #include <stdio.h>
            
            // int main()
            // {
            //     int num1, num2, num3;
            //     printf("Enter Your 1st numbers ");
            //     scanf("%d", &num1);
            //     printf("Enter Your 2st numbers ");
            //     scanf("%d", &num2);
            //     printf("Enter Your s3t numbers ");
            //     scanf("%d", &num3);
            
            //     if (num1 >= num2 && num1 >= num3 || num2 >= num1 && num2 >= num3)
            //     {
            //         if (num2 >= num1 && num2 >= num3)
            //         {
            //             printf("The %d is Greater then %d and %d", num2, num1, num3);
            //         }
            //         else
            //         {
            //             printf("The %d is Greater then %d and %d", num1, num2, num3);
            //             /* code */
            //         }
            //     }
            //     else
            //     {
            //         printf("The %d is Greater then %d and %d", num3, num2, num1);
            //     }
            
            //     return 0;