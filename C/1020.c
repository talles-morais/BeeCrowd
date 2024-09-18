#include <stdio.h>
 
int main() {
    int mes=0, ano=0, dia=0;
    
    scanf("%d", &dia);
    
    while(dia>=365){
      ano++;
      dia = dia-365;
    }
    printf("%d ano(s)\n", ano);
    
    while(dia>=30){
      mes++;
      dia = dia-30;
    }

    printf("%d mes(es)\n", mes);

    printf("%d dia(s)\n", dia);
 
    return 0;
}