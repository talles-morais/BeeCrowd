#include <bits/stdc++.h>

using namespace std;

set<char> uni;
set<char>::iterator it;
vector<char> vt;
int marca[200] = {0};
vector<pair<int, int>> res;
string cadeia;

void distintos(string str){
    for (int i = 0; i < str.length(); i++){
        uni.insert(str[i]);
    }
}

void quant(){
    int i=0;
    for (it = uni.begin(); it != uni.end(); ++it)
        vt.push_back(*it);
    
    for (auto x: vt){
        for (int j = 0; j < cadeia.length(); j++)
            if(x==cadeia[j]) marca[i]+=1; 
        i++;
    }
}

bool sortFst(const pair<int,int> &a, const pair<int,int> &b){
    return (a.first > b.first);
}

bool sortSec(const pair<int,int> &a, const pair<int,int> &b){
    return (a.second < b.second);
}

int main(){
    bool brl=false;
    while(cin >> cadeia){

        int i=0;
        distintos(cadeia);
        quant();

        for(auto x: uni){
            res.push_back(make_pair(x, marca[i]));
            i++;
        }

        sort(res.begin(),res.end(),sortFst);
        stable_sort(res.begin(), res.end(), sortSec);
    
        if(brl) cout << endl;
        brl=true;

        for(auto y: res){    
            cout << y.first << " " << y.second << endl;
        }
        uni.clear();
        vt.clear();
        res.clear();
        memset(marca, 0, sizeof(marca));
    }
    return 0;
}