#include <bits/stdc++.h>

using namespace std;

int main(){
    int quant[3], calc[3];

    for (int i = 0; i < 3; i++) cin >> quant[i];

    calc[0] = (quant[1]*2)+(quant[2]*4);
    calc[1] = (quant[0]*2)+(quant[2]*2);
    calc[2] = (quant[0]*4)+(quant[1]*2);
    
    sort(calc, calc+3);

    cout << calc[0] << endl;
    
    return 0;
}