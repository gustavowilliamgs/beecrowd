#include <stdio.h>

int main(int argc, char const *argv[])
{
    int quantas_musicas = 0, total_da_playlist = 0;

    typedef struct
    {
        int duracao;
        int ja_tocou;
    } Musica;

    while (scanf("%i %i", &quantas_musicas, &total_da_playlist) != EOF)
    {
        int contagem = 0, duracao_total = 0;
        int playlist[total_da_playlist];
        Musica musicas[quantas_musicas];

        for (int i = 0; i < quantas_musicas; i++)
        {
            scanf("%i", &musicas[i].duracao);
            musicas[i].ja_tocou = 0;
        }

        for (int i = 0; i < total_da_playlist; i++)
            scanf("%i", &playlist[i]);

        for (int i = 0; i < total_da_playlist; i++)
        {

            duracao_total += musicas[playlist[i] - 1].duracao;

            musicas[playlist[i] - 1].ja_tocou = 1;

            for (int j = 0; j < quantas_musicas; j++)
            {
                if (musicas[j].ja_tocou)
                    contagem++;
                if (contagem == quantas_musicas)
                {
                    printf("%i\n", duracao_total);
                    i = total_da_playlist;
                    break;
                }
                if (i == total_da_playlist - 1)
                {
                    printf("-1\n");
                    i = total_da_playlist;
                    break;
                }
            }
            contagem = 0;
        }
    }

    return 0;
}