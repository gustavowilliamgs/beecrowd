#include <stdio.h>

int t(int, int);

int main(int argc, char const *argv[])
{
    int n, valor, valor_anterior, contador;

    scanf("%i", &n);

    valor_anterior = contador = 0;

    while (n--)
    {
        scanf("%i", &valor);

        if (t(valor, valor_anterior))
        {
            valor_anterior = valor;
            contador++;
        }
    }

    printf("%i\n", contador);

    return 0;
}

int t(int valor, int valor_anterior)
{
    return valor != valor_anterior;
}
