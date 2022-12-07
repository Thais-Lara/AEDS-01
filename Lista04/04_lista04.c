//4

#include <stdio.h>
#include <math.h>

int main(void){
    int termo, razao, n;

    printf("Entre com a razão e o termo inicial: ");
    scanf("%d %d", &razao, &termo);
    printf("Entre com o termo: ");
    scanf("%d", &n);

    //PG
    int an = termo * pow(razao, n-1);
    printf("termo %d \n", an);

    //PG sem exponenciação
    an = termo;
    for(int i=0; i< n-1; i++) {
        an = an * razao;

    }
    printf("termo %d \n", an);

    //PG sem exponenciação e multiplicação
     an = termo;
    for(int i=0; i< n-1; i++) {
        int soma = 0;
        for(int j=0; j< razao; j++){
            soma = soma + an;
        }
        an = soma;   
    }
    printf("termo %d \n", an);
}