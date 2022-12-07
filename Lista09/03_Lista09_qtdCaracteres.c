#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//3

int main(){

    char caractere, enter;
    int i = 0;
    char nomeArquivo[20];
    int count = 0;
    FILE *fp;

    printf("Insira o nome do arquivo:\n");
    scanf("%s", nomeArquivo);

   fp = fopen(nomeArquivo, "r");

   if(fp == NULL){
       printf("Erro ao abrir o arquivo.");
       exit(1);
   }

    caractere = fgetc(fp);
    count++;
    while((caractere=fgetc(fp)) != EOF){ //while(!feof(fp)){ caractere = fgetc(fp);
       if(caractere == '\n'){  
       } else {
        count++;
       }
    }
    printf("Arquivo: %s\n", nomeArquivo);
    printf("Numero de caracteres (contando espacos): %d\n", count);

    fclose(fp);

    return 0;
}

int countchar(char *file){
    int count = 0;
    FILE *f1 = fopen(file,"r");
    char linha[100];

    do{
        fgets(linha, 100, f1);
        for(int i=0; i<strlen(linha)-1; i++){
            if(isalpha(linha[i])) count++;
        }
    } while(!feof(f1));

    fclose(f1);
    return 0;
}