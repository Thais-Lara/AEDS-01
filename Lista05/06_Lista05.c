#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

//6. 


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

return resultado;
}

void exercicio06(){

int n, x, a1;
printf("Insira a posição do termo a ser encontrado: ");
scanf("%d", &n);
printf("Insira o valor do X: ");
scanf("%d", &x);

printf("O %d termo é: %d", n, enesimo(n, a1, x));

}

int main(void){

    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    printf("2X^1/3, 4X^2/5, 6X^3/7 ... PX^e/I ?\n");
    exercicio06();

   SetConsoleOutputCP(CPAGE_DEFAULT);
}