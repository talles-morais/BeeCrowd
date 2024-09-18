#include <stdio.h>
 
int main() {
 
    int i, n, vet[100], menor=10000000000;

    scanf("%d", &n);


    for(i=0;i<n;i++){
        scanf("%d", &vet[i]);
    }


    for(i=0;i<n;i++){
        if(vet[i]<menor){
            menor = vet[i];
        }
    }
    
    for(i=0;i<n;i++){
        if(vet[i]==menor){
            printf("%d\n", i+1);
            break;
        }
    }    
    
 
    return 0;
}