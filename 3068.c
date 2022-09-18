#include <stdio.h>

int main(){
    int x1, x2, y1, y2, nMet, test=1, posMet, xM, yM, i, hit = 0;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    while ((x1 != 0) && (x2 != 0) && (y1 != 0) && (y2 != 0)){
        scanf("%d", &nMet);

        while (nMet > 0)
        {
            
            scanf("%d %d", &xM, &yM);

            if ((xM >= x1) && (xM <= x2) && (yM <= y1) && (yM >= y2))
            {
                hit++;
            }

            nMet--;
        }

        printf("Teste %d\n", test);
        printf("%d\n", hit);

        test++;
        hit = 0;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    }

    return 0;
}