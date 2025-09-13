/*
    Write a program to check whether a given integer is divisible by 3 or by 5,
     but not simultaneously by both, and display the result.
*/
#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 3 == 0 && num % 5 != 0){
        printf("%d\n", num / 3);
    }else if(num % 5 == 0 && num % 3 != 0){
        printf("%d\n", num / 5);
    }
    



    return 0;
}


