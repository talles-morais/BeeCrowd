#include <stdio.h>
#include <string.h>

int main(){

    int casos, num, cont=0;
    char str[6];

    scanf("%d", &casos);

    while(casos--){
        scanf("%s", str);

        if(strlen(str)>3) printf("3\n");
        //else if(strcmp(str, "one")) printf("1\n");
        //else if(strcmp(str, "two")) printf("2\n");
        else{
            if((str[0] == 'o' && str[1] == 'n') || (str[0] == 'o' && str[2] == 'e') || (str[1] == 'n' && str[2] == 'e')){
                printf("1\n");
            }
            if((str[0] == 't' && str[1] == 'w') || (str[0] == 't' && str[2] == 'o') || (str[1] == 'w' && str[2] == 'o')){
                printf("2\n");
            }

        }
            
    }
    return 0;
}