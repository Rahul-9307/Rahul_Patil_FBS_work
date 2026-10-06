// Function Type 1 = Without Parameter and Without Return Value.
#include <stdio.h>
void palindrome();

int main()
{
    palindrome();

    return 0;
}

    void palindrome()
    {

        int a, b, c;

        printf("Enter Your numbers : ");
        scanf("%d", &a);

        b = a % 10;
        c = a / 100;

        if (b == c)
        {
            printf("%d is a palindrome number.", a);
        }
        else
        {
            printf("%d is not a palindrome number.", a);
        }
    }
