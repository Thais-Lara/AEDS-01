/*Contar a quantidade de dígitos*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void contarDigitos(int n){
    int digitos = 0;
    while(n > 0) {
        digitos++;
        n = n/10;
    }
    printf("Quantidade de dígitos: %d\n", digitos);
}

int main(){
    contarDigitos(1000);

    return 0;
}