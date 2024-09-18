#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  bool stop = false;
  int abreP=0, fechaP=0;

  while(cin >> str) {
    for(auto c: str) {
      if(c == '(') abreP++;
      if(c == ')') fechaP++;
      if(fechaP > abreP) {
        stop = true;
        break;
      }
    }
    if(abreP == fechaP && !stop) cout << "correct" << endl;
    else cout << "incorrect" << endl;

    abreP = fechaP = 0;
    stop = false;
    if(cin.eof())
      break;
  }

  return 0;
}