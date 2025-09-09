/*
    Write a program that reads two integer numbers and displays the left 
    shift and the right shift of the first number by the second.
*/

#include <stdio.h>

int main(){
    int num1;
    int num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    printf("Right shift: %d\n", num1 >> num2);
    printf("Left shift: %d\n", num1 << num2);



}


