#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_ALUNOS 10

//Cadastro de Alunos e suas respectivas notas

typedef struct 
{
    
    char nome[MAX_ALUNOS];
    int notas[4];
    int ativo;

} Aluno;

Aluno alunos[MAX_ALUNOS];

//protótipos
void menu();
void cadastrar();
void remover();
void reprovados();
void aprovados();
void pesquisar();
//

int main(){

    menu();

    return 0;
}

void menu(){
    
    int opcao;

        do {
        system("cls");
        printf("1 - Cadastrar aluno\n");
        printf("2 - Remover aluno\n");
        printf("3 - Alunos reprovados\n");
        printf("4 - Pesquisar alunos\n");
        printf("5 - Listar alunos\n");
        printf("6 - Alunos aprovados\n");
        printf("0 - Para sair\n");
        scanf("%d", &opcao);
        getchar();

        switch(opcao){
            case 1:
                cadastrar();
            break;

            case 2:
                remover();
            break;

            case 3:
                reprovados();
            break;

            case 4:
                pesquisar();
            break;

            case 5:
                listar();
            break;

            case 6:
                aprovados();
            break;

            case 0:
            break;
        }
        getchar();
    } while(opcao != 0);
}



void cadastrar(){
   
    char nome[MAX_ALUNOS];
    float notas[4];
    int op;

    do{
        system("cls");
        printf("\nNome: \n");
        fgets(nome, sizeof(nome), stdin);
        printf("\nBimestre 1: \n");
        scanf("%f", &notas[0]);
        printf("\nBimestre 2: \n");
        scanf("%f", &notas[1]);
        printf("\nBimestre 3: \n");
        scanf("%f", &notas[2]);
        printf("\nBimestre 4: \n");
        scanf("%f", &notas[3]);

        for(int i = 0; i < MAX_ALUNOS; i++){

            if(alunos[i].ativo == 0){
                alunos[i].notas[0] = notas[0];
                alunos[i].notas[1] = notas[1];
                alunos[i].notas[2] = notas[2];
                alunos[i].notas[3] = notas[3];

                strcpy(alunos[i].nome, nome);
                alunos[i].ativo = 1;
                break;
            }

        }
        printf("1 - Para continuar");
        printf("0 - Para sair");
        scanf("%d", &op);
        getchar();
    }while(op != 0);
}

void remover(){
    int matricula;
    listar();
    printf("\n Digite a matricula do aluno a ser removido: \n");
    scanf("%d", &matricula);
    --matricula;
    alunos[matricula].ativo = 0;
    printf("Aluno excluido com sucesso.\n");
    getchar();
}

void aprovados(){
    system("cls");

    float media;
    float soma;

    printf("LISTA DE ALUNOS APROVADOS");
    
    for(int i = 0; i < MAX_ALUNOS; i++){
        if(alunos[i].ativo == 1){
            media = 0;
            soma += alunos[i].notas[i];
            media = soma/4;

            if(media > 7.0){
            printf("\n------------------\n");
            printf("Matricula: %d\n", i+1);
            printf("Nome: %s\n", alunos[i].nome);
            printf("Bimestre %d: %0.2f\n", i+1, alunos[i].notas[i]);
            printf("\n------------------\n");
            }
        }
    }
}

void reprovados(){
    system("cls");

    float media;
    float soma;

    printf("LISTA DE ALUNOS REPROVADOS");
    
    for(int i = 0; i < MAX_ALUNOS; i++){
        if(alunos[i].ativo == 1){
            media = 0;
            soma += alunos[i].notas[i];
            media = soma/4;

            if(media < 7.0){
            printf("\n------------------\n");
            printf("Matricula: %d\n", i+1);
            printf("Nome: %s\n", alunos[i].nome);
            printf("Bimestre %d: %0.2f\n", i+1, alunos[i].notas[i]);
            printf("\n------------------\n");
            }
        }
    }
}
void pesquisar(){
    
    char nome[MAX_ALUNOS];
    int op;

    printf("Digite o nome do aluno para pesquisar: \n");
    fgets(nome, sizeof(nome), stdin);

  do{   
        system("cls");
        for(int i = 0; i < MAX_ALUNOS; i++){  
        if((strstr(alunos[i].nome, nome)) != NULL){
            
            printf("\n------------------\n");
            printf("Matricula: %d\n", i+1);
            printf("Nome: %s\n", alunos[i].nome);
            printf("Bimestre %d: %0.2f\n", i+1, alunos[i].notas[i]);
            printf("\n------------------\n");
            }
        }   
        printf("\nDigite 0 para sair e 1 para nova pesquisa: ");
        scanf("%d", &op);
        getchar();
    }while(op != 0);
}

void listar(){
    system("cls");
    printf("LISTA DE ALUNOS");
    
    for(int i = 0; i < MAX_ALUNOS; i++){
        if(alunos[i].ativo == 1){
            printf("\n------------------\n");
            printf("Matricula: %d\n", i+1);
            printf("Nome: %s\n", alunos[i].nome);
            printf("Bimestre %d: %0.2f\n", i+1, alunos[i].notas[i]);
            printf("\n------------------\n");
        }
    }
}

