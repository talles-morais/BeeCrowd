#include <bits/stdc++.h>

using namespace std;

int	main(){
    int saida, viagem, fuso, chegada;

    cin >> saida >> viagem >> fuso;

    chegada = (saida+viagem)+fuso;

    if(chegada == 0 || chegada==24) chegada = 0;
    else if(chegada>24) chegada -= 24;
    else if(chegada<0) chegada += 24;

    cout << chegada << endl;
    return 0;
}
