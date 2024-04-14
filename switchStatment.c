#include <stdio.h>
#include <stdlib.h>

int main(){

    char grade;
    printf("Whats your grade? ");
    scanf(" %c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Nice grade xD \n");
        break;
    case 'B':
        printf("You went well :) \n");
        break;
    case 'C':
        printf("Lets improve this?\n");
        break;
    case 'D':
        printf("You need pay more attention\n");   
        break;

    case 'E':
        printf("Thats not good!\n");
        break;

    case 'F':
        printf("You will need to it again and again...\n"); 
        break;
    
    default :
        printf("This grade is impossible :p \n");
    }
    

    return 0;

}