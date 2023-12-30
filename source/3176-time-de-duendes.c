#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[21];
    short idade;
} Duende;

int comparar(const void *, const void *);

int main(int argc, char const *argv[])
{
    short n, times;
    scanf("%hi", &n);

    Duende arr[n];
    times = n / 3;

    for (short i = 0; i < n; i++)
        scanf("%s %hi", arr[i].nome, &arr[i].idade);

    qsort(arr, n, sizeof(Duende), comparar);

    for (short i = 0; i < times; i++)
    {
        printf("Time %hi\n", i + 1);
        for (short j = i; j < n; j += times)
            printf("%s %hi\n", arr[j].nome, arr[j].idade);
        printf("\n");
    }

    return 0;
}

int comparar(const void *a, const void *b)
{
    Duende *duendeA = (Duende *)a;
    Duende *duendeB = (Duende *)b;

    if (duendeA->idade < duendeB->idade)
        return 1;
    if (duendeA->idade > duendeB->idade)
        return -1;

    return strcmp(duendeA->nome, duendeB->nome);
}