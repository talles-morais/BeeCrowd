#include <bits/stdc++.h>

using namespace std;

int main(){
    int casos;
    char str[4];
    int n1, n2;

    cin >> casos;
    while(casos>0){
        cin >> str;

        n1 = str[0]-'0';
        n2 = str[2]-'0';
        
        if(n1==n2) cout << n1*n2 << endl;
        else if(str[1]>='a' && str[1]<='z') cout << n1+n2 << endl;
        else if(str[1]>='A' && str[1]<= 'Z') cout << n2-n1 << endl;


        casos--;
    }

    return 0;
}