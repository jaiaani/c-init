#include <stdio.h>
#include <stdlib.h>


int variables(){
    printf("hiii omgg c!!\n");
    printf("    /|\n");
    printf("   /_|\n");
    printf("  /|\n");
    printf(" /|\n");
    printf("/|\n");

    char characterName[] = "John";
    int characterAge = 35;


    printf("There once was a man named %s\n", characterName);
    printf("he was %d years old. \n", characterAge);
 
    characterAge = 11;
    printf("He really liked the name %s\n", characterName);
    printf("but he did not like being %d.\n", characterAge);

 return 0;
}

/*int dataTypes(){
    
    int age = 40;
    double gpa = 3.6;
    char letter = 'a';
    

    char word[] = "string a bunch of char together";
    return 0;
}*/

int printando(){

    printf("Hello again\nWorld\n");
    printf("Hello\"World\n"); 
    printf("%d\n", 777);
    printf("%s", "some text \n");
    printf("%f a decimal number\n", 777.222);
    return 0;
}

int workingWithNumbers(){

    printf("%f \n", 8.9);

    printf("%f \n", 5.0 + 6.3);

    printf("%f\n", 5 + 4);

    printf("%f\n", 5 / 4);
    printf("%d\n", 5 / 4);

    printf("%f\n", pow(2, 3));
    printf("%f\n", sqrt(36));
  

    return 0;
}

int constants(){

    int num = 5;
    printf("%d\n", num);

    num = 9;
    printf("%d\n", num);

    const int numb = 7;
    printf("%d\n", numb);

    return 0;
}


/* why some dont work?*/
int userInput(){

    char name[20];
    printf("Hiii, whats your name?: ");
    scanf("%s", &name);
    printf("Your name is %s\n", name);

    int age;
    printf("how old are you??\n");
    scanf("%d", &age);
    printf("\nYou are %d years old? \nOkay\n", age);

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f\n", gpa);

    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c \n", grade);

    char color[15];
    printf("Whats your favorite color? ");
    fgets(color, 15, stdin);
    printf("your favorite color is %s\n", color);
    
    return 0;
}

int main(){
   
    /* A comment :p */

    variables();
    printando();
    workingWithNumbers();
    constants();
    userInput();
}
