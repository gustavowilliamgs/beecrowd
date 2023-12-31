#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, j;
    float l, q;
    char names[10][13];

    scanf("%d %f %f", &n, &l, &q);

    for (i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
    }

    j = 0;
    while (l > q)
    {
        l -= q;
        j = (j + 1) % n;
    }

    printf("%s %.1f\n", names[j], l);

    return 0;
}
