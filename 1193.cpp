// -----------------------------------Incompleto-----------------------------------------------------


#include <bits/stdc++.h>

using namespace std;


string decBin(int n){
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    reverse(r.begin(), r.end());
    return r;
}

unsigned long binDec(string b){
    unsigned long r, pot=1;
    char ch[b.length()+1];
    strcpy(ch,b.c_str());
    
    if(ch[b.length()]=='0') r=0;
    else r=1;
    
    for (int i = b.length()-2; i > -1; --i){
        if(ch[i]=='0'){
            pot*=2;
        } 
        else{
            r += pow(2, pot);
            pot*=2;
        } 
    }
    return r;
}

unsigned long hex2dec(string h)
{
    unsigned long result = 0;
    for (int i=0; i<h.length(); i++) {
        if (h[i]>=48 && h[i]<=57)
        {
            result += (h[i]-48)*pow(16,h.length()-i-1);
        } else if (h[i]>=65 && h[i]<=70) {
            result += (h[i]-55)*pow(16,h.length( )-i-1);
        } else if (h[i]>=97 && h[i]<=102) {
            result += (h[i]-87)*pow(16,h.length()-i-1);
        }
    }
    return result;
}

int main(){
    int casos, i=0;
    unsigned long int deci;
    string valor, base;

    cin >> casos;
    while(i<casos){
        cin >> valor >> base;
        if(base=="dec"){
            printf("Case %d:\n", i+1);
            deci = stoul(valor);
            cout << hex << deci << " hex" << endl;
            cout << decBin(deci) << " bin" << endl << endl;
        }
        if(base == "bin"){
            printf("Case %d:\n", i+1);
            deci = binDec(valor);
            cout << deci << " dec" << endl;
            cout << hex << deci << " hex" << endl << endl;
        }
        if(base == "hex"){
            printf("Case %d:\n", i+1);
            deci = hex2dec(valor);
            cout << dec << deci << " dec" << endl;
            cout << decBin(deci) << " bin" << endl << endl;
        }
        i++;
    }

    return 0;
}