#include <stdio.h>
#include <stdlib.h>

int main(){

   /* FILE * fpointer = fopen("poem.txt", "w");
    
   fprintf(fpointer, "“Mas existe um grande, o maior obstáculo para eu ir adiante: eu mesma.\n Tenho sido a maior dificuldade no meu caminho. É com enorme esforço que consigo me sobrepor a mim mesma.”\n");
    
    FILE * fApointer = fopen("poem.txt", "a");
    fprintf(fApointer, "Não tenho medo nem de chuvas tempestivas nem das grandes ventanias soltas, pois eu também sou o escuro da noite."); */

    char line[255];
    FILE * fpointer = fopen("poem.txt", "r");
    fgets(line, 255, fpointer);

    printf("%s", line);



    fclose(fpointer);
    return 0;
}