#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, tempo, total = 0, anterior;

    scanf("%i", &n);

    while (n--)
    {
        scanf("%i", &tempo);

        if ((tempo - anterior) < 10 && total != 0)
        {
            total += (tempo - anterior);
            anterior = tempo;
            continue;
        }
        anterior = tempo;
        total += 10;
    }

    printf("%i\n", total);

    return 0;
}