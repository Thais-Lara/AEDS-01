/*1. 
Fazer um método recursivo que recebe um número inteiro 
e retorna o seu fatorial.*/

#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
int resultado=0;
    if(n == 1 || n == 0){
        return 1;
    } else{
      resultado = n * fatorial(n-1);
    }
    
return resultado;
}

int main(void){

    int n;
    printf("Insira o valor de n: ");
    scanf("%d", &n);

printf("O %d! é: %d ", n ,fatorial(n));

}