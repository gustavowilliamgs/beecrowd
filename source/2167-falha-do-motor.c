#include <stdio.h>
#include <stdlib.h>

int f(int *, int);

int main(int argc, char const *argv[])
{
    int n;

    scanf("%i", &n);

    int *vetor = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%i", &vetor[i]);

    printf("%i\n", f(vetor, n));

    free(vetor);
    return 0;
}

int f(int vetor[], int n)
{
    int posicao = 0, maior = vetor[0];

    for (int i = 0; i < n - 1; i++)
    {
        if (vetor[i + 1] > maior)
            maior = vetor[i + 1];
        if (vetor[i + 1] < maior)
        {
            posicao = i + 2;
            break;
        }
    }

    return posicao;
}
