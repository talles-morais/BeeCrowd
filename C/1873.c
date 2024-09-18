#include <stdio.h>
#include <string.h>

int main(){

    int casos;
    char raj1, raj2, shel1, shel2;
    char esc[16];

    scanf("%d", &casos);
    getchar();

    while (casos > 0){

        gets(esc);        
        raj1 = esc[0];
        raj2 = esc[1];

        for(int i=0;i < strlen(esc); i++){
            if(esc[i] == ' '){
                shel1 = esc[i+1];
                shel2 = esc[i+2];
                break;
            }
        }

        if  (((raj1 == 'p')&&(raj2 == 'e')&&(shel1 == 't'))||((raj1 == 'p')&&(raj2 == 'e')&&(shel1 == 'l'))||
         ((raj1 == 'p')&&(raj2 == 'a')&&(shel1 == 's'))||((raj1 == 'p')&&(raj2 == 'a')&&(shel1 == 'p')&&(shel2=='e'))||
         ((raj1 == 't')&&(shel1 == 'l'))||((raj1 == 't')&&(shel1 == 'p')&&(shel2 == 'a'))||
         ((raj1 == 'l')&&(shel1== 's'))||((raj1 == 'l')&&(shel1 == 'p')&&(shel2 == 'a'))||
         ((raj1 == 's')&&(shel1 == 't'))||((raj1 == 's')&&(shel1 == 'p')&&(shel2 == 'e'))){
            printf("rajesh\n");
        }
        else{
            if(raj1 == shel1 && raj2 == shel2){
            printf("empate\n");
            }
            else{
                printf("sheldon\n");
            }
        }

        casos--;
    }

    return 0;
}