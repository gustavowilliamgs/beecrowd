#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, posicao;

    scanf("%i", &x);

    int vetor[x];
    for (int i = 0; i < x; i++)
        scanf("%i", &vetor[i]);

    int menor = vetor[0];

    for (int i = 1; i < x; i++)
        if (vetor[i] < menor)
            menor = vetor[i], posicao = i;

    printf("Menor valor: %i\n", menor);
    printf("Posicao: %i\n", posicao);

    return 0;
}