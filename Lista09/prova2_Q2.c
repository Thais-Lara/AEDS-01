#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char caractere;
    char nomeArquivo[20];
    int count = 0;
    FILE *arq;

    printf("Insira o nome do arquivo .txt:\n");
    scanf("%s", nomeArquivo);

    arq = fopen(nomeArquivo, "r");

    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo.");
        exit(1);
    }
    else
    {

        while ((caractere = fgetc(arq)) != EOF)
        {
            if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' || caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U')
            {

                count++;
            }
        }
        printf("Arquivo: %s\n", nomeArquivo);
        printf("Numero de vogais: %d\n", count);

        fclose(arq);
    }
}
