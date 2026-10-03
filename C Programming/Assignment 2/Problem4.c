/* Ask the user to enter marks.
Then show the result based on these rules:
If marks are more than 75 → show "Distinction"
If marks are more than 65 → show "First Class"
If marks are more than 55 → show "Second Class"
If marks are 40 or more → show "Pass Class"
If marks are less than 40 → show "Fail" */


#include <stdio.h>

int main(){
    int Marks;
    printf("Enter your marks: ");
    scanf("%d",&Marks);

    if (75 <= Marks && Marks <= 100 )
    {
        printf("Distinction");
    }else if (65 <= Marks && Marks <= 75 )  
    {
        printf(" First Class");
    }else if (55 <= Marks && Marks <= 65)
    {
        printf(" Second Class");
    }else if (40 <= Marks && Marks <= 55)
    {
         printf(" Pass ");
    }else
    {
        printf("Fail");
    }
    
    
    
    
    
    return 0;
}