#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c, d, n, i, contagem = 0;

    scanf("%i", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%i %i", &c, &d);

        contagem = 0;

        if (c != 0 || d != 0)
            contagem = 1;

        for (int j = 0; j < c; j++)
            contagem *= 26;

        for (int j = 0; j < d; j++)
            contagem *= 10;

        printf("%i\n", contagem);
    }
    return 0;
}