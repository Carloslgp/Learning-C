/*
    The amount of R$780,000.00 will be divided among three winners of a contest, as follows:

    i. The first winner will receive 46% of the total.
    ii. The second will receive 32% of the total.
    iii. The third will receive the remainder.

    Calculate and print the amount received by each of the winners.
*/
#include <stdio.h>

int main(){

    const double prize = 780000.0;

    double firstPrize = prize * 0.46;
    double secondPrize = prize * 0.32;
    double thirdPrize = prize - (secondPrize + firstPrize);

    printf("Prize for the first winner: R$%.2f\n", firstPrize);
    printf("Prize for the second winner: R$%.2f\n", secondPrize);
    printf("Prize for the third winner: R$%.2f\n", thirdPrize);




    return 0;
}


