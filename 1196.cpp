#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    char teclado[48] = {'`','1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=','Q','W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']', '\\',
                       'A','S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';', '\'', 'Z','X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/'};
    char str[1000];
    string s;
    bool flag = false;

    while(getline(cin, s)){
        strcpy(str, s.c_str());
        
        for(int i=0;i<strlen(str);i++){
            for(int j=1;j<strlen(teclado);j++){
                if(str[i] == teclado[j]) str[i] = teclado[j-1];
            }
        }
        cout << str << endl; 
    }
    return 0;
}