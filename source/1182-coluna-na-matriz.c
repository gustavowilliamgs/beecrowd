#include <stdio.h>

int main()
{
    double soma = 0, m[12][12];
    int c, i, j;
    char op;

    scanf("%d", &c);
    scanf(" %c", &op);

    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%lf", &m[i][j]);

    if (op == 'M')
    {
        for (int i = 0; i < 12; i++)
            soma += m[i][c];
        printf("%.1lf\n", soma / 12);
    }
    else
        printf("%.1lf\n", soma);

    return 0;
}