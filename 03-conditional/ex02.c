/*
    Write a program that reads three positive integers and calculates one of the following 
    averages according to a numeric value entered by the user, as shown in the table below:

    Table:
    1 – Geometric mean: (x * y * z)^(1/3)
    2 – Weighted mean: (x + 2y + 3z) / 6
    3 – Harmonic mean: 1 / (1/x + 1/y + 1/z)
    4 – Arithmetic mean: (x + y + z) / 3
*/

#include <stdio.h>
#include <math.h>

int main(){
    int n1,n2,n3, choice;
    double result;
    
    printf("1 - Geometric mean \n");
    printf("2 - Weighted mean \n");
    printf("3 - Harmonic mean \n");
    printf("4 - Arithmetic mean \n");
    printf("Enter the number for the operation: ");
    scanf("%d", &choice);

    if(choice <= 4 && choice >= 1){
        printf("Enter the first number: ");
        scanf("%d", &n1);
        printf("Enter the second number: ");
        scanf("%d", &n2);
        printf("Enter the third number: ");
        scanf("%d", &n3);
    }

    
    switch (choice)
    {
    case 1:
        result = pow(n1 * n2 * n3, 1.0/3.0);
        printf("The result from the geometric mean is: %.2f \n", result);
        break;
    case 2:
        result = (n1 + n2 * 2 + n3 * 3)/6.0;
        printf("The result from the weighted mean is: %.2f \n", result);
        break;
    case 3:
        result = 3.0 /(1.0 / n1 + 1.0 / n2 + 1.0 / n3);
        printf("The result from the harmonic mean is: %.2f \n", result);
        break;
    case 4:
        result = (n1 + n2 + n3) / 3.0;
        printf("The result from the arithmetic mean is: %.2f \n", result);
        break;
    default:
        printf("Thanks for using!\n");
        break;
    }

    return 0;

}   




