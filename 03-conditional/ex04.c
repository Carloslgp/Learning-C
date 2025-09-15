/*
    Write a program that reads the coefficients of a quadratic equation, then calculates and 
    displays its roots, remembering that the roots are calculated as:

    x = (-b ± sqrt(Δ)) / (2a), where Δ = b² - 4ac

    If a = 0, print the message: "Not a quadratic equation".

    If Δ < 0: no real roots. Print "No real roots".

    If Δ = 0: one real root exists. Print the root and the message "Single root".

    If Δ > 0: two real roots exist. Print the roots.
*/

#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, x1, x2;


    printf("Quadratic equation solver!!\n");
    printf("Enter the number of a: \n");
    scanf("%lf", &a);
    printf("Enter the number of b: \n");
    scanf("%lf", &b);
    printf("Enter the number of c: \n");
    scanf("%lf", &c);
    
    if(a != 0){

        double delta = (b * b) - (4 * a * c);

        if(delta < 0){

            printf("No real roots!\n");

        }else if(delta == 0){
            x1 = ( -b ) / (2 * a);
            printf("Single root: %.2lf\n", x1);

        }else{
            x1 = ( -b + sqrt(delta)) / (2 * a);
            x2 = ( -b - sqrt(delta)) / (2 * a);
            printf("First root: %.2lf\n", x1);
            printf("Second root: %.2lf\n", x2);

        }

    }else{
        printf("Not a quadratic equation!\n");
    }

    return 0;

}

