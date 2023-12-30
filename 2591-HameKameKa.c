#include <stdio.h>
#include <string.h>

#define MAX 201
int quantidade = 1;

int quantidade_de_as(char *, int);

int main(int argc, char const *argv[])
{
    int casos, tamanho, resultado;
    char string[MAX];

    scanf("%i", &casos);

    while (casos--)
    {
        scanf("%s", string);
        getchar();
        tamanho = strlen(string);
        resultado = 0;

        for (int i = 1; i < tamanho - 2; i++)
            if (string[i] == 'a' && string[i - 1] != 'a')
                resultado = quantidade_de_as(string, i);

        printf("k");
        for (int i = 0; i < resultado; i++)
            printf("a");
        printf("\n");

        quantidade = 1;
    }

    return 0;
}

int quantidade_de_as(char *str, int indice)
{
    int i;
    for (i = indice; str[i] == 'a'; i++)
        ;
    quantidade *= i - indice;
    return quantidade;
}