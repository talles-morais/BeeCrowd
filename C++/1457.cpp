#include<bits/stdc++.h>
using namespace std;

long long int fatorialK(int n, int k) {
  if(n <= 1) return 1;
  else {
    return n * fatorialK(n-1*k, k);
  }
}

int main() {
  int n, exc=0, num;
  string ln;

  cin >> n;

  while (n--)
  {
    cin >> ln;
    num = stoi(ln);

    for(auto& ch : ln) {
      if(ch == '!') exc++;
    }

    cout << fatorialK(num, exc) << endl;
    exc = 0;
  }
  

  return 0;
}