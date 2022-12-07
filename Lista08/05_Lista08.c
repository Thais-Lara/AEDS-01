#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//5

#define ALUNOS 5
#define RESPOSTAS 10


int main(void){

    int acertos = 0;
    int resultado[RESPOSTAS];
    char matriz[ALUNOS][RESPOSTAS], gabarito[RESPOSTAS]; 
    //resultados[RESPOSTAS];


    for (int i = 0; i < ALUNOS; i++){
        printf("\nALUNO %d\n", i + 1);
        for(int j = 0; j < RESPOSTAS; j++){

            printf("\nEntre com a resposta(a, b, c ou d) da questao %d:\n", j + 1 );
            scanf(" %c", &matriz[i][j]);           
        }
    }

    /* Gabarito */

    for(int j = 0; j < RESPOSTAS; j++){

        printf("\nRESPOSTAS GABARITO:\n");
        scanf(" %c", &gabarito[j]);
    }

    /* Comparação */

    for (int i = 0; i < ALUNOS; i++){
        acertos = 0;
        for(int j = 0; j < RESPOSTAS; j++){

            if(matriz[i][j] == gabarito[j]){
                acertos++;
            }

        }
        resultado[i] = acertos;
        printf("O aluno %d fez %d pontos.\n", i + 1, resultado[i]);
    }
}
