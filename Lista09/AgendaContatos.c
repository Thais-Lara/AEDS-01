#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <ctype.h>

#define MAX_CONTATOS 50

//void clrscr() { system("@cls||clear"); }

//typedef struct data DATA;

typedef struct data
{

    int dia;
    int mes;
    int ano;
} DATA;

//typedef struct contato CONTATO;

typedef struct contato
{

    char nome[30];
    char fone[12];
    int ativo;
    DATA aniversario;

} CONTATO;

void menu()
{
    printf("\n---------------------------------------\n");
    printf("                 AGENDA                  \n");
    printf("-----------------------------------------\n");
    printf("1 - Inserir contato\n");
    printf("2 - Remover contato\n");
    printf("3 - Pesquisar contato pelo nome\n");
    printf("4 - Listar\n");
    printf("5 - Listar por uma inicial\n");
    printf("6 - Imprimir aniversariantes do mes\n");
    printf("7 - Sair\n\n");
    printf("Escolha uma opcao: ");
}

CONTATO novoContato()
{

    system("cls");

    //int cadastros[MAX_CONTATOS];
    CONTATO ctt;

    FILE *arq;
    arq = fopen("agenda.txt", "w");

    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }
    else
    {
        system("cls");
        ctt.ativo = 0;

        fflush(stdin);
        printf("Digite o nome: \n");
        fgets(ctt.nome, 30, stdin);
        ctt.nome[strlen(ctt.nome) - 1] = '\0';

        printf("Digite o fone: \n");
        gets(ctt.fone);

        printf("Digite o aniversario:\n");
        scanf("%d %d %d", &ctt.aniversario.dia, &ctt.aniversario.mes, &ctt.aniversario.ano);
        getchar();

        //Escrever no arquivo
        fprintf(arq, "\n%s\n%s\n%d\\%d\\%d\n", ctt.nome, ctt.fone, ctt.aniversario.dia, ctt.aniversario.mes, ctt.aniversario.ano);
        fputs("\n--------------------\n", arq);
        //fwrite(&ctt, sizeof(CONTATO), 1, arq); em binário

        ctt.ativo = 1;
    }
    fclose(arq);
    return ctt;
}

void listar();
void removeContato();
//void pesquisar();
//void listarPorInicial();
//void aniversarianteMes();

int main()
{
    int opcao;
    int count = 0;
    CONTATO cadastros[MAX_CONTATOS];
    DATA aniversario[MAX_CONTATOS];

    do
    {
        menu();
        scanf(" %d", &opcao);
        getchar();
        switch (opcao)
        {
        case 1:
            do
            {
                cadastros[count] = novoContato();
                count++;
                printf("Deseja continuar(s/n)?\n");

            } while (getchar() == 's');

            break;

        case 2:
            removeContato(cadastros, count);
            break;

        case 3:
            //pesquisar();
            break;

        case 4:
            fflush(stdin);
            listar(cadastros, aniversario, count);
            getchar();
            break;

        case 5:
            //listarPorInicial();
            break;

        case 6:
            //aniversarianteMes();
            break;

        case 7:
            printf("Programa finalizado.\n");
            getchar();
            break;

        default:
            printf("Opcao invalida.\n");
            break;
        }

    } while (opcao != 7);

    return 0;
}

void listar(CONTATO cadastros[], int count)
{

    system("cls");
    fflush(stdin);

    //CONTATO ctt;

    FILE *arq;

    arq = fopen("agenda.txt", "r");

    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }
    else
    {

        //fgets(ctt.nome, ctt.fone, ctt.aniversario.dia, ctt.aniversario.mes, ctt.aniversario.ano, 1, arq
        //fscanf(arq, "\n%d\n%d\n%d %d %d\n", ctt.nome, ctt.fone, ctt.aniversario.dia, ctt.aniversario.mes, ctt.aniversario.ano
        printf("\n---------------------------------------\n");
        printf("             TODOS OS CONTATOS            \n");
        printf("-----------------------------------------\n");

        for (int i = 0; i < count; i++)
        {
            if (cadastros[i].ativo == 1)
            {
                
                    printf("Nome: %s\n", cadastros[i].nome);
                    fflush(stdin);
                    printf("Fone: %s\n", cadastros[i].fone);
                    fflush(stdin);
                    fprintf(stdout, "Aniversario: %d/%d/%d\n", cadastros[i].aniversario.dia, cadastros[i].aniversario.mes, cadastros[i].aniversario.ano);
                    printf("-------------------------------------\n");
                
            }
            else
            {
                printf("Usuario inativo.");
                break;
            }
        }
        fclose(arq);
        getchar();
    }
}

void removeContato(CONTATO cadastros[], int count){

    system("cls");
    listar(cadastros, count);
    int nomeSai;
    printf("Digite o nome do contato a ser removido: \n");
    scanf("%d", &nomeSai);
    cadastros[nomeSai].ativo = 0; 
    printf("Contato excluido com sucesso!\n");
    Sleep(5);
    getchar(); 
}