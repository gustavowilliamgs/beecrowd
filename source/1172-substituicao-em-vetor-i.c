#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vetor[10], i = 0;

    while (i < 10)
    {
        scanf("%i", &vetor[i]);
        printf("X[%i] = %i\n", i++, vetor[i] <= 0 ? 1 : vetor[i]);
    }

    return 0;
}
