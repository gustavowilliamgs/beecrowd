#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, altura, tronco, galhos;

    scanf("%i", &n);

    while (n--)
    {
        scanf("%i %i %i", &altura, &tronco, &galhos);

        if (altura >= 200 && altura <= 300 && tronco >= 50 && galhos >= 150)
            printf("Sim\n");
        else
            printf("Nao\n");
    }

    return 0;
}