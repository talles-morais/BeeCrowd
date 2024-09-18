#include <stdio.h>

int main()
{

    int n, cont = 0;
    long long int x, i;

    scanf("%d", &n);

    while (n > 0)
    {
        scanf("%lld", &x);

        for (i = 1; i <= x; i++)
        {
            if (x % i == 0)
            {
                cont++;
            }
        }

        if (cont == 2 || x==1)
        {
            printf("%d eh primo\n", x);
        }
        else
        {
            printf("%d nao eh primo\n", x);
        }

        cont = 0;

        n--;
    }

    return 0;
}