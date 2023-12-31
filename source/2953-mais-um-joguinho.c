#include <stdio.h>

#define MOD 1000000007

int main(int argc, char const *argv[])
{
    int n;

    scanf("%i", &n);

    long long fib[99998] = {0, 0, 1, 1};

    for (int i = 4; i <= n; i++)
        fib[i] = (fib[i - 2] + fib[i - 3]) % MOD;

    printf("%lli\n", fib[n - 1]);

    return 0;
}
