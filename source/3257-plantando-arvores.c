#include <stdio.h>
#include <stdlib.h>

int compare(const void *, const void *);

int main(int argc, char const *argv[])
{
    int n, dia_atual, primeiro_dia_festa;

    scanf("%i", &n);

    int dias_crescimento[n];

    for (int i = 0; i < n; i++)
        scanf("%i", &dias_crescimento[i]);

    qsort(dias_crescimento, n, sizeof(int), compare);

    primeiro_dia_festa = dias_crescimento[0] + 2;

    for (int i = 0; i < n; i++)
    {
        dia_atual = dias_crescimento[i] + i + 2;
        if (dia_atual > primeiro_dia_festa)
            primeiro_dia_festa = dia_atual;
    }

    printf("%i\n", primeiro_dia_festa);

    return 0;
}

int compare(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}