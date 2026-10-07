// with parameter with return types

#include <stdio.h>

char isoperator(char operator, int n1, int n2);

int main(){
    int n1;
    int n2;
    char operator;

    printf("Enter Your no 1 : ");
    scanf("%d",&n1);

     printf("Enter Your operator (+,-,/,*,%%)  : ");
    scanf(" %c",&operator);


     printf("Enter Your no 2 : ");
    scanf("%d",&n2);

    char sum = isoperator(operator,n1,n2);
    
   if (sum == '+')
    {
        printf(" The no is %d %c %d = %d", n1,operator,n2,n1 + n2);
    }else if (sum == '-')
    {
        printf(" The no is %d %c %d = %d", n1,operator,n2,n1 - n2);
    }else if (sum == '*')
    {
        printf(" The no is %d %c %d = %d", n1,operator,n2,n1 * n2);
    }else if (sum == '/')
    {
        printf(" The no is %d %c %d = %d", n1,operator,n2,n1 / n2);
    }else if (sum == '%')
    {
        printf(" The no is %d %c %d = %d", n1,operator,n2,n1 % n2);
    }else
    {
        printf("You Enter wrong value");
    }
    

    return 0;
}
char isoperator(char operator, int n1, int n2){

    if (operator == '+')
    {
        return operator;
    }else if (operator == '-')
    {
       return operator;
    }else if (operator == '*')
    {
        return operator;
    }else if (operator == '/')
    {
       return operator;
    }else if (operator == '%')
    {
        return operator;
    }
}