/*
    Let a and b be the legs of a right triangle whose hypotenuse h is obtained through the equation:
    h = sqrt(a^2 + b^2)
    Write a program that reads the values of a and b, and calculates the value of the hypotenuse using the 
    given formula. Print the result.
*/



#include <stdio.h>
#include <math.h>

int main(){

    double a, b, hypotenuse;

    printf("Type the value of a: \n");
    scanf("%lf", &a);
    printf("Type the value of b: \n");
    scanf("%lf", &b);


    hypotenuse = sqrt(a*a + b*b);
    printf("The hypotenuse is: %.2f", hypotenuse);


    return 0;
}

