#include <bits/stdc++.h>

using namespace std;

int main() {
  int inicio, fim, tempo;

  cin >> inicio >> fim;

  if(inicio == fim) tempo = 24;
  else if(inicio > fim) tempo = (24 - inicio) + fim;
  else tempo = fim - inicio;

  cout << "O JOGO DUROU " << tempo << " HORA(S)";

  return 0;
}