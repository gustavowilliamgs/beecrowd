#include <stdio.h>
#include <stdlib.h>

void f(int **, int, int);

int main(int argc, char const *argv[])
{
    int w, h;

    scanf("%i %i", &w, &h);

    char m[h][w];

    int **ans = (int **)malloc(h * sizeof(int *));
    for (int i = 0; i < h; ++i)
        ans[i] = (int *)malloc(w * sizeof(int));

    int player[2];
    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
            scanf(" %c", &m[i][j]);
            if (m[i][j] == 'P')
            {
                player[0] = i;
                player[1] = j;
                ans[i][j] = 1;
            }
            else if (m[i][j] == '.' || m[i][j] == 'G')
                ans[i][j] = 0;
            else if (m[i][j] == '#')
                ans[i][j] = -2;
            else
                ans[i][j] = -1;
        }
    }

    f(ans, player[0], player[1]);

    int gold = 0;
    for (int i = 0; i < h; ++i)
        for (int j = 0; j < w; ++j)
            if (m[i][j] == 'G' && ans[i][j] == 1)
                gold++;

    printf("%i\n", gold);

    return 0;
}

void f(int **ans, int i, int j)
{
    if (ans[i][j] == -2)
        return;

    if (ans[i][j] == 1)
    {
        if (ans[i - 1][j] == -1 ||
            ans[i + 1][j] == -1 ||
            ans[i][j - 1] == -1 ||
            ans[i][j + 1] == -1)
        {
            return;
        }

        if (ans[i - 1][j] == 0)
        {
            ans[i - 1][j] = 1;
            f(ans, i - 1, j);
        }

        if (ans[i + 1][j] == 0)
        {
            ans[i + 1][j] = 1;
            f(ans, i + 1, j);
        }

        if (ans[i][j - 1] == 0)
        {
            ans[i][j - 1] = 1;
            f(ans, i, j - 1);
        }

        if (ans[i][j + 1] == 0)
        {
            ans[i][j + 1] = 1;
            f(ans, i, j + 1);
        }
    }

    return;
}