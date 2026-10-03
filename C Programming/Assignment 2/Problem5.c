/* 5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he
is a student and he has purchased more than 500 than discount is 20% otherwise
discount is 10%.But if he is not a student then if he has purchased more than 600
discount is 15% otherwise there is not discount. */

#include <stdio.h>

int main()
{
    int original_Price, New_Price, Discount;
    char Ans;
    printf("Enter Your Price : ");
    scanf("%d", &original_Price);
    printf("Are you Student: ");
    scanf(" %c", &Ans);

    if (Ans == 'y')
    {
        if (original_Price >= 500)
        {
            Discount = original_Price * 20 / 100;
           
        }
        else
        {
            Discount = original_Price * 10 / 100;
            
        }
    }
    else
    {
        if (original_Price >= 500)
        {
            Discount = original_Price * 15 / 100;
           
        }
        else
        {
           Discount = 0;
        }
    }
    New_Price = original_Price - Discount;
      printf("\nOriginal Price: %d\n", original_Price);
    printf("Discount: %d\n", Discount);
    printf("Final Price: %d\n", New_Price);

    return 0;
}