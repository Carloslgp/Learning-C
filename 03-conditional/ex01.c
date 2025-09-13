/*
    A company sells the same product to four different states. Each state has a 
    different tax rate on the product. Write a program that asks the user for the value of the 
    product and the destination state, and returns the final price of the product with the 
    corresponding tax added. If the entered state is not valid, display an error message.

    Table:
    State – Tax
    MG – 7%
    SP – 12%
    RJ – 15%
    MS – 8%
*/
#include <stdio.h>
#include <string.h>

int main(){
    double price;
    char state[3];
    printf("Entere the price of the product: R$");
    scanf("%lf", &price);
    printf("Enter the delivery state: ");
    scanf("%2s", state);

    if(strcmp(state, "MG") == 0){
        printf("Final price: R$%.2lf\n", price * 1.07);
    }
    else if(strcmp(state, "SP") == 0){
        printf("Final price: R$%.2lf\n", price * 1.12);
    }
    else if(strcmp(state, "RJ") == 0){
        printf("Final price: R$%.2lf\n", price * 1.15);
    }
    else if(strcmp(state, "MS") == 0){
        printf("Final price: R$%.2lf\n", price * 1.08);
    }else{
        printf("ERROR, this is not a valid state!");
    }





    return 0;
}

















