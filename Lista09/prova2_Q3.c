#include <stdio.h>
#include <stdlib.h>

#define TAM 20
#define MAX_ALUNOS 10

typedef struct aluno
{

  int matricula;
  int codDisciplina;
  char nome[TAM];
  float nota1;
  float nota2;
  float media;

} aluno;

int main()
{

  int qteAlunos = 0;
  int codDisciplina = 1234;

  printf("Digite o total de alunos: \n");
  scanf("%d", &qteAlunos);
  if (qteAlunos > MAX_ALUNOS)
  {
    printf("O maximo permitido é 10.\n");
    qteAlunos = 10;
  }

  aluno alunos[qteAlunos];

  for (int i = 0; i < qteAlunos; i++)
  {

    printf("Digite os dados do aluno: \n");

    printf("Digite o nome do aluno: \n");
    scanf("%s", alunos[i].nome);
    printf("Digite a matricula do aluno: \n");
    scanf("%d", &alunos[i].matricula);

    //Por serem da mesma turma todos terão a mesma disciplina
    alunos[i].codDisciplina = codDisciplina;

    printf("Digite a primeira nota do aluno: \n");
    scanf("%f", &alunos[i].nota1);
    printf("Digite a segunda nota do aluno: \n");
    scanf("%f", &alunos[i].nota2);

    alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2;
    printf("----------------------------------\n");
  }

  //Imprimindo alunos
  printf("TURMA %d:\n", codDisciplina);
  for (int i = 0; i < qteAlunos; i++)
  {

    printf("Nome: %s\n", alunos[i].nome);
    printf("Matricula: %d\n", alunos[i].matricula);
    printf("Media: %.2f\n\n", alunos[i].media);
  }
}