#include <bits/stdc++.h>

using namespace std;

int main() {
    queue<int> fila;
    vector<int> remo;
    int n, aux, out;

    cin >> n;
    while(n){
        for (int i = 1; i <= n; i++){
            fila.push(i);
        }
        
        aux = fila.size();
        while(aux>=2){
            out = fila.front();
            remo.push_back(out);
            fila.pop();
            out = fila.front();
            fila.push(out);
            fila.pop();
        
            aux--;
        }

        cout << "Discarded cards: ";
        for (int i = 0; i < remo.size(); i++){
            if(i==remo.size()-1)
                cout << remo[i] << endl;
            else
                cout << remo[i] << ", ";
        }

        cout<< "Remaining card: " << fila.back() << endl;
        fila = queue<int>();
        remo = vector<int>();
        
        cin >> n;
    }
    return 0;
}