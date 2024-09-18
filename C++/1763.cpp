#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<pair<string, string>> vt;
    string country;
    bool flag=false;

    vt.push_back({{"brasil"},{"Feliz Natal!"}});
    vt.push_back({{"alemanha"},{"Frohliche Weihnachten!"}});
    vt.push_back({{"austria"},{"Frohe Weihnacht!"}});
    vt.push_back({{"coreia"},{"Chuk Sung Tan!"}});
    vt.push_back({{"espanha"},{"Feliz Navidad!"}});
    vt.push_back({{"grecia"},{"Kala Christougena!"}});
    vt.push_back({{"estados-unidos"},{"Merry Christmas!"}});
    vt.push_back({{"inglaterra"},{"Merry Christmas!"}});
    vt.push_back({{"australia"},{"Merry Christmas!"}});
    vt.push_back({{"portugal"},{"Feliz Natal!"}});
    vt.push_back({{"suecia"},{"God Jul!"}});
    vt.push_back({{"turquia"},{"Mutlu Noeller"}});
    vt.push_back({{"argentina"},{"Feliz Navidad!"}});
    vt.push_back({{"chile"},{"Feliz Navidad!"}});
    vt.push_back({{"mexico"},{"Feliz Navidad!"}});
    vt.push_back({{"antardida"},{"Merry Christmas!"}});
    vt.push_back({{"canada"},{"Merry Christmas!"}});
    vt.push_back({{"irlanda"},{"Nollaig Shona Dhuit!"}});
    vt.push_back({{"belgica"},{"Zalig Kerstfeest!"}});
    vt.push_back({{"italia"},{"Buon Natale!"}});
    vt.push_back({{"libia"},{"Buon Natale!"}});
    vt.push_back({{"siria"},{"Milad Mubarak!"}});
    vt.push_back({{"marrocos"},{"Milad Mubarak!"}});
    vt.push_back({{"japao"},{"Merii Kurisumasu!"}});
    
    while(cin>>country){
        for (auto x: vt)
        {
            if(x.first==country){
                cout << x.second << endl;
                flag=true;
            }
        }
        if(!flag) cout << "--- NOT FOUND ---" << endl;
        flag = false;
    }


    return 0;
}
