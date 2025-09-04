/*
    Write a program that asks the user to enter the values for day, 
    month, and year (integers). Then, print the values separated by a slash (/).
*/


#include <stdio.h>

int main(){
    int dia, mes, ano;


    printf("Type the date (ex:02/12/2005): \n");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("%d/%d/%d\n", dia, mes, ano);




    return 0;
}



