/*2. Fazer um método recursivo que recebe um número 
inteiro n e retorna o n-ésimo termo da sequência de 
Fibonacci.*/

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int num){

    int atual = 0;
    if(num == 1 || num == 2){
        return 1;

    } else {
        
    atual = fibonacci(num - 1) + fibonacci(num - 2);
    printf("%d\t", atual);
    }
    return atual;
}

int main(void){

    int num;

    printf("Insira o termo a ser encontrado: ");
    scanf("%d", &num);

    printf("\nresultado: %d", fibonacci(num));
}