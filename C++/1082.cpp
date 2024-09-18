#include <bits/stdc++.h>

using namespace std;

vector<char> adj[26];
int comp;
int visitado[26+'a'];
int n=26;


void dfs(int inicio){
    comp = 0;
    if(!visitado[inicio]){
        visitado[inicio] = 1;
        cout << (char) inicio << ",";

        for(auto x: adj[inicio]){
            dfs(x);
        }
        comp=1;
    }
}


int main(){

    int casos, vert, edges;
    char ori, dest;

    cin >> casos;

    while(casos--){
        cin >> vert >> edges;

        for (int j = 0; j < edges; j++){
            cin >> ori >> dest;
            adj[ori].push_back(dest);
        }
        
        for(int i='a';i < vert+'a'; i++){
            dfs(i);
            if(comp){
                cout << endl;
            }
        }

        for (int i = 0; i < vert; i++){
            adj[i].clear();
        }
        cout << comp << endl;
        memset(visitado, 0, sizeof(visitado));
    }


    return 0;
}