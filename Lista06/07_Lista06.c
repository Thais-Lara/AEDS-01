/*7. Implemente uma função recursiva que, 
dados dois números inteiros x e n, 
calcula o valor de x^n.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int exponenciacao(int n, int x){
    int multi = 0;
    if(x == 0){
        return 1;
    } else if (x == 1){
        return n;
    } else{
        multi = n * exponenciacao(n, x-1);
    }
return multi;
}



int main(void){

    int n, x;

    printf("Entre com o valor de dois números inteiros: ");
    scanf("%d %d", &n, &x);

    printf("%d", exponenciacao(n, x));
return 0;
}