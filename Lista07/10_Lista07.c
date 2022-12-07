/*10. Faça um programa que leia três valores inteiros e chame uma função que receba estes 3 valores de
entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável, o segundo menor
valor na variável do meio, e o maior valor na última variável. A função deve retornar o valor 1
se os três valores forem iguais e 0 se existirem valores diferentes. Exibir os valores ordenados na
tela.*/

#include <stdio.h>
#include <stdlib.h>

ordenado(int a, int b, int c){

    int *ptA, *ptB, *ptC, valor;
    ptA = &a;
    ptB = &b;
    ptC = &c;
    
    if(a == b && b == c){
        valor = 1;
        printf("\n%i - %i - %i (valores iguais)", a, b, c);
    }else{
        valor = 0;
        
        if(c > b && b > a){
          
            printf("\n%i - %i - %i", a, b, c);
        }
        
        if(b > c && c > a){
            printf("\n%i - %i - %i", a, c, b);
        }
       
        if(c > a && a > b){
            printf("\n%i - %i - %i", b, a, c);
        }
        
        if(a > c && c > b){
            printf("\n%i - %i - %i", b, c, a);
        }
       
        if(b > a && a > c){
            printf("\n%i - %i - %i", c, a, b);
        }
        
        if(a > b && b > c){
            printf("\n%i - %i - %i", c, b, a);
        }
    }
    printf("\n%i", valor);

}

int main(void){

    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    ordenado(a, b, c);
}