/*2. Fazer um método recursivo que recebe um número inteiro n e retorna o n-ésimo termo da sequência
de Fibonacci.*/

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
    int resp = 0;
    if(n == 0){
        return 1;
    } else if(n == 1){
        return 1;
    } else {
        resp = fibonacci(n - 1) + fibonacci(n - 2);
    }
return resp;
}


int main(void){

    int n;

    printf("Insira o e-nésimo termo: \n");
    scanf("%d", &n);

    printf("%d", fibonacci(n));

return 0;
}