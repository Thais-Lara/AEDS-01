/*4. 
Fazer um método recursivo que recebe um número inteiro n e retorna o n-ésimo termo da equação
de recorrência abaixo:
T(0) = 1
T(1) = 1
T(2) = 1
T(n) = T(n - 1) + T(n - 2) + T(n - 3) */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int exercicio04(int n) {
    int resp = 0;
    if(n == 0 || n == 1 || n == 2){
        return 1;
    } else{
        resp = exercicio04(n - 1) + exercicio04(n - 2) + exercicio04(n - 1);
    }
return resp;
}


int main(void) {

    int n;

    printf("Insia um número inteiro: ");
    scanf("%d", &n);

    printf("O n-ésimo termo é: %d", exercicio04(n));

}