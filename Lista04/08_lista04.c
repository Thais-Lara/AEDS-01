//8

#include <stdio.h>
#include <stdlib.h>

float mediaAluno(numAlunos, numProvas)
{

  int i, z, maxPontos = 100;
  float somaTotal, somaNotas, nota, notaFinal, mediaA, mediaT, percentual, aCima80 = 0, percentual80 = 0;

  for (i = 1; i <= numAlunos; i++)
  {
    somaNotas = 0;
    printf("\n\nAluno(a): %d\n", i);
    for (z = 1; z <= numProvas; z++)
    {
      printf("\nNota da prova %d considerando max 100 pontos:\t", z);
      
      scanf("\n%f", &nota);
      if (nota > maxPontos)
      {
        z--;
        printf("Nota inválida. Insira um número abaixo de 100.");
      }
      else
      {
        somaNotas += nota;
      }
    }

    mediaA = somaNotas / numProvas;
    percentual = (mediaA / maxPontos) * 100;
    somaTotal += somaNotas;

    if (percentual > 80.0)
    {
      aCima80++;
    }
    printf("\nSoma nota: %.2f\t", somaNotas);
    printf("\nMédia do aluno %d foi: %.2f\t", i, mediaA);
    printf("\nPorcentagem %d foi: %0.2f%%\t", i, percentual);
  }
  mediaT = somaTotal / numAlunos;
  printf("\n\nMédia total dos alunos: %.2f\t", mediaT);

  percentual80 = (aCima80 / numAlunos) * 100;

  printf("\n\nPorcentagem de alunos acima de 80%%: %.2f%%\t", percentual80);
}

int main(void)
{

  float notas, i, z;
  int numAlunos, numProvas;

  printf("Insira a quantidade de alunos:\n");
  scanf("%d", &numAlunos);
  printf("Insira a quantidade de provas:\n");
  scanf("%d", &numProvas);

  mediaAluno(numAlunos, numProvas);

  return 0;
}