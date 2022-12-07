//1 


#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
//an = a1 * pow(q, n-1)
//an: termo
//n:posição do termo
//q:razão
//a1: termo 1



int par(int n, int an, int a1, int q){

    
    an = a1 * pow(q, n-1);

    return an;
}

int exercicio01() {
    
    int n, an, a1, q = 2;

    printf("Insira a posição do termo a ser encontrado: ");
    scanf("%d", &n);
    printf("Insira o primeiro termo da sequência: ");
    scanf("%d", &a1);
      
    printf("O %dº termo é: %d", n, par(n, an, a1, q));

 return 0;
}

int main (void) {

   UINT CPAGE_UTF8 = 65001;
   UINT CPAGE_DEFAULT = GetConsoleOutputCP();
   SetConsoleOutputCP(CPAGE_UTF8);

    exercicio01();

    SetConsoleOutputCP(CPAGE_DEFAULT);
}

