#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int t=0, v=0;
  int result = 0;
  cin >> n;

  while(n) {
    cin >> t >> v;
    result += t*v;
    n--;
  }

  cout << result << endl;
}