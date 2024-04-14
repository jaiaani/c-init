#include <stdio.h>
#include <stdlib.h>

int main(){

    int age = 30;
    int * pAge  = &age;

    double gpa = 3.4;
    double * pGpa = &gpa;

    char grade = 'A';
    char * pGrade = &grade;

    printf("age's memory addresses: %p\n", pAge);

    printf("\n \n");
    printf("%d\n", *pAge);


    return 0;

}