#include <bits/stdc++.h>

using namespace std;

int main(){
    int pres, bil, vet[20000], flag = 1, nVet[20000], n;

    cin >> pres;
    cin >> bil;

    while(pres!=0 && bil!=0){
        n=0;

        for(int i=0; i < bil;i++){
            cin >> vet[i];
        }

        //sort(vet, vet+bil);


        for(int i = 0; i < bil ; i++) {    
            for(int j = i + 1; j < bil; j++) {    
                if(vet[i] == vet[j]){
                    for(int a = 0; a < bil; a++){
                        if(vet[i] == nVet[a]){
                            flag = 0;
                        }
                    }       
                    if(flag) {
                        nVet[n] = vet[i];
                        n++;
                    }
                    flag = 1;
                }
            }    
        }

        for(int i=0;i<n;i++){
            vet[i] = 0;
            nVet[i] = 0;
        }


        printf("%d\n", n);
        
    
        cin >> pres;
        cin >> bil;
    }


    return 0;
}