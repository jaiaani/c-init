#include <stdio.h>
#include <stdlib.h>

int main(){

    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    /*Memory RAM storage adresses*/


    printf(" age: %p \n gpa: %p \n grade: %p \n", &age, &gpa, &grade);

    return 0;

}