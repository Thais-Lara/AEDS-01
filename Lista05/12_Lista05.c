//12

#include <stdio.h>
#include <locale.h>
int imprimirMultiplos(){
    int n, i = 0, cont;
    scanf("%d", &n);
    printf("\n0");
    for(cont = 0; cont < n - 1; cont++){
        i = i + 5;
        printf("\n%d", i);
    }
}
void exercicioXX(){
    imprimirMultiplos();
}
int main(void){
    setlocale(LC_ALL,"");
    printf("Digite um número inteiro: ");
    exercicioXX();
}