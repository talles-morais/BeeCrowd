#include <bits/stdc++.h>

using namespace std;

int main(){
    int qRunas, amzNec, x, soma=0;
    int vet[20];
    char vetC[20], vetLido[20];

    cin >> qRunas >> amzNec;
    

    for(int i=0;i<qRunas;i++){
        cin >> vetC[i];
        cin >> vet[i];
    }

    cin >> x;

    for(int i=0;i<x;i++){
        cin >> vetLido[i];
    }
    for(int i=0;i<qRunas;i++){
        for(int j=0;j<x;j++){
            if(vetC[i]==vetLido[j]) soma += vet[i];
        }
    }
    
    
    cout << soma << endl;
    if(soma>=amzNec) cout << "You shall pass!" << endl;
    else cout << "My precioooous" << endl;


    return 0;
}
