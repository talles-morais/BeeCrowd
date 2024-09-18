#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<double> notaAtual{100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.5, 0.25, 0.1, 0.05, 0.01};
  int index = 0;
  double valor;
  int caixa[12] = {0};

  cin >> valor;
  cout << fixed << setprecision(2);
  cout << "NOTAS:" << endl;
  while (valor > 0.00)
  {
    if (valor >= notaAtual[index])
    {
      valor -= notaAtual[index];
      caixa[index]++;
      valor = round(valor*100.00) / 100.00;
    } else {
      index++;
    }
  }

  for (int i = 0; i < 6; i++)
  {
    cout << caixa[i] << " nota (s) de R$ " << notaAtual[i] << endl;
  }

  cout << "MOEDAS:" << endl;

  for (int i = 6; i < 12; i++)
  {
    cout << caixa[i] << " moeda (s) de R$ " << notaAtual[i] << endl;
  }


  /**
   * Escreva a sua solução aqui
   * Code your solution here
   * Escriba su solución aquí
   */

  return 0;
}