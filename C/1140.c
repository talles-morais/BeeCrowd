#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char line[1051];

    while (1) {
        char first;
        int i, length;

        fgets(line, 1050, stdin);

        if (line[0] == '*')
            break;

        first = tolower(line[0]);
        length = strlen(line);

        for (i = 1; i < length; ++i) {
            if (line[i-1] == ' ' && tolower(line[i]) != first)
                break;
        }
        if (i == length)
            puts("Y");
        else
            puts("N");
    }

    return 0;
}