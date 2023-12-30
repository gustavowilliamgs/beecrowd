#include <stdio.h>
#include <stdlib.h>

#define MAX 21

int main(int argc, char const *argv[])
{
    short n, i, j, chave;

    while (scanf("%hi", &n) != EOF)
    {
        char carnes[n][MAX];
        short validades[n], cpy_validades[n];

        for (i = 0; i < n; i++)
        {
            scanf("%s ", carnes[i]);
            scanf("%hi", &validades[i]);

            cpy_validades[i] = validades[i];
        }

        for (i = 1; i < n; i++)
        {
            chave = validades[i], j = i - 1;

            while (j >= 0 && validades[j] > chave)
                validades[j + 1] = validades[j], j--;
            validades[j + 1] = chave;
        }

        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (validades[i] == cpy_validades[j] && i < n - 1)
                    printf("%s ", carnes[j]);
                else if (validades[i] == cpy_validades[j])
                    printf("%s", carnes[j]);
        printf("\n");
    }

    return 0;
}