// Print alternate elements in array.

#include <stdio.h>
void altprint(int* );
int main(){
    int arr[]= {1,7,8,5,96,75,7,5,8,4,6};
    altprint(arr);
    return 0;
}
void altprint(int* arr){
    for (int i = 0; i < 11; )
    {
            printf("%d ",arr[i]);
        i = i + 2 ;
    }
    
}