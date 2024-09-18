#include <bits/stdc++.h>
using namespace std;

int main() {
  set<int> real;
  int bil, pessoas;
  int bilNumber;

  while (cin >> bil >> pessoas && bil && pessoas)
  {
    for(int i=0;i<pessoas;i++) {
      cin >> bilNumber;
      if(bilNumber <= bil)
        real.insert(bilNumber);
    }
    cout << pessoas - real.size() << endl;
  }
  

  return 0;
}