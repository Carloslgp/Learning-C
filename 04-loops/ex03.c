/*
    Write a program that receives an integer greater than 1 
    and checks whether the given number is prime or not.
*/

#include <stdio.h>

int main(){

    int number;
    int isPrime = 1;


    printf("Enter a positive integer: ");
    scanf("%d", &number);

    for(int i = 2; i < number; i++ ){
        if(number % i == 0){
            isPrime = 0;
            break;
        } 
    }

    if(isPrime){
        printf("The numer is prime. \n");
    }else{
        printf("The number isnt prime \n");
    }



    return 0;
}

