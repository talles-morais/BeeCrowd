#include <stdio.h>
 
int main() {
 
    int i, casos, dir;
    char str[1001], buss[] = {'N', 'L', 'S', 'O'};
    
    scanf("%d", &casos);

    while(casos!=0){
        dir=0;
        scanf("%s", str);

        for(i=0;i<casos;i++){
            if(str[i]=='D') dir++;
            
            if(str[i]=='E') dir--;

            if(dir>3) dir = 0;

            if(dir<0) dir = 3;
            
        }

        printf("%c\n", buss[dir]);

        scanf("%d", &casos);

    }

 
    return 0;
}