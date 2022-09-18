//------------------------------------------------------INCOMPLETO--------------------------------------

#include <stdio.h>
#include <math.h>

int menorLado(int l1, int l2){
    if(l1<=l2) return l1;
    else return l2;
}

int main(){ 
    double l, c, r1, r2;
    double hip, somaD;
    int cont=0;

    scanf("%lf %lf %lf %lf", &l,&c,&r1,&r2);

    while ( l!=0 && c!=0 && r1!=0 && r2!=0){
        
        hip = sqrt((l*l)+(c*c));
        printf("%lf\n", hip);

        somaD = (r1*2)+(r2*2);

        if((r1+(menorLado(l, c)-(r1+r2))+r2)==menorLado(l,c)) printf("n\n");
        if((r1+(menorLado(l, c)-(r1+r2))+r2)<menorLado(l,c)) printf("S\n");
        else printf("N\n");

        // switch(cont){
        //     case 1:
        //         printf("S\n");
        //         break;
        //     case 2:
        //         printf("S\n");
        //         break;
        //     case 3:
        //         printf("N\n");
        //         break;      
        // }

        // if(cont<3) printf("S\n");
        // else printf("N\n");

        cont=0;

        scanf("%lf %lf %lf %lf", &l,&c,&r1,&r2);
    }    
    return 0;
}