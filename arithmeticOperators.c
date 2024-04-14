#include <stdio.h>
#include <stdlib.h>

int main(){

   /* + - / * */ 

    int x = (2 + ((3 * 4) / 3)) - 2 ;
    printf("%d \n", x); // = 4 

    int y = 2 + 3 * 4 /(3 - 2) ;
    printf("%d \n", y); // = 14

    int z = 5 % 2; //modular operators
    printf("%d \n", z); // = 1

    int piecesPizza = 5;
    int numberOfEaters = 2;
    int leftOver = piecesPizza % numberOfEaters;

    // an odd number is 2(k) + 1


    return 0;   
}