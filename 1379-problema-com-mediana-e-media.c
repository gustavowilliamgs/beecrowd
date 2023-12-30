int mic(unsigned, unsigned);

int main(int argc, char const *argv[])
{
    unsigned int a, b;

    while (scanf("%u%u", &a, &b), a + b)
        printf("%i\n", mic(a, b));

    return 0;
}

int mic(unsigned num1, unsigned num2)
{
    return (2 * num1) - num2;
}