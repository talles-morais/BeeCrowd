#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  int count=0;

  cin >> n;
  
  while (n--)
  {
    cin >> x;

    for (int i = 1; i <= x/2; i++)
      if(x%i == 0) count+=i;
    
    if(count == x) cout << x << " eh perfeito" << endl;
    else cout << x << " nao eh perfeito" << endl;

    count = 0;
  }
  

  return 0;
}