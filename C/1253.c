#include<stdio.h>
#include<string.h>

int main(){
    int casos, cod;
    char str[51], strNew[51];

    scanf("%d", &casos);

    while(casos--){

        scanf("%s", str);
        scanf("%d", &cod);

        for(int i=0;i<strlen(str);i++){
            if((str[i]-cod)<'A') strNew[i] = (str[i]-cod)+26;
            else if((str[i]-cod)>='A') strNew[i] = (str[i]-cod);
        }
        for(int i=0;i<strlen(str);i++){
            printf("%c", strNew[i]);
        }
        printf("\n");
    }


    return 0;
}