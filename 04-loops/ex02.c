/*
    Write a program that reads a positive integer N and then prints N lines of the so-called Floyd’s triangle.
*/

#include <stdio.h>

int main(){
    int num, cont = 1;


    printf("Enter an integer number: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        for(int j = 0; j <= i; j++){
            printf("%d ", cont);
            cont++;
        } 
        printf("\n");

    } 

    return 0;
}


