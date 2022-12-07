/*5. 
Fazer um método recursivo que recebe um número inteiro 
e positivo n e calcula o somatório abaixo.
n + (n + 1) + ::: + 1 + 0 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int exercicio05(int n){
    int resp = 0;
    if(n > 0){
        resp = n + exercicio05(n - 1);
    }

return resp;
}

int main(void){

    int n;

    printf("Digite n quantidade de termos: ");
    scanf("%d", &n);

    printf("A soma dos %d termos é: %d", n, exercicio05(n));
}