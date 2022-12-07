/*11. Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string
ocorre dentro da primeira. Use aritmética de ponteiros para acessar os caracteres das strings.*/

#include <stdio.h>
#include <stdlib.h>


int main(void){

    char palavra1[6];;
    int j; 
    char *i;
    //char *ponteiro = &palavra1;
    
     
    printf("Escreva uma palavra:");
    /*fgets(palavra1, 6, stdin);*/

    /*printf("Escreva uma palavra:\n");
   for(j = 0; j <= 6; j++){
        scanf("%c", &palavra1[j]);
    }*/
     for (i = palavra1; *i != '\0'; i++)
    { 
        scanf("%c", *i);
    }

    for (i = palavra1; *i != '\0'; i++)
    {
       printf("%c", *i);
    }
    
}