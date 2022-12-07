/*
*O salário de 10 funcionários
*a media salarial
*quantos ganham acima da media
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 3


void leituraSalario(float salarios[]){

    for(int i = 0; i<=TAM; i++){

    printf("Insira o salario do funcionario %d: \n", i);
    scanf("%f", &salarios[i]);
    }
}

float getMedia(float salarios[]){

    float somaSalarios = 0; 

    for (int i = 0; i < TAM; i++){
    somaSalarios += salarios[i];
    
    }
return somaSalarios/TAM;
}

int main(void){

    float salarios[TAM], media;

    leituraSalario(salarios);
    media = getMedia(salarios);


    short qtdFuncionarios = 0;
    for(int i = 0; i<=TAM; i++){
        if(salarios[i] >= media){
            qtdFuncionarios++;
        }
    }
    printf("A média salários é: %.2f\n", media);
    printf("Número de funcionários que ganham a cima da média: %hd\n", qtdFuncionarios);
return 0;
}