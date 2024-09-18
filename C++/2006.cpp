#include <bits/stdc++.h>

using namespace std;

int main(){
    int num, vet[5], cont=0;

    cin >> num;

    for(int i=0;i<5;i++){
        cin >> vet[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if(vet[i]==num) cont++;
        
    }
    
    cout << cont << endl;

    return 0;
}