// without parameter without return types
#include <stdio.h>
void add(); //declection function
int main(){
    
    add();   // calling function
    return 0;
}
void add(){

    int a; // defination function
    printf("Enter Your number : ");
    scanf("%d",&a);
    
    if(a % 2 == 0){
        printf("The no is %d even ",a);
    }else{
        printf("The no is %d odd ",a);
    }
}