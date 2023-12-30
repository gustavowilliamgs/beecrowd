#include <stdio.h>

int main(int argc, char const *argv[])
{
    int divisoes, pedacos, total = 0;

    scanf("%i", &divisoes);

    while (divisoes--)
    {
        scanf("%i", &pedacos);
        total += pedacos - 1;
    }

    printf("%i\n", total);

    return 0;
}