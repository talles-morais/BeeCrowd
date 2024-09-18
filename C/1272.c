#include <stdio.h>
#include <string.h>

int main()
{
    char string[51], aux[26];
    int i = 0, j, casos;

    scanf("%d", &casos);
    getchar();

    for (int k = 0; k < casos; k++)
    {

        gets(string);
        // aux[strlen(string)] = '\0';

        if (string[0] >= 'A' && string[0] <= 'Z' || string[0] >= 'a' && string[0] <= 'z')
        {
            // printf("%c", string[0]);
            aux[0] = string[0];
            j = 1;
        }
        else
        {
            j = 0;
        }

        while (string[i] != '\0')
        {
            if (string[i] == ' ' && string[i + 1] != ' ')
            {
                aux[j] = string[i + 1];
                j++;
            }
            i++;
        }
        aux[j] = '\0';

        printf("%s\n", aux);
        i = 0;
    }

    return 0;
}