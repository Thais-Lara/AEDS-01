//5. 

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>


//b)
double somaParSobreImpar(int n, int termoImpar, int termoPar){
   
    int somaImpar = 0;
    int somaPar = 0;
    
    printf("Soma ímpares:\n");
    for(int i = termoImpar; i >= 0; i--){
        if(i % 2 == 1){
        somaImpar = somaImpar + i;
        printf(" %d +", i);
        }
    }
    printf("\n");
    printf("Soma pares:\n");
    for(int z = termoPar; z >= 0; z--){
        if(z % 2 == 1){
        somaPar = somaPar + z;
        printf(" %d +", z);
        }
    }
    printf("\nA soma dos números: %d/%d", somaPar, somaImpar);

return somaImpar, somaPar;
}

int par(int n, int an2, int a12, int q2){
    
  an2 = a12 + (n-1)*q2;

return an2;
}

double umSobreImpar(int n, double an, double a1, double q3){

  an = a1 + (n-1)*q3;

return an;
}

//a)
double parSobreImpar(int n, int termoImpar, int termoPar, int an, int an2, int a1, int q3, int a12, int q2){


  termoImpar = umSobreImpar(n, an, a1, q3);
  termoPar = par(n, an2, a12, q2); 
      
  printf("O %dº termo é: %d/%d\n", n, termoPar, termoImpar);
 
return termoPar, termoImpar;
}

//c)
void exercicio05(){

  double an, an2, a1 = 3, a12 = 2, q2 = 2, q3 = 3;
  int n, termoImpar, termoPar, numero;
  
  printf("Insira a posição do termo a ser encontrado: ");
  scanf("%d", &n);

    termoPar, termoImpar = parSobreImpar(n, termoImpar, termoPar, an, an2, a1, q3, a12, q2);//a)
   
    somaParSobreImpar(n, termoImpar, termoPar);//b)

}

int main (void){
    
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    exercicio05();

    SetConsoleOutputCP(CPAGE_DEFAULT);
}
    