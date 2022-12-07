#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//4

int main(){

    char nomeArquivo[20] = "Abacaxi.txt";

    printf("Entre com outro nome para o arquivo: \n");
    scanf("%s", nomeArquivo);

    FILE *fp;
    fp = fopen(nomeArquivo, "w");

    if(fp == NULL){
        printf("Erro ao abrir o arquivo.");
        exit(1);
    }

    printf("Arquivo %s criado com sucesso!", nomeArquivo);
    fclose(fp);
    return 0;
}