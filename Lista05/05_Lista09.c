#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float numerador(int n) {
    return(2.0 + n * 2);
}

float denominador(int n){
    return (3.0 + n * 2);
}

float fatorial(int n){
    float resposta = 0;
    if(n == 1) {
        return 1;
    } else{
        resposta = n * fatorial(n-1);
    }
    return resposta;
}

float getNovoTermo(int n, int x){
    float novonumerador = numerador(n)*pow(x, n+1);
    float novodenominador = fatorial(denominador(n));
    return(novonumerador/novodenominador);
}

void exercicios09(){
    int num, x;
    printf("Entre com o valor de x: \n");
    scanf("%d", &x);
    printf("Entre com o termo desejado: \n");
    scanf("%d", &num);
    printf("O valor do termo escolhido %.2g\n", getNovoTermo(num, x));
}

int main(void){

  exercicios09();
}