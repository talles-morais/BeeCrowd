//-----------------------------------------------------------INCOMPLETO-------------------------------------------------------------------------------------

#include <stdio.h>
#define PI 3.14159

double h(int vol, int maior, int menor)
{
    double hAlt;

    hAlt = (double)(vol * 3) / (((maior * maior) + (maior * menor) + (menor * menor)) * PI);
    printf("%lf\n", hAlt);

    return hAlt;
}

int main()
{

    int casos, num, quant, rb, rB, alt;
    double vol, result;

    scanf("%d", &casos);

    while (casos > 0)
    {
        scanf("%d %d", &num, &quant);
        scanf("%d %d %d", &rb, &rB, &alt);

        vol = (double)quant / num;
        result = h(vol, rB, rb);

        if (result > alt)
            printf("%.2lf", (double)alt);
        else
            printf("%.2lf\n", result);

        casos--;
    }

    return 0;
}