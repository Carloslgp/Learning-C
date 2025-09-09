/*
    Write a program to read a positive three-digit integer number. Then, calculate and 
    display the number formed by the digits of the read number in reverse order.
    Example:

    Read number = 123
    Generated number = 321
*/

#include <stdio.h>

int main(){
    int num, n1, n2, n3;

    printf("Type a positive three-digit number ex(123): ");
    scanf("%d", &num);



    n1 =  num / 100;
    n2 =  (num / 10) % 10 ;
    n3 =  num % 10;

    printf("Reversed: %d%d%d", n3, n2, n1 );





    return 0;
}




