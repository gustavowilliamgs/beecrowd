#include <stdio.h>

int main(int argc, char const *argv[])
{
    double x;

    scanf("%lf", &x);

    double vetor[100];

    vetor[0] = x;

    for (int i = 1; i < 100; i++)
    {
        x /= 2;
        vetor[i] = x;
    }

    for (int i = 0; i < 100; i++)
        printf("N[%i] = %.4lf\n", i, vetor[i]);

    return 0;
}