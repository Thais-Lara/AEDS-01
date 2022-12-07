#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>

//2


void mostrarParesEmOrdemDecrescente(int n){
  printf("\nA ordem decrescente do termo é:\n");
  for(int i = n; i >= 1; i--){
    if(i % 2 == 0){
    printf("%d\t", i);
    }
  }
}

int par(int n, int an, int a1, int q){
    
  an = a1 * pow(q, n-1);

return an;
}

int exercicio02(){

  int n, an, a1, q = 2, termo;

  printf("Insira a posição do termo a ser encontrado: ");
  scanf("%d", &n);
  printf("Insira o primeiro termo da sequência: ");
  scanf("%d", &a1);

  termo =  par(n, an, a1, q);
      
  printf("O %dº termo é: %d", n, termo);

  n = termo;
  mostrarParesEmOrdemDecrescente(n);

return 0;
}


int main(void){

UINT CPAGE_UTF8 = 65001;
UINT CPAGE_DEFAULT = GetConsoleOutputCP();
SetConsoleOutputCP(CPAGE_UTF8); 

exercicio02();

SetConsoleOutputCP(CPAGE_DEFAULT);
}

