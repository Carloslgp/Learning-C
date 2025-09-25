/*
    Write a program that reads a certain number of values, prints the largest one and how many times 
    the largest number was read. The quantity of numbers to be read must be provided by the use
*/

#include <stdio.h>
#include <float.h>

int main(){

    int largestCounter = 1, timesToRepeat;
    double num, largest = -DBL_MAX;

    printf("How many numbers you want to insert? ");
    scanf("%d", &timesToRepeat);
    
    for(int i = 1; i <= timesToRepeat; i++){
        printf("Type a number: ");
        scanf("%lf", &num);

        if(num == largest){
            largestCounter++;
        }

        if(num > largest){
            largest = num;
            largestCounter = 1;
        }



    }


    printf("The largest number is %.2lf and it was read %d times \n", largest, largestCounter);



    return 0;
}



