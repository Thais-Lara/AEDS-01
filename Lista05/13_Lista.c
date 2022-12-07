//13

#include <stdio.h>
#include <locale.h>
int encontrarTermo(){
    int n, elemento;
    scanf("%d", &n);
    if(n == 1){
        printf("\n1");
    }                  
    else if(n == 2){
        printf("\n1");   
    }              
    else{
        elemento = (n - 1) + (n + 2);
        printf("\n%d", elemento);
    }
}
void exercicioXX(){
    encontrarTermo();
}
int main(void){
    setlocale(LC_ALL,"");
    printf("Digite um número inteiro: ");
    exercicioXX();
    return 0;
}