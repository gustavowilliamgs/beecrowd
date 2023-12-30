#include <stdio.h>

int main(int argc, char const *argv[])
{
    int casos;
    int x, y;

    scanf("%i", &casos);

    while (casos--)
    {
        scanf("%i%i", &x, &y);
        printf("%i\n", (int)(x / 3.0) * (int)(y / 3.0));
    }

    return 0;
}
