#include <stdio.h>
#include <stdlib.h>

#define TAM 20

typedef struct
{
    int cod;
    char resp[TAM];
} aluno;

int main()
{
    char gabarito[TAM] =
        {'a', 'a', 'b', 'a', 'a', 'a', 'a', 'c', 'a', 'a', 'a', 'a', 'd', 'a', 'a', 'd', 'a', 'a', 'a', 'a'};
    int qteAlunos = 0;
    printf("Digite o total de alunos: \n");
    scanf("%d", &qteAlunos);
    aluno alunos[qteAlunos];

    //Preenchendo codigo e folha de respostas
    for (int i = 0; i < qteAlunos; i++)
    {
        printf("Digite as respostas do aluno %d: \n", i + 1);
        alunos[i].cod = i;
        for (int j = 0; j <= TAM; j++)
        {
            char opcao;
            printf("Questão %d: \n", j);
            scanf(" %c", &opcao);
            alunos[i].resp[j + 1] = opcao;
        }
    }
    
    //Verificando nota dos alunos
    for (int i = 0; i < qteAlunos; i++)
    {
        printf("Verificando aluno %d: \n", alunos[i].cod);
        float nota = 0;
        for (int j = 0; j < TAM; j++)
        {
            if (gabarito[j] == alunos[i].resp[j])
                nota += 0.5;
        }
        printf("A nota do aluno %d é %f \n", alunos[i].cod, nota);
        if (nota >= 6.0)
            printf("APROVADO\n");
        else
            printf("REPROVADO\n");
    }
}