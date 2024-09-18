#include <bits/stdc++.h>
using namespace std;


int main() {
  int n;
  string str, word;
  set<string> list;

  cin >> n;
  cin.ignore();

  while (n--)
  {
    getline(cin, str);
    stringstream ss(str);
    while (ss >> word)
    {
      list.insert(word);
    }

    bool firstWord = true;
    for(auto x : list) {
      if(firstWord) cout << x;
      else cout << " " << x;
      firstWord = false;
    }
    cout << endl;

    list.clear();
  }
  
  
  return 0;
}