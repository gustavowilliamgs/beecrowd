#include <stdio.h>
#include <math.h>

int rafael(int, int);
int beto(int, int);
int carlos(int, int);

int main(void)
{
    int x, y;
    int n;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d", &x, &y);

        if (rafael(x, y) > beto(x, y) && rafael(x, y) > carlos(x, y))
            printf("Rafael ganhou\n");
        else if (beto(x, y) > rafael(x, y) && beto(x, y) > carlos(x, y))
            printf("Beto ganhou\n");
        else
            printf("Carlos ganhou\n");
    }

    return 0;
}

int rafael(int x, int y)
{
    return pow((3 * x), 2) + pow(y, 2);
}

int beto(int x, int y)
{
    return 2 * pow(x, 2) + pow((5 * y), 2);
}

int carlos(int x, int y)
{
    return -100 * x + pow(y, 3);
}