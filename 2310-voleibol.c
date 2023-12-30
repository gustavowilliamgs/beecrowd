#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, j;
    double pontos[3], sucesso[3], soma_sucesso[3] = {0}, soma[3] = {0};

    scanf("%i", &n);

    char nome[n][100];

    for (i = 0; i < n; i++)
    {
        scanf("%s", nome[i]);

        for (j = 0; j < 3; j++)
            scanf("%lf", &pontos[j]);
        for (j = 0; j < 3; j++)
            scanf("%lf", &sucesso[j]);

        soma[0] += pontos[0];
        soma[1] += pontos[1];
        soma[2] += pontos[2];

        soma_sucesso[0] += sucesso[0];
        soma_sucesso[1] += sucesso[1];
        soma_sucesso[2] += sucesso[2];
    }

    printf("Pontos de Saque: %.2lf %%.\n", soma_sucesso[0] * 100 / soma[0]);
    printf("Pontos de Bloqueio: %.2lf %%.\n", soma_sucesso[1] * 100 / soma[1]);
    printf("Pontos de Ataque: %.2lf %%.\n", soma_sucesso[2] * 100 / soma[2]);

    return 0;
}