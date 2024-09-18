#include <bits/stdc++.h>
using namespace std;
 
int fact(int n) {
    int result;
    if(n <= 1) result = 1;
    else result = fact(n-1) * n;
    
    return result;
}
 
int main() {
    int n;
    cin >> n;
    
    cout << fact(n) << endl;
 
    return 0;
}