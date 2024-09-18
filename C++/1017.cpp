#include <bits/stdc++.h>
using namespace std;
 
#define KML 12

int main() {
    int horas, kmh;
    double litros, dist;
        
    cout << fixed << setprecision(3);
    cin >> horas >> kmh;
    
    dist = horas * kmh;
    litros = dist / KML;
    
    cout << litros << endl;
 
    return 0;
}