#include <bits/stdc++.h>

using namespace std;

int main(){
    int casos, quad, n=0;
    unsigned long long int res=0;
    
    cin >> casos;

    while(casos--){
        cin >> quad;
        
        res = (2 * ((1-pow(2,quad))/-1))/24000;
        cout << res << " kg" << endl;
    }

    return 0;
}