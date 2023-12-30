#include <stdio.h>

#define MAX 12

int main(int argc, char const *argv[])
{
    char op;
    double matriz[MAX][MAX], soma = 0;
    int i, j;

    scanf("%c ", &op);

    for (i = 0; i < MAX; i++)
        for (j = 0; j < MAX; j++)
            scanf("%lf", &matriz[i][j]);

    for (i = 1; i < MAX; i++)
        for (j = 0; j < i; j++)
            soma += matriz[i][j];

    printf("%.1lf\n", op == 'S' ? soma : soma / 66);

    return 0;
}