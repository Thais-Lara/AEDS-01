/*13. Implemente uma função que receba como parâmetro um array de números reais de tamanho N
e retorne quantos numeros negativos há nesse array. Essa função deve obedecer ao prototipo:
int negativos(float *vet, int N);*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int negativos(float *vet, int n){

    float *i;
    (float)n;
    float *finalArray = &vet[n];

   for(i = vet; i < finalArray; i++){
       
       if(*i < 0){
       printf("Valor: %.2f\n", *i);
       }        
    }
    printf("Nao existe numeros negativos no vetor.");
    return 0;
}

int main(void){

    float n = TAM; 
    float vet[TAM];
    int j;

    for(j = 0; j < n; j++){
        printf("Digite os valores do vetor:\n");
        scanf("%f", &vet[j]);
    
    }

    negativos(vet, n);

    return 0;
}