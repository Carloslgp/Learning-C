/*
    Write a program that reads two integer numbers and displays the result of the 
    bitwise operations "exclusive or", "or", and "and" between them.
*/

#include <stdio.h>

int main(){
    int num1;
    int num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    printf("Bitwise XOR: %d\n", num1 ^ num2);
    printf("Bitwise OR : %d\n", num1 | num2);
    printf("Bitwise AND: %d\n", num1 & num2);

    return 0;
}

