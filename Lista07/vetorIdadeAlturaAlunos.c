/*Calcular a média da idade e altura dos 20 alunos depois de efetuar toda leitura dos dados*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 3 

int main(void){

    short idades[TAM];
    float alturas[TAM];

    for(int i = 1; i<= TAM; i++){
        
        printf("Insira as idades de cada aluno: \n");
        scanf("%hd", &idades[i]);
        printf("Insira as alturas de cada aluno: \n");
        scanf("%f", &alturas[i]);   
    }

    short somaIdades = 0;
    float somaAlturas = 0;

    for(int i = 1; i <= TAM; i++){
        somaIdades += idades[i];
        somaAlturas += alturas[i];
    }

    printf("A media das idades eh: %.2f\n", (float)somaIdades/TAM);
    printf("A media das alturas eh: %.2f\n", somaAlturas/TAM);
}