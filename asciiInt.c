#include <stdio.h>
#include <stdlib.h>

int main(){

     char ASCII;
     printf("Enter a character: ");
     scanf("%c", &ASCII);

     printf("This is the caracter: %c \n This is the number: %i\n", ASCII, ASCII);

     int integer;
     printf("Please, enter an integer between 0 - 127: ");
     scanf("%i", &integer);
     printf("This is the integer: %d \n This is the character: %c \n", integer, integer);

     /*Math with ASCII*/

     char mathz = 'A' + '\t';
     printf("A(65) + \\t(11) = %c(%d)\n", mathz, mathz);

     return 0;

}