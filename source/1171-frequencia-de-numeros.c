#include <stdio.h>
#include <stdlib.h>

int comparador(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(int argc, char const *argv[])
{
    int n;

    scanf("%i", &n);

    int vetor[n];

    for (int i = 0; i < n; i++)
        scanf("%i", &vetor[i]);

    qsort(vetor, n, sizeof(int), comparador);

    for (int i = 0; i < n; i++)
    {
        if (vetor[i] == -1)
            continue;

        int j = i + 1, c = 1;
        while (vetor[i] == vetor[j])
        {
            c++;
            vetor[j] = -1;
            j++;
        }
        printf("%i aparece %i vez(es)\n", vetor[i], c);
        if (j == n)
            break;
    }

    return 0;
}