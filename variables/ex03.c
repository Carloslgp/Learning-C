/*
    Write a program that reads a character of type char and then prints it between double 
    quotation marks. Thus, if the character read is the letter A, it should print "A".
*/

#include <stdio.h>

int main(){
    char c;
    printf("Type a character:\n");
    c = getchar();
    printf("The typed character is: \"%c\"\n", c);

    return 0;
}
    



