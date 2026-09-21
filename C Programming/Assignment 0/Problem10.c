// Write a C program to input marks of five subjects, find the total marks, and calculate the percentage.

# include <stdio.h>
int main(){
    float math,science,english,marathi,hindi,total,percentage;
   int sum;
    
   printf("Enter marks for Mathematics: ");
    scanf("%f", &math);

    printf("Enter marks for Science: ");
    scanf("%f", &science);

    printf("Enter marks for English: ");
    scanf("%f", &english);

    printf("Enter marks for Marathi: ");
    scanf("%f", &marathi);

    printf("Enter marks for Hindi: ");
    scanf("%f", &hindi);
    
    total = math + science + english + marathi + hindi;
    
    percentage = (total/500)*100;

     sum = total;
    

    printf("Total Marks: %d\n", sum);
    printf("Percentage: %.2f %%\n", percentage);

    return 0;
}

