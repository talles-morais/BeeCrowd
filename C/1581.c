#include <stdio.h>
#include <string.h>

char s[100][20];
char palavra[20];

int busca(char plv[], int tam){
    int i, cont =0;

    for(i=0;i<tam;i++){
        if(strcmp(plv, s[i])==0){
            cont = cont + 0;
            strcpy(palavra, s[i]);
        }else{
            cont++;
        }
    }
    return cont;

}

int main()
{
    int n, k, i, cont;

    scanf("%d", &n);

    while(n>0){

        scanf("%d", &k);
        
        for(i=0;i<k;i++){
            scanf("%s", s[i]);
        }

        cont = busca(s, k);
        n--;

        if(cont > 0){
            printf("ingles\n");
        }else{
            printf("%s\n", palavra);
        }

    }

    return 0;
}