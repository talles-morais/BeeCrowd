#include <bits/stdc++.h>

using namespace std;

int cont = 0;

void eraseAllSubStr(std::string & mainStr, const std::string & toErase)
{
    size_t pos = std::string::npos;
    // Search for the substring in string in a loop untill nothing is found
    while ((pos  = mainStr.find(toErase) )!= std::string::npos)
    {
        // If found then erase it from string
        mainStr.erase(pos, toErase.length());
        cont++;
    }
}

int main(){
    int casos;
    string str;

    cin >> casos;
    
    while(casos--){
        cin >> str;

        str.erase(remove(str.begin(), str.end(), '.'), str.end());
        while(str.find("<>")!=-1){
            eraseAllSubStr(str, "<>");
        }
        
        cout << cont << endl;
        cont = 0;       
    }
    return 0;
}