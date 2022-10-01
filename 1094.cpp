#include <bits/stdc++.h>

using namespace std;

int main(){

    int cases, quant[100000];
    int qSapo=0, qCoelho=0, qRato=0, total;
    double pC, pR, pS;
    char tipo[100000];
    cout<<fixed;
    cout.precision(2);

    cin >> cases;
    for (int i = 0; i < cases; i++){
        cin >> quant[i];
        cin >> tipo[i];
        if(tipo[i] == 'C') qCoelho += quant[i]; 
        if(tipo[i] == 'R') qRato += quant[i]; 
        if(tipo[i] == 'S') qSapo += quant[i]; 
    }

    total = qCoelho + qRato + qSapo;

    pC =  ((double) qCoelho/(double) total) * 100.0;
    pR =  ((double) qRato/(double) total) * 100.0;
    pS =  ((double) qSapo/(double) total) * 100.0;

    cout << "Total: "<< total << "cobaias" << endl;
    cout << "Total de coelhos: "<< qCoelho << endl;
    cout << "Total de ratos: "<< qRato << endl;
    cout << "Total de sapos: "<< qSapo << endl;
    cout << "Percentual de coelhos: " << pC << " %"<< endl;
    cout << "Percentual de ratos: " << pR << " %"<< endl;
    cout << "Percentual de sapos: " << pS << " %"<< endl;

    return 0;
}