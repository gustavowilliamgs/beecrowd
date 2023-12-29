#include <stdio.h>

#define MAX 21

short strlen2(char *);

int main(int argc, char const *argv[])
{
    char str[MAX];

    scanf("%s", str);
    printf("%s\n", strlen2(str) >= 10 ? "palavrao" : "palavrinha");

    return 0;
}

short strlen2(char *str)
{
    int contador = 0;

    while (str[contador] != '\0')
        contador++;

    return contador;
}