#include <stdio.h>

int main(){
    int n, cont = 1;

    scanf("%d", &n);
    while(n--){
        printf("%d %d %d PUM\n", cont, cont+1, cont+2);
        cont+=4;
    }
    return 0;
}