#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>

//3. 


double umSobreImpar(int n, double an, double a1, double q){

  an = a1 + (n-1)*q;

return an;
}

void exercicio03(){

  double an, a1 = 3, q = 2;
  int n, termo;
  

  printf("Insira a posição do termo a ser encontrado: ");
  scanf("%d", &n);

  termo =  umSobreImpar(n, an, a1, q);
      
  printf("O %dº termo é: 1/%d", n, termo);


}

int main (void){
    
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8); 

    exercicio03();

    SetConsoleOutputCP(CPAGE_DEFAULT);
}