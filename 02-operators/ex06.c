/*
    Write a program that reads an integer number and displays the multiplication and 
    the division of this number by two (use bit-shift operators).
*/

#include <stdio.h>

int main(){
    int num;
    

    printf("Enter an integer to multiply and divide by 2: ");
    scanf("%d", &num);

    printf("%d * 2 = %d \n", num, num << 1);
    printf("%d / 2 = %d \n",num,  num >> 1);


    return 0;
}


