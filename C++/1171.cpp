#include <bits/stdc++.h>

using namespace std;

int vet[40000], freq[2000], num[2000];

void busca(int elem, int n){

    for(int i=0;i<n;i++){
            if(vet[i+1] == elem){
                freq[i] += 1;
                num[i] = elem;
            }else if (vet[i+1]>elem){
                busca(vet[i+1], n);
            }
        }
}

int main(){
    int casos;
    int n;
    bool flag;

    cin >> casos;
    n = casos;


    while(casos--){
        for(int i=0;i<n;i++){
            cin >> vet[i];
        }
        sort(vet, vet+n);

        busca(vet[0], n);
        
        for(int i=0;i<n;i++){
            printf("[%d] -> %d\n", freq[i], num[i]);
        }
    
    }
    
    //sort(freq, freq+n);

    // for(int i=0;i<=k;i++){
    //     cout << vet[i] << "->" << freq[i] << "vezes" << endl;
    // }

}