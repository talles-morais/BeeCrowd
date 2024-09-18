#include<bits/stdc++.h>
using namespace std;

int main() {
  int h, z, l;
  vector<int> vet;
  map<int, string> mp;
  int maior = 0, maIndex, menor=100000000, meIndex, index;

  cin >> h >> z >> l;

  vet.push_back(h);
  vet.push_back(z);
  vet.push_back(l);

  mp[0] = "huguinho";
  mp[1] = "zezinho";
  mp[2] = "luisinho";

  for (int i = 0; i < 3; i++)
  {
    if(vet[i] > maior) {
      maior = vet[i];
      maIndex = i;
    }
    if(vet[i] < menor) {
      menor = vet[i];
      meIndex = i;
    }
  }

  for (int i = 0; i < 3; i++)
  {
    if(i != maIndex && i != meIndex) index = i;
  }
  
  cout << mp[index] << endl;

  return 0;
}