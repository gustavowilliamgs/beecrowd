#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0, n[20];

    for (; i < 20; i++)
        scanf("%i", &n[i]);
    for (int j = 0; j < 20; j++, i--)
        printf("N[%i] = %i\n", j, n[i - 1]);

    return 0;
}