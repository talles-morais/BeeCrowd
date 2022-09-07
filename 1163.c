#include <stdio.h>
#include <math.h>
#define G 9.80665
#define PI 3.14159

int main(){
    float h;
    int p1, p2, n;
    float a,v;
    double s, voy, vox, tsub, tdes, alt, ttotal;

    

    while(scanf("%f", &h) != EOF){
        scanf("%d %d", &p1, &p2);
        scanf("%d", &n);
        while(n>0){
            scanf("%f %f", &a, &v);

            voy = v * (sin((PI*a)/180));
            vox = v * (cos((PI*a)/180));
            tsub = voy / G;

            alt = ((voy*voy)/(2*G))+h;
            tdes = sqrt((2*alt)/G);

            ttotal = tsub + tdes;
            s = vox * ttotal;

            if(s>=p1 && s<=p2){
                printf("%lf -> DUCK\n", s);
            }else
                printf("%lf -> NUCK\n", s);

            n--;
        }
    }



    return 0;
}