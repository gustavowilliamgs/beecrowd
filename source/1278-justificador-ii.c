#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 52

void remove_espacos(char *);

int main(int argc, char const *argv[])
{
    int n;

    scanf("%i", &n);

    while (n)
    {
        getchar();

        char **strings = malloc(n * sizeof(char *));
        int tamanho, maior = 0;

        for (int i = 0; i < n; i++)
            strings[i] = malloc(MAX * sizeof(char));

        for (int i = 0; i < n; i++)
        {
            fgets(strings[i], MAX, stdin);
            int tam = strlen(strings[i]) - 1;
            strings[i][tam] = '\0';
            remove_espacos(strings[i]);

            tamanho = strlen(strings[i]);

            if (tamanho > maior)
                maior = tamanho;
        }

        for (int i = 0; i < n; i++)
            printf("%*s\n", maior, strings[i]);

        for (int i = 0; i < n; i++)
            free(strings[i]);
        free(strings);

        scanf("%i", &n);

        if (n != 0)
            printf("\n");
    }

    return 0;
}

void remove_espacos(char *str)
{
    char str1[MAX];
    int aux = 0;

    int inicio = 0;
    while (str[inicio] == ' ')
        inicio++;

    for (int i = inicio; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] == ' ')
            continue;
        str1[aux] = str[i];
        aux++;
    }

    int fim = aux - 1;
    while (fim >= 0 && str1[fim] == ' ')
    {
        str1[fim] = '\0';
        fim--;
    }

    str1[aux] = '\0';

    strcpy(str, str1);
}