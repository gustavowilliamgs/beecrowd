#include <stdio.h>
#include <stdlib.h>

int *separar_extremos(int[], short, short, int, int);
void ordenar_vetor(int[], int);

int main(int argc, char const *argv[])
{
    short tamanho, rodadas;

    scanf("%hi %hi", &tamanho, &rodadas);

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++)
        scanf("%i", &vetor[i]);

    while (rodadas--)
    {
        int inicio, fim, k, gugu, dabriel, menor, comtagem = 0;

        scanf("%i %i %i %i %i", &inicio, &fim, &k, &gugu, &dabriel);

        int tam = fim - inicio + 1;
        int *p_v = separar_extremos(vetor, tamanho, tam, inicio, fim);
        ordenar_vetor(p_v, tam);

        menor = p_v[k - 1];

        for (int i = 0; i < tam; i++)
            if (p_v[i] == menor)
                comtagem++;

        gugu = abs(gugu - comtagem);
        dabriel = abs(dabriel - comtagem);

        printf("%i %i %c\n", menor, comtagem, gugu < dabriel ? 'G' : dabriel < gugu ? 'D'
                                                                                    : 'E');
    }

    return 0;
}

int *separar_extremos(int vetor[], short tamanho, short tam, int inicio, int fim)
{
    int *sub_vetor = malloc(tam * sizeof(int));

    for (int i = 0, j = inicio - 1; i < tam; i++, j++)
        sub_vetor[i] = vetor[j];

    return sub_vetor;
}

void ordenar_vetor(int vetor[], int tamanho)
{
    int chave, i, j;

    for (i = 0; i < tamanho; i++)
    {
        chave = vetor[i];
        j = i - 1;

        while (j >= 0 && vetor[j] > chave)
        {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = chave;
    }
}