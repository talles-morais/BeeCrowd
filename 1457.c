#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long int fact(int num, int k){
    
    int i, result=1, mult;

    
        for(i=num;i>0;i= i - k){
            result =  result * i;

        }

    return result;

}


int main()
{

    int casos, i, exc = 0, num, aux;
    long long int result;
    char fat[24];

    scanf("%d", &casos);

    while (casos > 0)
    {
        exc = 0;
        result = 1;

        scanf("%s", fat);

        for (i = 0; i < strlen(fat) ; i++)
        {
            if (fat[i] == '!')
            {
                exc++;
            }
        }

        num = atoi(fat);
        aux = 0;

        // while (aux <= exc)
        // {

            
        //     if ((num - (aux * exc)) >= 1)
        //     {
        //         result = result * (num - aux * exc);
        //     }
        //     aux++;
        // }
        result = fact(num, exc);

        printf("%lld\n", result);

        casos--;
    }
    return 0;
}
