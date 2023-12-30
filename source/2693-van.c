#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char nome[21];
    char regiao;
    int distancia;
} Aluno;

void ordenar(Aluno *, int);

int main(int argc, char const *argv[])
{
    int n;

    while (scanf("%i", &n) != EOF)
    {
        Aluno *alunos = (Aluno *)malloc(n * sizeof(Aluno));

        for (int i = 0; i < n; i++)
            scanf(" %s %c %i", &alunos[i].nome, &alunos[i].regiao, &alunos[i].distancia);

        ordenar(alunos, n);

        for (int i = 0; i < n; i++)
            printf("%s\n", alunos[i].nome);
    }

    return 0;
}

void ordenar(Aluno *arr, int n)
{
    char troca_nome[21];
    char troca_regiao;
    int troca_distancia;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i].distancia < arr[j].distancia)
            {
                troca_distancia = arr[j].distancia;
                arr[j].distancia = arr[i].distancia;
                arr[i].distancia = troca_distancia;
                troca_regiao = arr[j].regiao;
                arr[j].regiao = arr[i].regiao;
                arr[i].regiao = troca_regiao;
                strcpy(troca_nome, arr[j].nome);
                strcpy(arr[j].nome, arr[i].nome);
                strcpy(arr[i].nome, troca_nome);
            }
            else if (arr[i].distancia == arr[j].distancia && arr[i].regiao < arr[j].regiao)
            {
                troca_regiao = arr[j].regiao;
                arr[j].regiao = arr[i].regiao;
                arr[i].regiao = troca_regiao;
                strcpy(troca_nome, arr[j].nome);
                strcpy(arr[j].nome, arr[i].nome);
                strcpy(arr[i].nome, troca_nome);
            }
            else if (arr[i].distancia == arr[j].distancia && arr[i].regiao == arr[j].regiao && (strcmp(arr[i].nome, arr[j].nome) == -1))
            {
                strcpy(troca_nome, arr[j].nome);
                strcpy(arr[j].nome, arr[i].nome);
                strcpy(arr[i].nome, troca_nome);
            }
        }
    }
}