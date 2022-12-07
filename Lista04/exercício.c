#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void exemplo()
{
	printf("Entre com a opção:\n");
	printf("1) Verificar se o número é perfeito:\n");
	printf("2) Apresentar múltiplos desse número até 10:\n");
	printf("3) Apresentar os divisores desse número:\n");
	printf("4) Verificar se é um número primo:\n");

}

int main()
{
 setlocale(LC_ALL, "");

	int num, opcao;
	printf("Entre com um número:\n");
	scanf("%d", &num);

    exemplo(num, opcao);
	scanf("%d", opcao);
}
	

int verificaPerfeito(int num) {
	
	int opcao, i;
	int resposta = 0;
	int soma = 0;
	
	for(i = 0; i < num; i++){
		if(num % i == 0){
			soma += i;
		}
		if(soma == num){
			resposta = 1;
		}
	}
	return resposta;


	switch (opcao) {
		case 1:
		if(verificaPerfeito(num) == 1)
			printf("o número é perfeito.");
		else
			printf("Número não é perfeito.");
			
		break;

		default: 
		printf("\nNúmero inválido.\n");
		break; 	
	}

