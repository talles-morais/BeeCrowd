#include <stdio.h>

long long int fact(int x)
{
    int i;
    long long int res = 1;

    for (i = x; i > 0; i--)
    {
        res = res * i;
    }

    return res;
}

int main()
{

    long long int ft1, ft2, sum;
    int m, n;

    while (scanf("%d %d", &m, &n) != EOF)
    {

        ft1 = fact(m);
        ft2 = fact(n);

        sum = ft1 + ft2;

        printf("%lld\n", sum);

    }

    return 0;
}