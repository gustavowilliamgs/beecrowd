#include <stdio.h>
#include <string.h>

#define MAX 21

int main(int argc, char const *argv[])
{
    short n, numero_pessoas, i, j, indicador = 0;

    scanf("%hi", &n);

    while (n--)
    {
        scanf("%hi", &numero_pessoas);

        char idiomas[numero_pessoas][MAX];

        for (i = 0; i < numero_pessoas; i++)
            scanf("%s", idiomas[i]);

        for (i = 0; i < numero_pessoas; i++)
            if (strcmp(idiomas[0], idiomas[i]))
                indicador = 1;
        printf("%s\n", indicador != 1 ? idiomas[0] : "ingles");
        indicador = 0;
    }

    return 0;
}
