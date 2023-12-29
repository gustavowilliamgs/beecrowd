#include <stdio.h>
#include <stdlib.h>

#define MAX 1001

int balanco(char *);

int main(int argc, char const *argv[])
{
    char *str = (char *)malloc(MAX * sizeof(char));

    while (scanf(" %s", str) != EOF)
        printf("%s\n", balanco(str) == 0 ? "correct" : "incorrect");

    free(str);
    return 0;
}

int balanco(char *str)
{
    int q = 0, i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ')' && q == 0)
            return 1;
        else if (str[i] == '(')
            q++;
        else if (str[i] == ')')
            q--;
        i++;
    }
    return q;
}