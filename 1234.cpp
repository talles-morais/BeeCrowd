#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    int aux=0;

    while(getline(cin, str)){


        for (int i = 0; i < str.length(); i++){
            if(str[i]!=' '){
                if(aux==0 && str[i]>='a' && str[i]<='z'){
                    str[i]= toupper(str[i]);
                    aux++;
                    continue;
                }else if(aux==0 && str[i]>='A' && str[i]<='Z'){
                    aux++;
                    continue;
                }

                if(str[i]>='a' && str[i]<='z' && aux%2!=0){
                    aux++;
                    continue;

                }else if(str[i]>='A' && str[i]<='Z' && aux%2!=0){
                    str[i] = tolower(str[i]);
                    aux++;
                    continue;
                }

                if(str[i]>='A' && str[i]<='Z' && aux%2==0){
                    aux++;
                    continue;

                }else if(str[i]>='a' && str[i]<='z' && aux%2==0){
                    str[i] = toupper(str[i]);
                    aux++;
                    continue;
                }
                

            }
        }
        cout << str << endl;
        aux=0;
    }    
    


    return 0;
}