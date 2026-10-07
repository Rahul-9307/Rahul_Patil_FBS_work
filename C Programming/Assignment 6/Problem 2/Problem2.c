// without parameter without return types
/* Accept three sides of a triangle from the user and determine whether the triangle is
equilateral, isosceles, or scalene.*/

#include <stdio.h>
void check(int side1,int side2,int side3);

int main(){
    int side1,side2,side3;
    printf("Enter your 1st side : ");
    scanf("%d",&side1);
    printf("Enter your 2st side : ");
    scanf("%d",&side2);
    printf("Enter your 3st side : ");
    scanf("%d",&side3);
    check(side1,side2,side3);
    return 0;
}

void check(int side1,int side2, int side3){

    if (side1 == side2 && side2 == side3)
    {
        
        printf("The triangle is Equilateral");
            
    }else if (side1 == side2 || side1 == side3 || side2 == side3)
    {
        printf("The triangle is Isosceles");
    }
    else
    {
        printf("The triangle is Scalene");
    }
}