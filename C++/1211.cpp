#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    vector<string> lista;
    string davez;

    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            cin >> davez;
            lista.push_back(davez);
        }
        sort(lista.begin(), lista.end());
        int resp = 0;
        for (int i = 1; i < n; i++) {
            int retorna = 0, idx = 0;
            while (idx < lista[i].size()) {
                if (lista[i][idx] == lista[i - 1][idx]) {
                    retorna++;
                    idx++;
                } else {
                    break;
                }
            }
            resp += retorna;
        }
        lista.clear();
        cout << resp << '\n';
    }
    return 0;
}