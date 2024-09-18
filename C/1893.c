#include <stdio.h>

int main(){
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    if(n2<3) printf("nova\n");

    if(n2>96) printf("cheia\n");
    
    if((n2>=3) && (n2<=96) && ((n2-n1)>0)) printf("crescente\n");

    if((n2>=3) && (n2<=96) && ((n2-n1)<0)) printf("minguante\n");

    return 0;
}