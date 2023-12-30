#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int t, n, idx, pos;
    scanf("%i", &t);

    while (t--)
    {
        scanf("%i", &n);

        pos = 0;
        int instrucoes[100];
        char tipo[10];

        for (int i = 0; i < n; i++)
        {
            scanf("%s", tipo);

            if (strcmp(tipo, "LEFT") == 0)
                instrucoes[i] = -1;
            else if (strcmp(tipo, "RIGHT") == 0)
                instrucoes[i] = 1;
            else
            {
                scanf("%s %d", tipo, &idx);
                instrucoes[i] = instrucoes[idx - 1];
            }
        }

        for (int i = 0; i < n; i++)
            pos += instrucoes[i];

        printf("%i\n", pos);
    }

    return 0;
}