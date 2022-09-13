#include <stdio.h>

int main()
{

    int casos, tiros[50], t, i, hit = 0;
    char jogadas[50];

    scanf("%d", &casos);

    while (casos > 0)
    {

        scanf("%d", &t);

        for (i = 0; i < t; i++)
        {
            scanf("%d", &tiros[i]);
        }

        scanf("%s", &jogadas);

        for (i = 0; i < t; i++)
        {
            if (jogadas[i] == 'S' && ((tiros[i] == 1) || (tiros[i]) == 2))
            {
                hit++;
                //printf("[%c] -> %d\n\n", jogadas[i], tiros[i]);
            }
            if ((jogadas[i] == 'J') && (tiros[i] > 2))
            {
                hit++;
                //printf("[%c] -> %d\n\n", jogadas[i], tiros[i]);
            }
        }
        printf("%d\n", hit);
        hit = 0;
        casos--;
    }

    return 0;
}
