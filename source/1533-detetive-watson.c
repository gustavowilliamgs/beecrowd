#include <stdio.h>

int main(int argc, char const *argv[])
{
    short suspeitos, numero;

    while (scanf("%hi", &suspeitos), suspeitos)
    {
        short i = 1;
        short maior = 0, segundo_maior = 0;
        short posicao = 1, posicao_segundo_maior = 1;

        while (suspeitos--)
        {
            scanf("%hi", &numero);

            if (numero > maior)
            {
                segundo_maior = maior;
                posicao_segundo_maior = posicao;
                maior = numero;
                posicao = i;
            }
            else if (numero > segundo_maior)
            {
                segundo_maior = numero;
                posicao_segundo_maior = i;
            }
            else
                ;
            i++;
        }
        printf("%hi\n", posicao_segundo_maior);
    }

    return 0;
}