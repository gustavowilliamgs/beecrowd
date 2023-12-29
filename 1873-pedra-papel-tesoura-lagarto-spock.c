#include <stdio.h>
#include <string.h>

#define MAX 8

int ganhador(char *, char *);

int main(int argc, char const *argv[])
{
    int n;
    char *jogador = (char *)malloc(MAX * sizeof(char)), *oponente = (char *)malloc(MAX * sizeof(char));

    scanf("%i", &n);

    while (n--)
    {
        scanf(" %s%s", jogador, oponente);
        if (ganhador(jogador, oponente) == 0)
            printf("rajesh\n");
        else if (ganhador(jogador, oponente) == 1)
            printf("sheldon\n");
        else
            printf("empate\n");
    }

    free(jogador);
    free(oponente);
    return 0;
}

int ganhador(char *jogador, char *oponente)
{
    if (!(strcmp(jogador, oponente)))
        return 2;
    else if ((!strcmp(jogador, "tesoura")) && ((!strcmp(oponente, "papel")) || (!strcmp(oponente, "lagarto"))))
        return 0;
    else if ((!strcmp(jogador, "papel")) && ((!strcmp(oponente, "pedra")) || (!strcmp(oponente, "spock"))))
        return 0;
    else if ((!strcmp(jogador, "pedra")) && ((!strcmp(oponente, "tesoura")) || (!strcmp(oponente, "lagarto"))))
        return 0;
    else if ((!strcmp(jogador, "lagarto")) && ((!strcmp(oponente, "spock")) || (!strcmp(oponente, "papel"))))
        return 0;
    else if ((!strcmp(jogador, "spock")) && ((!strcmp(oponente, "tesoura")) || (!strcmp(oponente, "pedra"))))
        return 0;
    else
        return 1;
}
