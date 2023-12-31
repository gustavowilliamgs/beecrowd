#include <stdio.h>

int main(int argc, char const *argv[])
{
    double matriz[12][12];
    int linha, soma = 0;
    char operacao;

    scanf("%i", &linha);
    scanf(" %c", &operacao);

    for (int l = 0; l < 12; l++)
        for (int c = 0; c < 12; c++)
            scanf("%lf", &matriz[l][c]);

    for (int c = 0; c < 12; c++)
        soma += matriz[linha][c];

    if (operacao == 'S')
        printf("%.1lf\n", soma);
    else
        printf("%.1lf\n", soma / 12.0);

    return 0;
}
