#include <stdio.h>

#define NAO_POSSUI_O_PADRAO() \
    do                        \
    {                         \
        printf("0\n");        \
        return 0;             \
    } while (0)

int main(int argc, char const *argv[])
{
    short n_medidas, i;

    scanf("%hi", &n_medidas);

    short vetor[n_medidas];

    for (i = 0; i < n_medidas; i++)
        scanf("%hi", &vetor[i]);

    for (i = 0; i < n_medidas - 2; i++)
        if (vetor[i] > vetor[i + 1] && vetor[i + 1] > vetor[i + 2] || vetor[i] < vetor[i + 1] && vetor[i + 1] < vetor[i + 2])
            NAO_POSSUI_O_PADRAO();

    for (i = 1; i < n_medidas; i++)
        if (vetor[i] == vetor[i - 1])
            NAO_POSSUI_O_PADRAO();

    printf("1\n");

    return 0;
}