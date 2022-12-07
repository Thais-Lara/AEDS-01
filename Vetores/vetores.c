#include <stdio.h>
#include <stdlib.h>
#define TAM 5

/*int main(){
    short vetor [TAM];
    for(short i=0; i<TAM; i++){
        printf("Entre com um valor: ");
        scanf("%hd", &vetor[i]);
    }

    printf("Valores que foram lidos:\n");
    for(short i=0; i<TAM; i++){
        printf("%d\t", vetor[i]);
    }
    printf("\n");
return 0;
}*/


#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(){
    short vetor [TAM];
    for(short i=0; i<TAM; i++){
        printf("Entre com um valor: ");
        scanf("%hd", &vetor[i]);
    }

    
    short *temp = vetor;
    for(short i=0; i<TAM; i++){
        printf("Valor = %d, posicao = %d, endereco %p\n", *temp, i, temp);
        //printf("%d\t", vetor[i]);
        temp++;
    }
    printf("\n");
return 0;
}


