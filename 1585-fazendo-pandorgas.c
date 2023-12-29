#include <stdio.h>

int pandorgas(int, int);

int main(int argc, char const *argv[])
{
    int n;
    short x, y;

    scanf("%i", &n);

    while (n--)
    {
        scanf("%hi %hi", &x, &y);
        printf("%hi cm2\n", pandorgas(x, y));
    }

    return 0;
}

int pandorgas(int a, int b)
{
    return a * b / 2;
}
