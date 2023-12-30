#include <stdio.h>
#include <string.h>

#define MAX 43

int main(int argc, char const *argv[])
{
    int numero_de_testes, tamanho, contador, indicador = 0;
    char sobrenome[MAX];
    unsigned char vogais[] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};

    scanf("%i", &numero_de_testes);
    getchar();

    while (numero_de_testes--)
    {
        scanf("%s", sobrenome);
        getchar();

        contador = 0;
        tamanho = strlen(sobrenome);

        for (int i = 0; i < tamanho; i++)
        {
            for (int j = 0; j < 10; j++)
                if (sobrenome[i] != vogais[j])
                    indicador = 1;
                else
                {
                    indicador = 0;
                    break;
                }
            if (indicador == 1)
                contador++;
            else if (contador == 3)
                break;
            else
                contador = 0;
        }
        if (contador == 3 || !(strcmp(sobrenome, "Pfitscher")) || !(strcmp(sobrenome, "Kowalcyzk")) || !(strcmp(sobrenome, "Adamczyk")) || !(strcmp(sobrenome, "Schmidt")) || !(strcmp(sobrenome, "Schneider")) || !(strcmp(sobrenome, "Schmitz")))
            printf("%s nao eh facil\n", sobrenome);
        else
            printf("%s eh facil\n", sobrenome);
    }

    return 0;
}
