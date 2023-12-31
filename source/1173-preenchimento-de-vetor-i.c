#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n[10];

    scanf("%d", &n[0]);

    for (int i = 0; i < 10; i++, n[0] *= 2)
        printf("N[%d] = %d\n", i, n[0]);

    return 0;
}
