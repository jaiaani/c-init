#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    for (int count = 0; count < guessLimit; count++){
        if(guess != 7){
            printf("Guess a number for: ");
            scanf("%d", &guess);
        } else {
             printf("Nicee \n");
        }
       printf("you lost\n"); 
    }
    

    while(guess != secretNumber && outOfGuesses == 0){
        if(guessCount < guessLimit) {
            printf("Guess a number: ");
            scanf("%d", &guess);
            guessCount++;
        } else {
            outOfGuesses = 1;
        }
    }
    if(outOfGuesses == 1){
        printf("you lost\n");
    }else{
        printf("Nicee \n");
    }

    return 0;
}