#include <bits/stdc++.h>

using namespace std;

vector<int> vt;

bool compara(int ant, int atual, int prox){
    return ((ant>atual && prox>atual) || (ant<atual && prox<atual));
}

int main(){
    int casos, n;
    int cont=0;

    cin >> casos;

    while(casos){
        for (int i = 0; i < casos; i++){
            cin >> n;
            vt.push_back(n);
        }
        
        for (int j = 0; j < casos; j++){
            if(j==0 && compara(vt[casos-1], vt[0], vt[1])){
                cont++;
            }
            else if(j==casos-1 && compara(vt[casos-2], vt[casos-1], vt[0])){
                cont++;
            }
            else if(j!=0 && j!=casos-1 && compara(vt[j-1], vt[j], vt[j+1])){
                cont++;
            }
        }

        cout << cont << endl;

        vt.clear();
        cont=0;
        cin >> casos;
    }

    return 0;
}