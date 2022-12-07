#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

//1

int main(){
    
    char nomeArquivo3 = "resposta.txt";

    mergeFiles("arq01.txt", "arq02.txt");
    printf("Arquivo %s criado com sucesso!", nomeArquivo3);
    
    return 0;
}


void mergeFiles(char* arquivo01, char* arquivo02){
    FILE *f1 = fopen(arquivo01, "r");
    FILE *f2 = fopen(arquivo02, "r");

    FILE *fresp = fopen("resposta.txt", "w");

    if(f1 == NULL || f2 == NULL || fresp == NULL){
        printf("Erro na leitura dos arquivos.");
        exit(0);
    }

    char linha1[100], linha2[100];
    fgets(linha1, 100, f1);
    fgets(linha2, 100, f2);

    while(!feof(f1) && !feof(f2)){
        if (strcmp(linha1, linha2) < 0){
            fprintf(fresp, "%s", linha1);
            fgets(linha1, 100, f1);
        } else{
            fprintf(fresp, "%s", linha2);
            fgets(linha2, 100, f2);
        }
    }

    while(!feof(f1)){
        fprintf(fresp, "%s", linha1);
        fgets(linha1, 100, f1);
    }

    while(!feof(f2)){
        fprintf(fresp, "%s", linha2);
        fgets(linha2, 100, f2);
    }

    fclose(f1);
    fclose(f2);
    fclose(fresp);
}