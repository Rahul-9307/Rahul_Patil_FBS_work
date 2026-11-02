// Find minimum and maximum number in array. 

#include <stdio.h>

int funmaxi(int*);
int funmin(int* );

int main(){
    int arr[]= {20,30,40,50,40,70};

    int max = funmaxi(arr);
    int min = funmin(arr);
    printf(" The max number is :  %d \n",arr[max]);
    printf(" The min number is :  %d",arr[min]);
    return 0;
}

int funmaxi(int* arr){
    int temp = 0;
    for (int i = 1; i < 6; i++)
    {
        if (arr[i] > arr[temp])
        {
           temp = i;
        }
        
    }
    return temp;
    

}
int funmin(int* arr){
    int temp = 0;
    for (int  i = 0; i < 6; i++)
    {
       if (arr[i] < arr[temp])
       {
        temp = i;
       }
       
    }
    return temp;
    
}