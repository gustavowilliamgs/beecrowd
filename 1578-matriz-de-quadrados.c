#include <stdio.h>
#include <stdlib.h>

double arredonda_num(double);

int main(int argc, char const *argv[])
{
    unsigned short n, d, q = 4, t;

    scanf("%hu", &n);

    while (n--)
    {
        scanf("%hu", &d);

        long double **m = NULL, *v = NULL, maior;

        m = (long double *)malloc(d * sizeof(long double));
        v = (long double *)malloc(d * sizeof(long double));
        for (int i = 0; i < d; i++)
            m[i] = (long double *)malloc(d * sizeof(long double));

        for (short i = 0; i < d; i++)
            for (short j = 0; j < d; j++)
            {
                scanf("%Lf", &m[i][j]);
                m[i][j] *= m[i][j];
            }

        for (short i = 0; i < d; i++)
        {
            maior = m[0][i];
            for (short j = 0; j < d; j++)
                if (m[j][i] >= maior)
                {
                    maior = m[j][i];
                    v[i] = maior;
                }
            v[i] = arredonda_num(log10(v[i]) + 1);
        }

        printf("Quadrado da matriz #%hu:\n", q++);
        for (short i = 0; i < d; i++)
        {
            for (short j = 0; j < d; j++)
            {
                t = m[i][j] == 0 ? 1 : arredonda_num(log10(m[i][j]) + 1);

                for (short k = 0, a = v[j] - t; k < a; k++)
                    printf(" ");
                printf("%.Lf", m[i][j]);
                if (j < d - 1)
                    printf(" ");
            }
            printf("\n");
        }

        if (n != 0)
            printf("\n");

        for (int i = 0; i < d; i++)
            free(m[i]);
        free(m);
        free(v);
    }

    return 0;
}

double arredonda_num(double x)
{
    return x >= 0 ? (double)((int)x) : (double)((int)x - 1);
}
