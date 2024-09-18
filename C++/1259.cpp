#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> vet(n);

  for (int i = 0; i < n; i++)
  {
    cin >> vet[i];
  }

  sort(vet.begin(), vet.end(), [](int a, int b) {
     if (a % 2 == 0 && b % 2 == 0) { 
        // pares, ordem crescente
        return a < b;
    } else if (a % 2 == 1 && b % 2 == 1) { 
        // ímpares, ordem decrescente
        return a > b;
    } else {
        // Um é par e o outro é ímpar, pares vêm primeiro
        return (a % 2 == 0);
    }
  });

  for(auto x : vet) {
    cout << x << endl;
  }
  
  return 0;
}