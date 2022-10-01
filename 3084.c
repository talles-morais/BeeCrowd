#include <stdio.h>

int main () {
    int grauH, grauM;
    int hora, min;

    while (scanf("%d %d", &grauH, &grauM)!=EOF){
        
        hora = grauH/30;
        min = grauM/6;

        printf("%02d:%02d\n", hora, min);

    }
    
    return 0;
}