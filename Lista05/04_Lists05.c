#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>

//4. 


double somaUmSobreImpar(int n, int termo, int soma){
   
  
    for(int i = termo; i >= 0; i--){
        if(i % 2 == 1){
        soma = soma + i;
        printf(" %d +", i);
        }
    }
    printf("\nA soma dos números ímpares é: %d", soma);
return soma;
}

double umSobreImpar(int n, double an, double a1, double q){

  an = a1 + (n-1)*q;

return an;
}

void exercicio04(){

  double an, a1 = 3, q = 2;
  int n, termo, numero, soma = 0;
  
  printf("Insira a posição do termo a ser encontrado: ");
  scanf("%d", &n);

  termo =  umSobreImpar(n, an, a1, q);
      
  printf("O %dº termo é: 1/%d\n", n, termo);

  somaUmSobreImpar(n, termo, soma);

}

int main (void){
    
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8); 

    exercicio04();

    SetConsoleOutputCP(CPAGE_DEFAULT);
}
    
