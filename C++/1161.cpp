#include <bits/stdc++.h>
using namespace std;

long long int fatorial(int n) {
  long long int result = n;
  if(n == 0) return 1;
  if(n == 1) return 1;
  while(n>1) {
    result *= n-1;
    n--;
  }
  return result;
}

int main() {
  int n1, n2;
  
  while(cin >> n1 >> n2) {
    cout << fatorial(n1) + fatorial(n2) << endl;
  }

  return 0;
}