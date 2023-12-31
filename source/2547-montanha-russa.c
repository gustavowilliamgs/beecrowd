#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, amax, amin, x, i = 0;

    while (scanf("%i %i %i", &n, &amin, &amax) != EOF)
    {
        while (n--)
        {
            scanf("%i", &x);
            if (x >= amin && x <= amax)
                i++;
        }
        printf("%i\n", i);

        i = 0;
    }

    return 0;
}