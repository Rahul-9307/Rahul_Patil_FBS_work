// write to Print alt  odd no random arrey
// output is 11 5 21 

#include <stdio.h>
#include <string.h>

int main()
{
    int arr[] = {11, 2, 3,45,43,343,32, 4, 5, 6, 7, 8, 9,26,30};
    int flag = 0;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i <= size; i++)
    {
        if (arr[i] % 2 != 0)
        {
               if (flag % 2 == 0)
            {
                printf("%d ", arr[i]);
            }
            flag++;
           
        }
    }

        return 0;
    }