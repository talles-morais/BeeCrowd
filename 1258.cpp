#include <bits/stdc++.h>

using namespace std;

int main(){
    int casos;
    bool flag = false;
    string cam, nome;
    vector<pair<string , string>> vt[6];
    
    cin >> casos;
    getchar();
    while(casos){
        if(flag) cout << endl;
        int aux = casos;
        while(aux--){
            getline(cin, nome);
            getline(cin, cam);

            if(cam=="branco P") vt[0].push_back(make_pair(cam, nome));
            else if(cam == "branco M") vt[1].push_back(make_pair(cam, nome));
            else if(cam == "branco G") vt[2].push_back(make_pair(cam, nome));
            else if(cam == "vermelho P") vt[3].push_back(make_pair(cam, nome));
            else if(cam == "vermelho M") vt[4].push_back(make_pair(cam, nome));
            else if(cam == "vermelho G") vt[5].push_back(make_pair(cam, nome));
        }
            
        for (int i = 0; i < 6; i++){
            sort(vt[i].begin(), vt[i].end());
        }
        
        for(int i = 0; i < 6; i++)
        {
            for(auto x: vt[i]){    
                cout << x.first << " " << x.second << endl;
            }
        }

        for (int i = 0; i < 6; i++){
            vt[i].clear();
        }
        flag = true;
        cin >> casos;
        getchar();
    }

    return 0;
}