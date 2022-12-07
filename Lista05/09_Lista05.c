#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//9. 


int forE(int n, int a1){
    a1 = 1;
    int resultE = a1 + (n-1)*1;
    printf("Expoente(e): %d\t", resultE);
return resultE;
}
int forPar(int n, int a1){
    a1 = 2;
    int resultP = a1 + (n-1)*2;
    printf("Par(P): %d\t", resultP);
   
return resultP;
}
int forImpar(int n, int a1){
    a1 = 3;
    int resultI = a1 + (n-1)*2;
    printf("Impar(I): %d\t", resultI);
  
   
return resultI;
}


double enesimo(double n, double a1, double fat, double x, double n2, double nE, double n3){

  //an = a1 + (n-1)*q3;

    double par1 = forPar(n2, a1);
    double e1 = forE(nE, a1);
    double impar1 = forImpar(n3, a1);
    double fat1 = fatorial(n, fat, x);

    printf("\n%d%d^%d/d", forPar(n2, a1), forE(nE, a1), forImpar(n3, a1), n, fatorial(n, fat, x));

    printf("\n%d%d^%d/d", par1, e1, impar1, n, fat1);

}

double fatorial(double n, double fat, double x){

    for(int z = 0; z <= n; z++) {
        for(int i=1; i<=n; i++) {
        
            fat = fat * i;
            printf("%d\t", fat);  
        }
        fat = fat + 2;
    }

return fat;
}

double exercicio08(){

double n = 0, n2, nE, n3, fat = 1, x = 0;

printf("Insira o valor do número fatorial: ");
scanf("%d", &n);

printf("\n%d! é igual a: %d", n, fatorial(n, fat, x));

printf("\n%d%d^%d/d", forPar(n2, a1), forE(nE, a1), forImpar(n3, a1), n, fatorial(n, fat, x));
enesimo(n, a1, fat, x, n2, nE, n3);

}

double main(void) {

exercicio08();

}