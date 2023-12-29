#include <stdio.h>

short strlen2(char *);
short calcular_ciclo(char *, short, short, short *);

int main(int argc, char const *argv[])
{
    char rastro[51];

    while (scanf("%s", rastro) != EOF)
    {
        short processo;

        scanf("%hi", &processo);

        short ciclo = 0, i = 0;
        short tam = strlen2(rastro);

        while (i < tam)
            ciclo = calcular_ciclo(rastro, ciclo, processo, &i);
        printf("%hi\n", ciclo);
    }

    return 0;
}

short strlen2(char *str)
{
    short tamanho = 0;

    while (str[tamanho] != '\0')
        tamanho++;

    return tamanho;
}

short calcular_ciclo(char *r, short c, short p, short *i)
{
    if (r[*i] == 'W')
    {
        c += 1;
        (*i)++;
    }
    else
    {
        short cont = 0;
        while (cont < p && r[*i] == 'R')
        {
            cont++;
            (*i)++;
        }
        c++;
    }

    return c;
}