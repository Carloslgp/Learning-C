/*
    Write a program that converts an uppercase letter into a lowercase letter.    
    Use the ASCII table for this.
*/

#include <stdio.h>



int main(){
    char character;


    printf("Type an uppercase letter: ");
    character = getchar();

    printf("%c\n", character);
    character += 32;
    printf("%c", character);




    return 0;
}




