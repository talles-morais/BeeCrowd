#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n;
    int atual, result=0;
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> atual;
        
        result += atual - (atual%3);
    }
    cout << result << endl;
 
    return 0;
}