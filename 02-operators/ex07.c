/*
    Write a program that reads an integer number and displays its bitwise complement.
*/


#include <stdio.h>

int main(){
    int num;
    

    printf("Enter an integer to calculate its bitwise complement: ");
    scanf("%d", &num);

    printf("The bitwise complement of %d is %d \n", num, ~num);


    return 0;
}


