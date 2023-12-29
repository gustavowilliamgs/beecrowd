#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, vetor[40], contagem;
    scanf("%i", &n);

    vetor[0] = 1, vetor[1] = 1, contagem = 2;

    while (contagem < n)
    {
        vetor[contagem] = vetor[contagem - 1] + vetor[contagem - 2];
        contagem++;
    }

    while (contagem > 1 && n > 1)
    {
        contagem--;
        printf("%i ", vetor[contagem]);
    }
    printf("%i\n", vetor[0]);

    return 0;
}
