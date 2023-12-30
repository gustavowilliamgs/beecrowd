#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char string[5001];
    char primeiras_letras[101];
    short i, j, aliteracao = 0, aux = 0;

    while (fgets(string, 5001, stdin) != NULL)
    {
        short tam = strlen(string) - 1;
        string[tam] = '\0';

        for (i = 0; i < tam; i++)
            if (isupper(string[i]))
                string[i] = tolower(string[i]);

        for (i = 0, j = 0; i < tam; i++)
            if (isalpha(string[i]) && (!isalpha(string[i - 1]) || i == 0))
                primeiras_letras[j++] = string[i];

        primeiras_letras[j] = '\0';

        for (i = 0, tam = strlen(primeiras_letras); i < tam - 1; i++)
            if (primeiras_letras[i] == primeiras_letras[i + 1] && aux == 0)
            {
                aux = 1;
                aliteracao++;
            }
            else if (primeiras_letras[i] != primeiras_letras[i + 1])
                aux = 0;
        printf("%hi\n", aliteracao);
        aux = aliteracao = 0;
    }

    return 0;
}