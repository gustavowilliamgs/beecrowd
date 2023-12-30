#include <stdio.h>

short xadrez(short, short);

short main(int argc, char const *argv[])
{
    short x, y;

    scanf("%hi %hi", &x, &y);
    printf("%hi\n", xadrez(x, y));

    return 0;
}

short xadrez(short a, short b)
{
    return (a + b) % 2 == 0 ? 1 : 0;
}