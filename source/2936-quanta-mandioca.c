#include <stdio.h>

int soma_vetor(int *);

int main(int argc, char const *argv[])
{
    int arr[] = {300, 1500, 600, 1000, 150};
    int num, soma = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%i", &num);
        arr[i] *= num;
    }

    soma = soma_vetor(arr);
    printf("%i\n", soma + 225);

    return 0;
}

int soma_vetor(int *arr)
{
    int s = 0;

    for (int i = 0; i < 5; i++)
        s += arr[i];

    return s;
}