#include <bits/stdc++.h>

using namespace std;

int main(){
    int casos, tam, maior, i=0;
    string str1, str2;
    vector<char> res;
    char aux;

    cin >> casos;
    while(casos--){
        cin >> str1 >> str2;

        
        if(str1.length()<str2.length()){
            tam = str1.length();
            maior = str2.length();
        }else{
            tam = str2.length();
            maior = str1.length();
        }

        while(tam--){
            res.push_back(str1[i]);
            res.push_back(str2[i]);
            i++;
        }

        if(str1.length()<str2.length()){
            for (int j = i; j < str2.length(); j++)
            {
                res.push_back(str2[j]);
            }
        }else{
            for (int j = i; j < str1.length(); j++)
            {
                res.push_back(str1[j]);
            }
        }

        for(char k: res){
            cout << k;
        }
        cout << endl;
        res.clear();
        i=0;
    }
    
    return 0;
}