#include <stdio.h>

int busca(int m[9][9])
{
    int i, j, k = 0, sm[9], cont = 0;

    // bloco 1
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sm[k] = m[i][j];

            k++;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (sm[i] == sm[j])
            {
                cont++;
            }
        }
    }

    k = 0;

    // bloco 2
    for (i = 0; i < 3; i++)
    {
        for (j = 3; j < 6; j++)
        {
            sm[k] = m[i][j];

            k++;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (sm[i] == sm[j])
            {

                cont++;
            }
        }
    }

    k = 0;
    // bloco 3
    for (i = 0; i < 3; i++)
    {
        for (j = 6; j < 9; j++)
        {
            sm[k] = m[i][j];

            k++;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (sm[i] == sm[j])
            {

                cont++;
            }
        }
    }

    k = 0;

    // bloco 4
    for (i = 3; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sm[k] = m[i][j];

            k++;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (sm[i] == sm[j])
            {

                cont++;
            }
        }
    }

    k = 0;

    // bloco 5
    for (i = 3; i < 6; i++)
    {
        for (j = 3; j < 6; j++)
        {
            sm[k] = m[i][j];

            k++;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (sm[i] == sm[j])
            {

                cont++;
            }
        }
    }

    k = 0;

    // bloco 6
    for (i = 3; i < 6; i++)
    {
        for (j = 6; j < 9; j++)
        {
            sm[k] = m[i][j];

            k++;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (sm[i] == sm[j])
            {

                cont++;
            }
        }
    }

    k = 0;

    // bloco 7
    for (i = 6; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sm[k] = m[i][j];

            k++;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (sm[i] == sm[j])
            {

                cont++;
            }
        }
    }

    k = 0;

    // bloco 8
    for (i = 6; i < 9; i++)
    {
        for (j = 3; j < 6; j++)
        {
            sm[k] = m[i][j];

            k++;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (sm[i] == sm[j])
            {

                cont++;
            }
        }
    }

    k = 0;

    // bloco 9
    for (i = 6; i < 9; i++)
    {
        for (j = 6; j < 9; j++)
        {
            sm[k] = m[i][j];

            k++;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (sm[i] == sm[j])
            {

                cont++;
            }
        }
    }

    k = 0;

    if (cont > 0)
    {
        return 1; // tem num repetido
    }
    else
    {
        return 0;
    }
}

int buscaLin(int mat[9][9])
{
    int i, j, c[9];

    for (j = 0; j < 9; j++)
    {
        for (i = 0; i < 9; i++)
        {
            c[i] = 0;
        }

        for (i = 0; i < 9; i++)
        {
            c[mat[j][i] - 1]++;
        }

        for (i = 0; i < 9; i++)
        {
            if (c[i] != 1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
}
int buscaCol(int mat[9][9])
{
    int i, j, c[9];

    for (j = 0; j < 9; j++)
    {
        for (i = 0; i < 9; i++)
        {
            c[i] = 0;
        }

        for (i = 0; i < 9; i++)
        {
            c[mat[i][j] - 1]++;
        }

        for (i = 0; i < 9; i++)
        {
            if (c[i] != 1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
}

int main()
{

    int n, mat[9][9],c[9] ,cont = 0;
    int i, j, result, resultL, resultC;

    scanf("%d", &n);
    while (cont < n)
    {

        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 9; j++)
            {
                scanf("%d", &mat[i][j]);
            }
        }

        // Verifica se as linhas nao contem numeros repetidos.

        for (j = 0; j < 9; j++)
        {
            for (i = 0; i < 9; i++)
            {
                c[i] = 0;
            }

            for (i = 0; i < 9; i++)
            {
                c[mat[j][i] - 1]++;
            }

            for (i = 0; i < 9; i++)
            {
                if (c[i] != 1)
                {
                    resultL =1;
                }else{
                    resultL=0;
                }
            }
        }

        // Verifica se as colunas nao contem numeros repetidos.

        for (j = 0; j < 9; j++)
        {
            for (i = 0; i < 9; i++)
            {
                c[i] = 0;
            }

            for (i = 0; i < 9; i++)
            {
                c[mat[i][j] - 1]++;
            }

            for (i = 0; i < 9; i++)
            {
                if (c[i] != 1)
                {
                    resultC =1;
                }else{
                    resultC=0;
                }
            }
        }

        result = busca(mat);
        // resultL = buscaLin(mat);
        // resultC = buscaCol(mat);
        printf("Instancia %d\n", cont + 1);

        if (result == 0 && resultL == 0 && resultC == 0)
        {
            printf("SIM\n\n");
        }
        else
        {
            printf("NAO\n\n");
        }
        cont++;
    }

    return 0;
}
