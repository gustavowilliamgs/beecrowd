#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 51

int main(int argc, char const *argv[])
{
    char string[MAX];
    short i, j = 0;

    while (fgets(string, MAX, stdin) != NULL)
    {
        short tam = strlen(string) - 1;
        string[tam] = '\0';

        for (i = 0; i < tam; i++)
        {
            if (isalpha(string[i]))
            {
                if (string[i] >= 'a' && string[i] <= 'z' && j % 2 == 0)
                    string[i] -= 32;
                if (string[i] >= 'A' && string[i] <= 'Z' && j % 2 != 0)
                    string[i] += 32;
                j++;
            }
        }
        printf("%s\n", string);
        j = 0;
    }

    return 0;
}
