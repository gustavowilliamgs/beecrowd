#include <stdio.h>

int main(int argc, char const *argv[])
{
    int km, ped, cutskm, custped, pedagio;

    scanf("%i %i", &km, &ped);
    scanf("%i %i", &cutskm, &custped);

    pedagio = (km / ped * custped) + (cutskm * km);

    printf("%i\n", pedagio);

    return 0;
}