#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int i, soma[9], d1, d2, aux = 9;
    int seq1 = 0, seq2 = 0, b1, b2;
    char cpf[15], casos = 0;

    while (scanf("%s", cpf)!=EOF)
    {

        d1 = cpf[12] - '0';
        d2 = cpf[13] - '0';

        for (i = 0; i < 3; i++)
        {

            soma[i] = cpf[i] - '0';
            //printf("(%d)->%d\n", i, soma[i]);
            
        }
        for (i = 4; i < 7; i++)
        {

            soma[i-1] = cpf[i] - '0';
            //printf("(%d)->%d\n", i, soma[i]);
            
        }
        for (i = 8; i < 11; i++)
        {

            soma[i-2] = cpf[i] - '0';
            //printf("(%d)->%d\n", i, soma[i]);
            
        }

        i=0;
        // for(i=0;i<9;i++){
        //     printf("(%d)->%d\n", i, soma[i]);
        // }

        //printf("\n");

        while (i < 9)
        {
            seq1 = seq1 + (soma[i] * (i + 1));
            //printf("%d\n", seq1);
            i++;
        }
        b1 = seq1 % 11;
        if (b1 == 10)
            b1 = 0;

        // printf("%d\n", b1);

        for (i = 0; i < 9; i++)
        {
            seq2 = seq2 + (soma[i] * aux);
            aux--;
        }
        b2 = seq2 % 11;
        if (b2 == 10)
            b2 = 0;

        //printf("%d_%d, %d_%d", b1, d1, b2, d2);

        if (b1 == d1 && b2 == d2)
            printf("CPF valido\n");
        else
            printf("CPF invalido\n");

        seq1 = 0;
        seq2 = 0;
        b1=0;
        b2=0;
        d1=0;
        d2=0;
        aux=9;


        casos++;
    }

    return 0;
}