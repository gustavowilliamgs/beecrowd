#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 21

int c(char *, int, int);

int main(int argc, char const *argv[])
{
    int n, l;
    char *senha = (char *)malloc(MAX * sizeof(char));

    scanf("%i", &n);

    while (n--)
    {
        scanf(" %s", senha);

        if (senha[0] != 'R' || senha[1] != 'A' || strlen(senha) < 20)
        {
            printf("DADOS INVALIDOS\n");
            continue;
        }

        l = 0;
        for (int i = 2; i < MAX - 1; i++)
            if (c(senha, i, l))
            {
                printf("%c", senha[i]);
                l = 1;
            }

        printf("\n");
    }

    free(senha);
    return 0;
}

int c(char senha[], int i, int l)
{
    return senha[i] != '0' || l != 0;
}