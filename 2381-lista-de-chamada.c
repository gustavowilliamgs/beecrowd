#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int f(const void *a, const void *b);

int main(int argc, char const *argv[])
{
    short tamanho_lista, posicao, i;

    scanf("%hi %hi", &tamanho_lista, &posicao);
    char nomes[tamanho_lista][21];

    for (i = 0; i < tamanho_lista; i++)
        scanf("%s", nomes[i]);

    qsort(nomes, tamanho_lista, sizeof(nomes[0]), f);

    printf("%s\n", nomes[posicao - 1]);

    return 0;
}

int f(const void *a, const void *b)
{
    const char *string1 = (const char *)a;
    const char *string2 = (const char *)b;

    return strcmp(string1, string2);
}