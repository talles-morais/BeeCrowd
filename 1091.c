#include <stdio.h>

int main(){
    int k, d1, d2;
    int x[1000], y[1000];
    int i;

    scanf("%d", &k); //numero de solicitações

    while(k!=0){
        scanf("%d %d", &d1, &d2); // divisa

        for(i=0; i<k; i++){
            scanf("%d %d", &x[i], &y[i]); // local da casa
        }

        for(i=0;i<k;i++){
            if(x[i]==d1 || y[i]==d2){
                printf("divisa\n");
            }

            if(x[i]<d1 && y[i]>d2){
                printf("NO\n");
            }

            if(x[i]>d1 && y[i]>d2){
                printf("NE\n");
            }

            if(x[i]<d1 && y[i]<d2){
                printf("SO\n");
            }

            if(x[i]>d1 && y[i]<d2){
                printf("SE\n");
            }

        }
        scanf("%d", &k);


    }

    return 0;
}
