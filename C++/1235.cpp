#include <bits/stdc++.h>

using namespace std;

int main() {
    int casos, mid;
    string str;
    vector<char> strNew;

    cin >> casos;
    getchar();
    while (casos--)
    {
        getline(cin, str);
        mid = str.size()/2;

        for (int i = mid-1; i >= 0; i--)
        {
            strNew.push_back(str[i]);
        }
        for (int i = str.size()-1; i >= mid; i--)
        {
            strNew.push_back(str[i]);
        }
        
        for(auto x: strNew){
            cout << x;
        }
        cout << endl;
        strNew.clear();
    }
    return 0;
}