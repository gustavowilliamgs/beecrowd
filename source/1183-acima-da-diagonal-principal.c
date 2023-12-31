#include <stdio.h>

int main(int argc, char const *argv[])
{
    double soma = 0, m[12][12];
    int i, j;
    char op;

    scanf("%c", &op);

    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%lf", &m[i][j]);

    for (i = 0; i < 12; i++)
        for (j = i + 1; j < 12; j++)
            soma += m[i][j];

    if (op == 'M')
        soma = soma / 66;
    printf("%.1lf\n", soma);
}