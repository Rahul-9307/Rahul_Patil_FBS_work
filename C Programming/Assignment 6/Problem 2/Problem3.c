/* 1 Print numbers from 1 to 10
Output: 1 2 3 4 5 6 7 8 9 10 */


#include <stdio.h>
int number(int num);

int main(){
    int num = 10;
    
    int total_number = number(num);
    printf("%d",total_number);
    
    
    return 0;
}

int number(int num){
    for (int  i = 1; i <= 10; i++)
    {
printf("%d ",i);
    }
    return num;
}