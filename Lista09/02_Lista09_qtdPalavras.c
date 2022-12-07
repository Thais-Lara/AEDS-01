#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//2

int main(){

    char digito;
    FILE *fp;
    int count = 0;
    int espaco = 0;

    if((fp=fopen("texto.txt", "r")) == NULL){
        printf("Erro ao abrir o arquivo.");
        exit(1);
    }

    while(!feof(fp)){
        digito = getc(fp);
        if(digito == ' ' || digito == '\n'){
            count++;
            espaco = 1;
        } else{
            if(espaco == 1){
                espaco = 0;
            }
        }
    }
    fclose(fp);

    printf("O numero de palavras no arquivo eh: %d", count);

    return 0;
}