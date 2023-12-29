#include <stdio.h>

int f(int, int);

int main(int argc, char const *argv[])
{
    int a, b;

    scanf("%i %i", &a, &b);
    printf("%i\n", f(a, b));

    return 0;
}

int f(int x, int y)
{
    return x - y;
}
