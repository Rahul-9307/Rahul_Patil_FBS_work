// Accept array and print only prime numbers of array.
#include <stdio.h>
void isprime(int *);
int main()
{
    printf("start \n");
    int arr[] = {7, 40, 7, 3, 86, 59, 74, 52, 75};
    isprime(arr);
    return 0;
}
void isprime(int *arr){
    for (int  i = 0; i < 9; i++)
    {
        int flag = 0;
        for (int  j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                flag = 1;
                break;
            }
            
        }
        if (flag == 0 && arr[i] > 1)
        {
          printf("%d ",arr[i]);
        }
        
        
    }
    
}