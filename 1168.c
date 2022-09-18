#include <stdio.h>

 
int main() {
 
    int casos;
    char num[150];
    int soma = 0, alg;

    scanf("%d", &casos);

    while(casos>0){
        scanf("%s", num);

        for(int i=0;i<strlen(num);i++){

            alg = num[i]-'0';
            if(alg == 1){
                soma += 2;
            }
            if(alg == 7){
                soma += 3;
            }
            if(alg == 4){
                soma += 4;
            }
            if(alg == 3 || alg == 5 || alg == 2){
                soma += 5;
            }
            if(alg == 6 || alg == 9 || alg == 0){
                soma += 6;
            }
            if(alg == 8){
                soma += 7;
            }
        }

        printf("%d leds\n", soma);
        soma = 0;
        casos--;

    }
 
    return 0;
}