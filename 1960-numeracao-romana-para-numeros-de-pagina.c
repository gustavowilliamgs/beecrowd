#include <stdio.h>

int main(int argc, char const *argv[])
{
    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1}, n;
    char *simbolos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    scanf("%i", &n);

    for (int i = 0; i < 13; i++)
        while (n >= valores[i])
        {
            printf("%s", simbolos[i]);
            n -= valores[i];
        }
    printf("\n");

    return 0;
}