#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char string[3];
    long decimal;
    int n;

    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", string);

        decimal = strtol(string, NULL, 16);

        printf("%c", decimal);

        if (i == n - 1)
            printf("\n");
    }

    return 0;
}