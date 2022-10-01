#include <bits/stdc++.h>

using namespace std;

int main(){
    int cases, tam;
    string str1, str2, nStr;

    cin >> cases;

    while(cases--){
        cin >> str1 >> str2;
        
        tam = str2.length();
        if(tam>str1.length()) cout << "nao encaixa" << endl;
        else {
            nStr = str1.substr(str1.length()-tam, tam);
            if(strcmp(nStr.c_str(),str2.c_str())==0){
                cout << "encaixa" << endl;
            }else cout << "nao encaixa" << endl; 
        }

    }

    return 0;
}