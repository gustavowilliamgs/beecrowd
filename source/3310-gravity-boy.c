#include <stdio.h>

#define _CHAO_ -1
#define _TETO_ 1

int contar_pulos(long *, long *, int, short);

int main(int argc, char const *argv[])
{
    int n, total_chao = 0, total_teto = 0;

    scanf("%i", &n);

    long chao[n], teto[n];

    for (int i = 0; i < n; i++)
        scanf("%li", &teto[i]);
    for (int i = 0; i < n; i++)
        scanf("%li", &chao[i]);

    if (chao[0] != 0)
        total_chao = contar_pulos(chao, teto, n, _CHAO_);
    if (teto[0] != 0)
        total_teto = contar_pulos(chao, teto, n, _TETO_);

    if (total_chao < total_teto && total_chao != 0)
        printf("%i\n", total_chao);
    else if (total_teto < total_chao && total_teto != 0)
        printf("%i\n", total_teto);
    else
        printf("%i\n", total_chao != 0 ? total_chao : total_teto);

    return 0;
}

int contar_pulos(long chao[], long teto[], int n, short chao_ou_teto)
{
    int total_pulos = 0, i = 0;

    while (i < n)
    {
        if (chao_ou_teto == _CHAO_)
        {
            for (int j = i; j + 1 < n; j++, i++)
            {
                if ((chao[j] < chao[j + 1] || chao[j + 1] == 0))
                {
                    total_pulos++;
                    chao_ou_teto = _TETO_;
                    break;
                }
            }
        }
        else if (chao_ou_teto == _TETO_)
        {
            for (int j = i; j + 1 < n; j++, i++)
            {
                if (teto[j] < teto[j + 1] || teto[j + 1] == 0)
                {
                    total_pulos++;
                    chao_ou_teto = _CHAO_;
                    break;
                }
            }
        }
        i++;
    }
    return total_pulos;
}