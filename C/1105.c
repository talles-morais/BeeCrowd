#include <stdio.h>

int main(){
    int nBank, deb, reserva[20];
    int dev, cred, vDeb, cont=0;

    scanf("%d %d", &nBank, &deb);
    
    while(nBank != 0 && deb != 0){
        
        for(int i=0;i<nBank;i++){
            scanf("%d", &reserva[i]);
        }

        
        for(int i=0;i<deb;i++){
            scanf("%d %d %d", &dev, &cred, &vDeb);
            reserva[cred-1] += vDeb;
            reserva[dev-1] -= vDeb;
        }

        for(int i=0;i<nBank;i++){
            if(reserva[i]<0){
                cont++;
            }
        }

        if(cont>0) printf("N\n");
        else printf("S\n");

        cont = 0;
        scanf("%d %d", &nBank, &deb);

    }

    return 0;
}