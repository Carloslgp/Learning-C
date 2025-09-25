/*
    Write a program that reads 10 numbers and prints the smallest value read and the largest value read.
*/
#include <stdio.h>
#include <float.h>

int main(){
    double number, largest = -DBL_MAX, smallest = DBL_MAX; 
    for(int i = 0; i < 10; i++){

        printf("Type a number: ");
        scanf("%lf", &number);

        if(number < smallest){
            smallest = number;
        }
        
        if(number > largest){
            largest = number;
        }


    }

    printf("Largest: %.2lf \n", largest);
    printf("Smallest: %.2lf \n", smallest);

    return 0;
}





