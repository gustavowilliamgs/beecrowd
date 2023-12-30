#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%i", &n);

    char jogador1[10], jogador2[10];

    for (int i = 0; i < n; i++)
    {
        scanf(" %s %s", jogador1, jogador2);

        if ((strcmp(jogador1, "ataque") == 0) && strcmp(jogador2, "pedra") == 0)
            printf("Jogador 1 venceu\n");
        else if ((strcmp(jogador1, "ataque") == 0) && strcmp(jogador2, "papel") == 0)
            printf("Jogador 1 venceu\n");
        else if ((strcmp(jogador1, "pedra") == 0) && strcmp(jogador2, "papel") == 0)
            printf("Jogador 1 venceu\n");
        else if ((strcmp(jogador1, "ataque") == 0) && strcmp(jogador2, "ataque") == 0)
            printf("Aniquilacao mutua\n");
        else if ((strcmp(jogador1, "papel") == 0) && strcmp(jogador2, "papel") == 0)
            printf("Ambos venceram\n");
        else if ((strcmp(jogador1, "pedra") == 0) && strcmp(jogador2, "pedra") == 0)
            printf("Sem ganhador\n");
        else if ((strcmp(jogador1, "papel") == 0) && strcmp(jogador2, "pedra") == 0)
            printf("Jogador 2 venceu\n");
        else if ((strcmp(jogador1, "pedra") == 0) && strcmp(jogador2, "ataque") == 0)
            printf("Jogador 2 venceu\n");
        else if ((strcmp(jogador1, "papel") == 0) && strcmp(jogador2, "ataque") == 0)
            printf("Jogador 2 venceu\n");
    }
}