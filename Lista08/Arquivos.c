#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char nomeArquivo[20];
    
    printf("Entre com o nome do arquivo:\n");
    scanf("%d", nomeArquivo);

    FILE *fp = NULL;
    fp = fopen(nomeArquivo, "r");
    if(fp == NULL){
        printf("Erro na abertura do arquivo\n");
        exit(1);
    }
    char palavra[20];
    printf("Entre com a palavra encontrada:\n");
    scanf("%s", palavra);

    /*contar linhas*/
    int countLinhas = 0;
    char linha[100];
    while(!feof(fp)){
        fgets(linha, 100, fp);
        countLinhas++;
        char *resposta = strstr(linha,palavra);
        if(strstr(linha,palavra)!=NULL){
            printf("(%d) %s", countLinhas, linha);
            printf("%p ----- %p ----- %ld \n", linha, resposta, resposta-linha);
        }   
    }
    
    fclose(fp);
    return 0;
    }