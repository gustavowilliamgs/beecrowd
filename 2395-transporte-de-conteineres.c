#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, x, y, z;

    scanf("%i%i%i%i%i%i", &a, &b, &c, &x, &y, &z);
    printf("%i\n", (x / a) * (y / b) * (z / c));

    return 0;
}