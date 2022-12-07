#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//7.


int produto(int n, int a1, int x, int par1, int e1, int impar1){
    int multiP = 1, multiI = 1, multiE = 1;
    for(int i = 1;i <= n; i++){
        if(i % 2 == 0){
            multiP *= forPar(i, 0);
            printf("Produto par:%d\n", multiP);
        }
        else if(i % 2 == 1 && i >= 2){
            multiI *= forImpar(i, 0);
            printf("Produto impar:%d\n", multiI);
        }
        else if(i > 0){
            multiE *= forE(i, 0);
            printf("Produto expoente:%d\n", multiE);
        }
    }
   
}

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

int enesimo(int n, int a1, int x) {
    

    int par1 = forPar(n, a1);
    int e1 = forE(n, a1);
    int impar1 = forImpar(n, a1);

    printf("\n%d*x^%d/%d:", par1, e1, impar1);
    printf("\n%d*%d^%d/%d: ", par1, x, e1, impar1);

    int resultado = par1*pow(x, e1)/impar1;
    printf("%d\n", resultado);

    produto(n, a1, x, par1, e1, impar1);

return resultado;
}

void exercicio06(){

int n, x, a1;
printf("Insira a posição do termo a ser encontrado: ");
scanf("%d", &n);
printf("Insira o valor do X: ");
scanf("%d", &x);

printf("O %d termo é: %d", n, enesimo(n, a1, x));

printf("Os %d termos da sequência são: %d*%d/%d", n, forPar(n, a1), x, forE(n, a1), forImpar(n, a1));

}

int main(void){

    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    printf("2X^1/3, 4X^2/5, 6X^3/7 ... PX^e/I ?\n");
    exercicio06();

   SetConsoleOutputCP(CPAGE_DEFAULT);
}