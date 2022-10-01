#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){

    int casos, mais=0, menos=0;
    string str;
    vector<string> nome, comp;
    vector<string>::iterator it, it2;

    cin >> casos;
    getchar();

    for(int i=0;i<casos;i++){
        getline(cin, str);
        nome.push_back(str.substr(2, str.length()));
        comp.push_back(str.substr(0,1));
    }

    sort(nome.begin(), nome.end());

    for(it=nome.begin();it != nome.end();++it){
        cout << *it << endl;
    }
    for(it2=comp.begin();it2 != comp.end();++it2){
        if(*it2 == "+") mais++;
        if(*it2 == "-") menos++;
    }

    cout << "Se comportaram: " << mais << " | Nao se comportaram: " << menos << endl;

    return 0;
}