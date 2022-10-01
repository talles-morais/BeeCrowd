#include <bits/stdc++.h>

using namespace std;

int main(){

    string sign, art, nStr;
    int cont=1, res;

    cin >> sign;
    while (sign != "0")
    {
        cin >> art;

        res = art.find(sign) + 1;

        if(res == 0){
            cout << "Instancia " << cont << endl;
            cout << "falsa" << endl;
        }else{
            cout << "Instancia " << cont << endl;
            cout << "verdadeira" << endl;
        }

        cin >> sign;
        if(sign!="0"){
            cout << endl;
        }
        cont++;
    }
    


    return 0;
}