/*3. 
Fazer um método recursivo que recebe um número inteiro n 
e retorna o n-ésimo termo da equaçãode recorrência abaixo:
T(1) = 2
T(2) = 3
T(n) = 5 * n + T(n - 1)n 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int exercicio03(int n) {
    int resp = 0;
    if(n == 1){
        return 2;
    } else if(n == 2){
        return 3;
    } else{
        resp = 5 * n + pow(exercicio03(n - 1), n);
    }
return resp;
}


int main(void) {

    int n;

    printf("Insia um número inteiro: ");
    scanf("%d", &n);

    printf("O n-ésimo termo é: %d", exercicio03(n));

}