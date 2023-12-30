#include <stdio.h>

int ultimo_p(int);

int main(int argc, char const *argv[])
{
    short n, m;

    scanf("%hi %hi", &n, &m);
    printf("%i\n", ultimo_p(n) * ultimo_p(m));

    return 0;
}

int ultimo_p(int num)
{
    int p, contador = 0;

    for (int i = 2; i <= num; i++)
    {
        for (int j = 2; j <= i; j++)
            if (!(i % j))
                contador++;
        if (contador == 1)
            p = i;
        contador = 0;
    }

    return p;
}
