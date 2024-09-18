#include <stdio.h>
#define MAX 3

int j1, j2;
 
int main() {
 
    int num[MAX], i;
    long long int menor=1000000000000, menor1=1000000000000, menor2=1000000000000;
    
    
    scanf("%d %d %d", &num[0], &num[1], &num[2]);
    
    
    for(i=0;i<MAX; i++){
        if(num[i]<menor){
            menor = num[i];
            j1= i;
        }
    }
    
    for(i=0;i<MAX; i++){
        if(num[i]<=menor1 && i!=j1){
            menor1 = num[i];
            j2 = i;
        }
    }
    
    for(i=0;i<MAX; i++){
        if(num[i]<=menor2 && i!=j2 && i!=j1){
            menor2 = num[i];
        }
    }
    
    printf("%lld\n%lld\n%lld\n", menor, menor1, menor2);
    printf("\n");

    for(i=0;i<MAX;i++){
        printf("%d\n", num[i]);
    }

  return 0;
}