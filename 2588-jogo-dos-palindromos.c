#include <stdio.h>

#define MAX 1001

int strlen2(char *);
int qnt_letras(char *);

int main(int argc, char const *argv[])
{
    char str[MAX];
    int soma, j, tam, letras = 0;

    while (scanf("%s", str) != EOF)
    {
        letras = qnt_letras(str);
        printf("%i\n", letras == 0 ? letras : letras - 1);
        soma = letras = 0;
    }

    return 0;
}

int strlen2(char *str)
{
    short tamanho = 0;

    while (str[tamanho] != '\0')
        tamanho++;

    return tamanho;
}

int qnt_letras(char *str)
{
    char caracter, ocorrencias[26] = {0};
    int soma = 0, j = 0, letras = 0, tam = strlen2(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        caracter = str[i];
        if (!(ocorrencias[caracter - 'a']))
        {
            ocorrencias[caracter - 'a'] = 1;
            j = soma = 0;
            while (str[j] != '\0')
                if (str[j++] == str[i])
                    soma++;
            if (soma % 2 != 0)
                letras++;
        }
    }

    return letras;
}