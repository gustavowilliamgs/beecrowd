#include <stdio.h>

int main(int argc, char const *argv[])
{
    double n, soma = 0, i = 0;

    while (scanf("%lf", &n))
    {
        if (n < 1)
            break;

        soma += n;
        i++;
    }

    printf("%.2lf\n", soma / i);

    return 0;
}