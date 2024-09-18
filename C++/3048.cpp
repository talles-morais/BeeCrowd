#include <bits/stdc++.h>

using namespace std;

int main(){
    int tam , vet[500], cont=1;

    cin >> tam;

    for (int i = 0; i < tam; i++)
    {
        cin >> vet[i];
    }
    
    for (int i = 0; i < tam; i++)
    {
        if(vet[i+1]!=vet[i] && vet[i-1]!=vet[i+1]){
            cont++; 
        }

    }
    
    cout << cont << endl;

    return 0;
}