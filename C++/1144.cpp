#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n;
    
    cin >> n;
    cout << fixed << setprecision(0);
    
    for(int i = 1; i <= n; i++) {
        cout << i << " " << pow(i, 2) << " " << pow(i,3) << endl;
        cout << i << " " << pow(i, 2)+1 << " " << pow(i,3)+1 << endl;
    }
 
    return 0;
}