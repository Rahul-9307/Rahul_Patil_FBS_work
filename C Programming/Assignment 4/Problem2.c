// Print prime numbers in the given range 1 to n.
#include <stdio.h>

int main(){
    int n;
    printf("Enter Your no = ");
    scanf("%d",&n);

    for (int k = 2; k < n; k++)
    {

    int number = k;
    int flag = 0;
    int i = 2;
    while (i < number)
    {
        if (number % i == 0)
        {
           flag = 1;
           break;
        }
        i++;
        
    }
    if (flag == 0)
    {
        printf("%d \n",k);
    }
    
    
}
    
    return 0;
}