#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{

    short bit, aux;
    unsigned short qts_its50, qts_bits10, qts_bits5, qts_bits1;
    unsigned short qtsTestes = 0;

    while (true)
    {

        scanf("%hu", &bit);

        if (!bit)
            break;

        qts_its50 = qts_bits10 = qts_bits5 = qts_bits1 = 0;

        qts_its50 = bit / 50;
        bit = bit % 50;

        qts_bits10 = bit / 10;
        bit = bit % 10;

        qts_bits5 = bit / 5;
        bit = bit % 5;

        qts_bits1 = bit;

        printf("Teste %hu\n", ++qtsTestes);
        printf("%hu %hu %hu %hu\n\n", qts_its50, qts_bits10, qts_bits5, qts_bits1);
    }

    return 0;
}