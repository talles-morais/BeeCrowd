#include <bits/stdc++.h>
using namespace std;

void comparaQuad(int divx, int divy, int x, int y) {

  if((divx-x) == 0 || (divy-y) == 0) {
    cout << "divisa" << endl;
  } else if(x < divx) {
    if(y > divy) {
      cout << "NO" << endl;
    } else {
      cout << "SO" << endl;
    }
  } else {
    if(y > divy) {
      cout << "NE" << endl;
    } else {
      cout << "SE" << endl;
    }
  }
}

int main() {
  int consultas;
  int divx, divy;
  int x, y;

  while(cin >> consultas && consultas != 0) {
    cin >> divx >> divy;
    for (int i = 0; i < consultas; i++)
    {
      cin >> x >> y;
      comparaQuad(divx, divy, x, y);
    }
  };

  return 0;
}