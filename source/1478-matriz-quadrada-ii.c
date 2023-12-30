#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, j, a;

    while (scanf("%i", &n), n)
    {
        int matriz[n][n];

        for (i = 0; i < n; i++)
            for (j = i, a = 1; j < n; j++)
                matriz[i][j] = a++;
        for (i = n - 1; i > 0; i--)
            for (j = i - 1, a = 2; j > -1; j--)
                matriz[i][j] = a++;

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - 1; j++)
                printf("%3i ", matriz[i][j]);
            printf("%3i\n", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}