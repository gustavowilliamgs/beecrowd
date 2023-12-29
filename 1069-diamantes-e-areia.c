#include <stdio.h>
#include <stdlib.h>

#define MAX 1001

int a(int, int, char *, int);

int main(int argc, char const *argv[])
{
    char *str = (char *)malloc(MAX * sizeof(char));
    int n, i, j, t;

    scanf("%i", &n);

    while (n--)
    {
        scanf(" %s", str);
        printf("%i\n", a(t, i, str, j));
    }

    free(str);
    return 0;
}

int a(int t, int i, char *str, int j)
{
    t = i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '<')
        {
            j = i;
            while (str[j] != '\0')
            {
                if (str[j] == '>')
                {
                    str[j] = '.';
                    t++;
                    break;
                }
                j++;
            }
        }
        i++;
    }
    return t;
}