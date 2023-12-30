#include <stdio.h>

int main(int argc, char const *argv[])
{
    short museus, gastos, foi_cobrar_o_ignacio, soma;

    scanf("%hi", &museus);

    while (museus != -1)
    {
        foi_cobrar_o_ignacio = 0;
        soma = 0;

        while (museus--)
        {
            scanf("%hi", &gastos);

            soma += gastos;
            if (!(soma % 100))
            {
                foi_cobrar_o_ignacio++;
                soma = 0;
            }
        }
        printf("%hi\n", foi_cobrar_o_ignacio);
        scanf("%hi", &museus);
    }

    return 0;
}
