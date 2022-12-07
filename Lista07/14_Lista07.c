/*14. Escreva uma função que receba um array de inteiros V e os endereços de duas variáveis inteiras,
min e max, e armazene nessas variáveis o valor mínimo e máximo do array. Escreva também
uma função main que use essa função.*/

#include <stdio.h>
#include <stdlib.h>

int armazenaValores(int *min, int *max){
    printf("min: %d\tmax: %d", min, max);
    for(int i=(*min); i<=(*max); i++){
        int V[i];
        printf("\nDigite um inteiro: ");
        scanf("%d", &V[i]);
        printf("\nValor armazenado: %d", V[i]);
    }
}
int main(void){
    int min, max;
    printf("Digite o valor das variaveis a e b: ");
    scanf("%d %d", &min, &max);
    armazenaValores(&min, &max);
    return 0;
}


/*
#define TAM 2


int maxMin(int *vetor){

    int *i;
    int *finalArray = &vetor[TAM];

    for(i = vetor; i < finalArray; i++){
       
       if(*i < *i + 1 ){
       printf("Valor max: %.2f\n", *i + 1 );
       }        
    }
    printf("Nao existe numeros negativos no vetor.");

}

int main(void) {

    int v[TAM]; 
    int j;

    for(j = 0; j < TAM; j++){
        printf("Digite dois valores para o vetor:\n");
        scanf("%f", &v[j]);
    }

    maxMin(v);
}
*/

