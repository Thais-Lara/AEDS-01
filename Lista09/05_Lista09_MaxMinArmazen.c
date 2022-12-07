#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//5

int main(){
    
    float somatorio = 0.0;
    float max = 0.0;
    float min = 0.0;
    float numero = 0.0;
    float media = 0.0;

    int count = 0;
    
    FILE *fp;
    fp = fopen("arq.txt", "r");
    if(fp == NULL){
        printf("Erro ao abrir o arquivo.");
        exit(1);
    }

    while(fscanf(fp, "%f", &numero)!=EOF){ 
        if(count == 0){
            max = numero;
            min = numero;
        } else{
            if(numero > max){
                max = numero;
            }

            if(numero < min){
                min = numero;
            }
        }
        somatorio += numero;
        count++;
    }
    fclose(fp);

    media = somatorio/count;

    printf("***************************\n");
    printf("Valor maximo: %.2f\n", max);
    printf("Valor minimo: %.2f\n", min);
    printf("Valor media: %.2f\n", media);
    printf("***************************\n");

    return 0;
}